#include "day8window.h"
#include "ui_day8window.h"

Day8Window::Day8Window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Day8Window)
{
    ui->setupUi(this);

    ui->day8_title_label->setStyleSheet("QLabel { background-color : lightblue}");
    ui->day8_title_label->setText("<font color='black'>Day 8: Some cool facts about lizards for ya!");

    //Setting colour of facts text
    ui->label->setStyleSheet("QLabel { background-color : lightblue}");
    ui->label->setText("<font color='black'>Geckos have microscopic hair on their feet!!");

    ui->label_2->setStyleSheet("QLabel { background-color : lightblue}");
    ui->label_2->setText("<font color='black'>The biggest lizard is the Komodo dragon and these boys can be up to 2.6 meters long!!");

    ui->label_3->setStyleSheet("QLabel { background-color : lightblue}");
    ui->label_3->setText("<font color='black'>They can be old boyz too, living up to 50 years!!! No way, that do be nuts lol.");

    ui->label_4->setStyleSheet("QLabel { background-color : lightblue}");
    ui->label_4->setText("<font color='black'>Also, you know those funky frills that some lizards have, those are used to scare off predators!");


    //Setting background of window
    QPixmap bkgnd("../Resources/BackgroundImages/day8_background.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::KeepAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Window, bkgnd);
    this->setPalette(palette);


    //Setting up video stuff

    player=new QMediaPlayer(this);
    //connect(player,SIGNAL(videoOutputChanged()),this,SLOT(new_video()));


    audioOutput = new QAudioOutput(this);

    vw=new QVideoWidget(this);
    ui->gridLayout->addWidget(vw,0,1);
    //vw->;
    QSize size=this->size();
    //qDebug()<<size.width();
    vw->setGeometry(0,int(size.height()*0.1),size.width(),200);

    player->setAudioOutput(audioOutput);
    player->setVideoOutput(vw);

    player->setSource(QUrl::fromLocalFile("../Resources/LizardStuffs/day8_lizardvideo.mp4"));

    audioOutput->setVolume(50);
    player->setLoops(-1);
    vw->show();
    player->play();

    connect(this, &QDialog::finished, this, &Day8Window::stopPlayer);
}

Day8Window::~Day8Window()
{
    delete ui;
}

void Day8Window::stopPlayer()
{
    player->stop();
}
