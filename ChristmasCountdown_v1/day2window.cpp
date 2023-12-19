#include "day2window.h"
#include "ui_day2window.h"

day2window::day2window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::day2window)
{
    ui->setupUi(this);
    ui->day2_title_label->setStyleSheet("QLabel { background-color : lightblue}");
    ui->day2_title_label->setText("<font color='black'>Day 2: Can I take you on a date GT?");
    //Setting background of window
    QPixmap bkgnd("../BackgroundImages/day2_background.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Window, bkgnd);
    this->setPalette(palette);

}

day2window::~day2window()
{
    delete ui;
}

void day2window::on_day2_button_clicked()
{
    //Showing date suggestion
    //Thandi's
    QPixmap img1("../BackgroundImages/thandi.png");
    int w=ui->day2_image_label->width();
    int h=ui->day2_image_label->height();
    ui->day2_image_label->setPixmap(img1.scaled(w,h,Qt::KeepAspectRatio));

    //Plus
    QPixmap img2("../BackgroundImages/plus.png");
    w=ui->day2_image2_label->width();
    h=ui->day2_image2_label->height();
    ui->day2_image2_label->setPixmap(img2.scaled(w,h,Qt::KeepAspectRatio));


    //Picaroons
    QPixmap img3("../BackgroundImages/picaroons.jpeg");
    w=ui->day2_image3_label->width();
    h=ui->day2_image3_label->height();
    ui->day2_image3_label->setPixmap(img3.scaled(w,h,Qt::KeepAspectRatio));


}

