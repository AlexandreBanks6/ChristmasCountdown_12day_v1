#include "day12window.h"
#include "ui_day12window.h"

Day12Window::Day12Window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Day12Window)
{
    ui->setupUi(this);
    ui->day12_title_label->setStyleSheet("QLabel { background-color : lightblue}");
    ui->day12_title_label->setText("<font color='black'> Day 12: You knock my socks off babe. ;) Click the button for a hint and open up day 12.");


    //Setting up video stuff


    player=new QMediaPlayer(this);
    //connect(player,SIGNAL(videoOutputChanged()),this,SLOT(new_video()));


    audioOutput = new QAudioOutput(this);
    vw=new QVideoWidget(this);
    ui->gridLayout->addWidget(vw,2,0,-1,-1);
    //vw->lower();
    QSize size=this->size();
    //qDebug()<<size.width();
    vw->setGeometry(0,int(size.height()*0.1),size.width(),200);

    player->setAudioOutput(audioOutput);
    player->setVideoOutput(vw);
    connect(this, &QDialog::finished, this, &Day12Window::stopPlayer);
}

Day12Window::~Day12Window()
{
    delete ui;
}

void Day12Window::on_pushButton_clicked()
{

    player=new QMediaPlayer(this);
    audioOutput = new QAudioOutput(this);

    player->setAudioOutput(audioOutput);
    player->setVideoOutput(vw);

    player->setSource(QUrl::fromLocalFile("../Resources/day12_video.mp4"));
    qDebug() << player->mediaStatus();

    audioOutput->setVolume(50);
    player->setLoops(1);
    vw->show();
    player->play();

    //Setting background of window
    QPixmap bkgnd("../Resources/BackgroundImages/day12_background.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::KeepAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Window, bkgnd);
    this->setPalette(palette);

}

void Day12Window::stopPlayer()
{
    player->stop();
}

