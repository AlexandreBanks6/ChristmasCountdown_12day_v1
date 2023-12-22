#include "day6window.h"
#include "ui_day6window.h"

Day6Window::Day6Window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Day6Window)
{
    ui->setupUi(this);

    ui->day6_title_label->setStyleSheet("QLabel { background-color : lightblue}");
    ui->day6_title_label->setText("<font color='white'>Day 6: Some memes for someone a bit cold-sensitive ;)) ");


    //Setting background of window
    QPixmap bkgnd("../Resources/BackgroundImages/day6_background.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::KeepAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Window, bkgnd);
    this->setPalette(palette);
}

Day6Window::~Day6Window()
{
    delete ui;
}

void Day6Window::on_meme_pushbutton_clicked()
{
    QString file_name="../Resources/MemesOfColdOut/meme"+QString::number(memeNumber)+".jpg";
    QPixmap img(file_name);
    int w=ui->meme_output_label->width();
    int h=ui->meme_output_label->height();
    ui->meme_output_label->setPixmap(img.scaled(w,h,Qt::KeepAspectRatio));
    if(memeNumber>=MAXMEMEBUMBER){
        memeNumber=1;
    }
    else{
        memeNumber+=1;
    }
}

