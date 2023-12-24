#include "day9window.h"
#include "ui_day9window.h"

Day9Window::Day9Window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Day9Window)
{
    ui->setupUi(this);

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


}

Day9Window::~Day9Window()
{
    delete ui;
}

void Day9Window::on_day9_startgame_button_clicked()
{
    //Initializes the game if it is not already started
    if(!game_started)
    {
        game_started=true;
        //Starts the camera
        capture.open(0);
        if (!capture.isOpened()){
            qInfo()<<"Error in capture";

        }
        //Sets the target locations
        int w=ui->day9_video_output_label->width();
        int h=ui->day9_video_output_label->height();

        QRandomGenerator::global()->bounded(10,w-20);
        QRandomGenerator::global()->bounded(10,h-20);

        //Starts the timer


    }
}

void Day9Window::updateFrame()
{

}

