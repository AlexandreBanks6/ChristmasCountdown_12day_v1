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
    //day4_window=new Day4Window(this);
    //day4_window->show();

    //day5_window=new Day5Window(this);
    //day5_window->show();
    //day6_window=new Day6Window(this);
    //day6_window->show();
    //day7_window=new Day7Window(this);
    //day7_window->show();

    //day8_window=new Day8Window(this);
    //day8_window->show();
    //day10_window=new Day10Window(this);
    //day10_window->show();
    //day11_window=new Day11Window(this);
    //day11_window->show();

    day12_window=new Day12Window(this);
    day12_window->show();


}

