#ifndef DAY5WINDOW_H
#define DAY5WINDOW_H

#include <QDialog>
#include <opencv2/opencv.hpp>
#include <QTimer>

//Includes for face detection
#include <opencv2/objdetect.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

namespace Ui {
class Day5Window;
}

class Day5Window : public QDialog
{
    Q_OBJECT
    //std::string cascadeName, nestedCascadeName;
    cv::CascadeClassifier faceCascade;
    cv::Mat goatImage, lizardImage;
    //double scale=1;

public:
    explicit Day5Window(QWidget *parent = nullptr);
    ~Day5Window();
private slots:
    void updateFrame();

private:
    Ui::Day5Window *ui;
    cv::VideoCapture capture;
    QTimer *timer;
};

#endif // DAY5WINDOW_H
