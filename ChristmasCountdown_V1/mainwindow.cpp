#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    //day1_window=new Day1Window(this);
    //day1_window->show();
    //day2_window=new day2window(this);
    //day2_window->show();

    //day3_window=new Day3Window(this);
    //day3_window->show();

    day5_window=new Day5Window(this);
    day5_window->show();


}

