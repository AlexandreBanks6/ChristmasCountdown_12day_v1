#include "day10window.h"
#include "ui_day10window.h"

Day10Window::Day10Window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Day10Window)
{
    ui->setupUi(this);


    ui->day10_title_label->setStyleSheet("QLabel { background-color : lightblue}");
    ui->day10_title_label->setText("<font color='black'>Day 10: Some pictures of pretty places at Christmas for a pretty gal <3 ");

    ui->day10_place_description_label->setStyleSheet("QLabel { background-color : lightblue}");
    ui->day10_place_description_label->setText("<font color='black'>");



    //Setting background of window
    QPixmap bkgnd("../Resources/BackgroundImages/day10_background.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::KeepAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Window, bkgnd);
    this->setPalette(palette);
}

Day10Window::~Day10Window()
{
    delete ui;
}

void Day10Window::on_day10_toggle_button_clicked()
{
    //Read the text file with descriptions

    QFile file("../Resources/PhotosOfPrettyPlaces/pretty_places_descriptions.txt");
    if(!file.open(QFile::ReadOnly | QFile::Text))
    {
        qInfo()<<"Problem reading poem file";
        return;
    }
    QTextStream in(&file);
    for(int i=1;i<=MAXNUMBEROFPICTURES;i++)
    {
        QString text=in.readLine();
        //qInfo()<<"In for loop with i="<<QString::number(i);
        if(i==picture_num)
        {
            ui->day10_place_description_label->setText(text);
            file.close();
            break;
        }

    }

    QString file_name="../Resources/PhotosOfPrettyPlaces/picture"+QString::number(picture_num)+".jpg";
    QPixmap img(file_name);
    int w=ui->day10_outputimage_label->width();
    int h=ui->day10_outputimage_label->height();
    ui->day10_outputimage_label->setPixmap(img.scaled(w,h,Qt::KeepAspectRatio));
    if(picture_num>=MAXNUMBEROFPICTURES){
        picture_num=1;
    }
    else{
        picture_num+=1;
    }


}

