#include "day5window.h"
#include "ui_day5window.h"

Day5Window::Day5Window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Day5Window)
{

    ui->setupUi(this);
    ui->day5_title_label->setStyleSheet("QLabel { background-color : lightblue}");
    ui->day5_title_label->setText("<font color='black'>Day 5: Spirit Animal Converter");


    //Setting background of window
    QPixmap bkgnd("../Resources/BackgroundImages/day5_background.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::KeepAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Window, bkgnd);
    this->setPalette(palette);

    //Set up cascade classifier stuff:
    if(!faceCascade.load("../Include/opencv/data/haarcascades/haarcascade_frontalface_default.xml"))
    {
        qInfo()<<"Error in loading haar cascade";
    }

    //Set up images of goat/lizard
    goatImage=cv::imread("../Resources/goat.jpeg");
    lizardImage=cv::imread("../Resources/lizard.jpeg");
    if (goatImage.empty()||lizardImage.empty()) {
        // Either the goat image or lizard image is not there
        qInfo() << "Either the goat image or lizard image is not there";
        return;
    }




    capture.open(0);
    if (!capture.isOpened()){
        qInfo()<<"Error in capture";

    }

    //Create a Qtimer to update the frame display
    timer=new QTimer(this);
    //Connecting timer to the updateFrame slot:
    connect(timer, SIGNAL(timeout()), this, SLOT(updateFrame()));
    timer->start(10); //Update every 10 milliseconds

}

Day5Window::~Day5Window()
{
    delete ui;
}

void Day5Window::updateFrame()
{
    cv::Mat frame;
    //capture a frame from the webcame
    if (!capture.read(frame)) {
        // Handle error if unable to capture frame
        qInfo()<<"Error in frame capture";
        return;
    }


    //Face detection stuffs:
    //Read faces in the current frame:
    cv::Mat grayFrame;
    cv::cvtColor(frame, grayFrame, cv::COLOR_BGR2GRAY);
    std::vector<cv::Rect> faces;
    faceCascade.detectMultiScale(grayFrame,faces,1.1,3,0|cv::CASCADE_SCALE_IMAGE,cv::Size(30,30));

    if(!ui->checkBox->isChecked())
    {
        //We get a rectangle
        for (const cv::Rect& face : faces) {
            cv::rectangle(frame, face, cv::Scalar(0, 255, 0), 2); // Green rectangle around the face
        }

    }
    else{ //We use superposition
        //Drawing rectangle around face:
        for (const cv::Rect& face : faces) {
            //cv::rectangle(frame, face, cv::Scalar(0, 255, 0), 2); // Green rectangle around the face
            cv::Mat warpedImage;
            std::string image_type=ui->animalType_box->currentText().toStdString();

            if(image_type=="goat"){
                cv::resize(goatImage, warpedImage, cv::Size(face.width, face.height));
                cv::Mat roi = frame(face);

                // Ensure the overlay image and ROI have the same size
                if (warpedImage.size() == roi.size()) {
                    // Blend the warped image onto the ROI of the frame
                    warpedImage.copyTo(roi);
                }
            }
            else if(image_type=="lizard")
            {
                cv::resize(lizardImage, warpedImage, cv::Size(face.width, face.height));
                cv::Mat roi = frame(face);

                // Ensure the overlay image and ROI have the same size
                if (warpedImage.size() == roi.size()) {
                    // Blend the warped image onto the ROI of the frame
                    warpedImage.copyTo(roi);
                }
            }
            else{
                cv::rectangle(frame, face, cv::Scalar(0, 255, 0), 2); // Green rectangle around the face
            }


        }


    }




    // Convert the OpenCV Mat frame to QImage
    QImage qImg = QImage(frame.data, frame.cols, frame.rows, static_cast<int>(frame.step), QImage::Format_RGB888);
    // Convert BGR to RGB color format
    qImg = qImg.rgbSwapped();
    // Display the frame in QLabel or QGraphicsView
    ui->videostream_label->setPixmap(QPixmap::fromImage(qImg));

}
