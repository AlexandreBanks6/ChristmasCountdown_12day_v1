#ifndef DAY9WINDOW_H
#define DAY9WINDOW_H

#include <QDialog>
#include <opencv2/opencv.hpp>
#include <QTimer>
#include <QRandomGenerator>

//Includes for face detection
#include <opencv2/objdetect.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>


namespace Ui {
class Day9Window;
}

class Day9Window : public QDialog
{
    Q_OBJECT
    bool game_started=false;
    int level_number=1; //10 levels total (or ten images shown)
    cv::CascadeClassifier faceCascade;
    cv::Mat goatImage, lizardImage;
    int sweater_location[2]={0,0};
    int beach_location[2]={0,0};


public:
    explicit Day9Window(QWidget *parent = nullptr);
    ~Day9Window();

private slots:
    void on_day9_startgame_button_clicked();
    void updateFrame();

private:
    Ui::Day9Window *ui;
    cv::VideoCapture capture;
    QTimer *timer;
};

#endif // DAY9WINDOW_H
