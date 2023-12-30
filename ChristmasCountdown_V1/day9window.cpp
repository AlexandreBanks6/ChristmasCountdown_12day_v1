#include "day9window.h"
#include "ui_day9window.h"

Day9Window::Day9Window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Day9Window)
{
    ui->setupUi(this);

    ui->day9_title_label->setStyleSheet("QLabel { background-color : lightgreen}");
    ui->day9_title_label->setText("<font color='black'>Day 9: Some things for your road trip across Canada!!!");
    ui->label->setStyleSheet("QLabel { background-color : lightgreen}");
    ui->label->setText("<font color='black'>I thought it would be fun for you to have some tunes and a good book for your cross-country adventure! Open up the package labeled day 9, it's a book with deets on all the provinces as well as animals and wildlife in Canada. Sorry that it is old, but I thought it could be fun for you to have. Also, click the button below to get a link to a spotify playlist I made for your road trip (I tried to keep most of them as Canadian artists). One of the tunes should be playing right now as a preview!");

    //Setting background of window
    QPixmap bkgnd("../Resources/BackgroundImages/day9_background.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::KeepAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Window, bkgnd);
    this->setPalette(palette);

    //Starting music
    player=new QMediaPlayer;
    audioOutput = new QAudioOutput;

    player->setAudioOutput(audioOutput);

    player->setSource(QUrl::fromLocalFile("../Resources/AudioFiles/day9_audio.mp3"));

    audioOutput->setVolume(50);
    player->setLoops(-1);
    player->play();

    connect(this, &QDialog::finished, this, &Day9Window::stopPlayer);

}

Day9Window::~Day9Window()
{
    delete ui;
}

void Day9Window::on_pushButton_clicked()
{
    ui->link_browser->setText("https://open.spotify.com/playlist/3H5H1Wu1XZQeQ0dsiq46y7?si=300ed58e3a0446af");
}

void Day9Window::stopPlayer()
{
    player->stop();
}

