#include "day11window.h"
#include "ui_day11window.h"

Day11Window::Day11Window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Day11Window)
{
    ui->setupUi(this);
    ui->day11_title_label->setStyleSheet("QLabel { background-color : lightblue}");
    ui->day11_title_label->setText("<font color='black'> Day 11: Open up gift labeled day 11. You might feel like having soup after this one ;)");

    //Setting background of window
    QPixmap bkgnd("../Resources/BackgroundImages/day11_background.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::KeepAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Window, bkgnd);
    this->setPalette(palette);



    player=new QMediaPlayer(this);
    //connect(player,SIGNAL(videoOutputChanged()),this,SLOT(new_video()));


    audioOutput = new QAudioOutput(this);

    vw=new QVideoWidget(this);
    ui->gridLayout->addWidget(vw,1,0);
    vw->lower();
    QSize size=this->size();
    //qDebug()<<size.width();
    vw->setGeometry(0,int(size.height()*0.1),size.width(),200);

    player->setAudioOutput(audioOutput);
    player->setVideoOutput(vw);

    player->setSource(QUrl::fromLocalFile("../Resources/day11_video.mp4"));

    audioOutput->setVolume(50);
    player->setLoops(-1);
    vw->show();
    player->play();

}

Day11Window::~Day11Window()
{
    delete ui;
}
