#include "day1window.h"
#include "ui_day1window.h"




Day1Window::Day1Window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Day1Window)
{
    ui->setupUi(this);


    player=new QMediaPlayer(this);
    //connect(player,SIGNAL(videoOutputChanged()),this,SLOT(new_video()));


    audioOutput = new QAudioOutput(this);
    vw=new QVideoWidget(this);

    ui->gridLayout->addWidget(vw,1,0,-1,-1);
    QSize size=this->size();
    //qDebug()<<size.width();
    vw->setGeometry(0,int(size.height()*0.1),size.width(),200);

    player->setAudioOutput(audioOutput);
    player->setVideoOutput(vw);




}

Day1Window::~Day1Window()
{
    delete ui;
}

void Day1Window::on_play_day1_clicked()
{



    if((player->playbackState()==QMediaPlayer::PausedState)){
        player->play();

    }
    else{
        player->setSource(QUrl::fromLocalFile("../Videos/video1.mp4"));
        qDebug() << player->mediaStatus();

        audioOutput->setVolume(50);
        vw->show();
        player->play();
        connect(player,&QMediaPlayer::playingChanged,this,&Day1Window::new_video);
        connect(ui->pause_day1,SIGNAL(clicked()),player,SLOT(pause()));

    }


}

void Day1Window::new_video()
{
    qInfo()<<player->playbackState();
    //qInfo()<<QString::number(player->playbackState()==QMediaPlayer::PausedState);

    if((player->playbackState()==QMediaPlayer::StoppedState)){
        disconnect(player,&QMediaPlayer::playingChanged,this,&Day1Window::new_video);
        VideoNumber+=1;
        player->stop();
        if(VideoNumber<3){
            //QString vid_file="../Videos/video"+std::to_string(VideoNumber)+".mp4";
            QString vid_file="../Videos/video"+QString::number(VideoNumber)+".mp4";
            player=new QMediaPlayer(this);
            audioOutput = new QAudioOutput(this);
            player->setAudioOutput(audioOutput);
            player->setVideoOutput(vw);

            player->setSource(QUrl::fromLocalFile(vid_file));
            qDebug() << player->mediaStatus();

            audioOutput->setVolume(50);
            vw->show();
            player->play();
            connect(player,&QMediaPlayer::playingChanged,this,&Day1Window::new_video);
            connect(ui->pause_day1,SIGNAL(clicked()),player,SLOT(pause()));


        }
    }


}

