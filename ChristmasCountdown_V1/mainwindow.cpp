#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->title_label->setStyleSheet("QLabel { background-color : lightblue}");
    ui->title_label->setText("<font color='black'>Georgie's 12 Day Christmas Countdown (or count after)! <br/>I love you <br/>Yours, Alexandre xoxo");

    ui->label->setStyleSheet("QLabel { background-color : lightblue}");
    ui->label->setText("<font color='black'>Pick Day:");

    //Modify LCD number
    ui->lcdNumber->setFrameStyle(QFrame::NoFrame);
    // Set the number color to black
    ui->lcdNumber->setSegmentStyle(QLCDNumber::Flat); // Set the segment style
    QPalette LCDpalette = ui->lcdNumber->palette(); // Get the current palette
    LCDpalette.setColor(QPalette::WindowText, Qt::black); // Set the text color to black
    ui->lcdNumber->setPalette(LCDpalette); // Apply the modified palette

    //Setting background of window
    QPixmap bkgnd("../Resources/BackgroundImages/main_background.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::KeepAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Window, bkgnd);
    this->setPalette(palette);

    //Starting music
    player=new QMediaPlayer;
    audioOutput = new QAudioOutput;

    player->setAudioOutput(audioOutput);

    player->setSource(QUrl::fromLocalFile("../Resources/AudioFiles/main_audio.mp3"));

    audioOutput->setVolume(50);
    player->setLoops(-1);
    player->play();


}

MainWindow::~MainWindow()
{
    player->stop();
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    int day_number=ui->day_spinBox->value();
    switch(day_number){
    case 1:
        day1_window=new Day1Window(this);
        day1_window->show();
        player->stop();
        break;
    case 2:
        day2_window=new day2window(this);
        day2_window->show();
        break;
    case 3:
        day3_window=new Day3Window(this);
        day3_window->show();
        break;
    case 4:
        day4_window=new Day4Window(this);
        day4_window->show();
        break;
    case 5:
        day5_window=new Day5Window(this);
        day5_window->show();
        break;
    case 6:
        day6_window=new Day6Window(this);
        day6_window->show();
        break;
    case 7:
        day7_window=new Day7Window(this);
        day7_window->show();
        player->stop();
        break;
    case 8:
        day8_window=new Day8Window(this);
        day8_window->show();
        player->stop();
        break;
    case 9:
        day9_window=new Day9Window(this);
        day9_window->show();
        player->stop();
        break;
    case 10:
        day10_window=new Day10Window(this);
        day10_window->show();
        break;
    case 11:
        day11_window=new Day11Window(this);
        day11_window->show();
        player->stop();
        break;
    case 12:
        day12_window=new Day12Window(this);
        day12_window->show();
        player->stop();
        break;
    default:
        day1_window=new Day1Window(this);
        day1_window->show();
        player->stop();
        break;
    }

}


void MainWindow::on_day_spinBox_valueChanged(int arg1)
{
    int day_number=ui->day_spinBox->value();
    int perc_number=int((day_number/12.0)*100);
    ui->lcdNumber->display(day_number);
    ui->progressBar->setValue(perc_number);
}


