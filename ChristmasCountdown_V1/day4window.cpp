#include "day4window.h"
#include "ui_day4window.h"

Day4Window::Day4Window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Day4Window)
{
    ui->setupUi(this);

    //Setting background of window
    QPixmap bkgnd("../Resources/BackgroundImages/day4_background.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::KeepAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Window, bkgnd);
    this->setPalette(palette);

    //Setting text color of title:
    ui->day4_title_label->setStyleSheet("QLabel { background-color : black}");
    ui->day4_title_label->setText("<font color='white'>Day 4: A little poem with a suggested activity :) ");

    ui->day4_poem_label->setStyleSheet("QLabel { background-color : black}");

}

Day4Window::~Day4Window()
{
    delete ui;
}

void Day4Window::on_pushButton_clicked()
{
    QFile file("../Resources/christmas_poem.txt");
    if(!file.open(QFile::ReadOnly | QFile::Text))
    {
        qInfo()<<"Problem reading poem file";
        return;
    }
    QTextStream in(&file);
    QString text=in.readAll();
    ui->day4_poem_label->setText(text);
    file.close();

}

