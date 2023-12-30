#include "day7window.h"
#include "ui_day7window.h"

Day7Window::Day7Window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Day7Window)
{
    ui->setupUi(this);

    ui->day7_title_label->setStyleSheet("QLabel { background-color : lightblue}");
    ui->day7_title_label->setText("<font color='black'>Day 7: Open up gift labeled day 7! Push the button for a hint ;)");





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

    connect(this, &QDialog::finished, this, &Day7Window::stopPlayer);
}

Day7Window::~Day7Window()
{
    delete ui;
}

void Day7Window::on_day7_button_clicked()
{
    player=new QMediaPlayer(this);
    audioOutput = new QAudioOutput(this);

    player->setAudioOutput(audioOutput);
    player->setVideoOutput(vw);

    player->setSource(QUrl::fromLocalFile("../Resources/day7_lindorvideo.mp4"));
    qDebug() << player->mediaStatus();

    audioOutput->setVolume(50);
    player->setLoops(1);
    vw->show();
    player->play();

    //Setting background of window
    QPixmap bkgnd("../Resources/BackgroundImages/day7_background.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::KeepAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Window, bkgnd);
    this->setPalette(palette);
}

void Day7Window::stopPlayer()
{
    player->stop();
}

