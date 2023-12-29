#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "day1window.h"
#include "day2window.h"
#include "day3window.h"
#include "day4window.h"
#include "day5window.h"
#include "day6window.h"
#include "day7window.h"
#include "day8window.h"
#include "day9window.h"
#include "day10window.h"
#include "day11window.h"
#include "day12window.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_day_spinBox_valueChanged(int arg1);

private:
    Ui::MainWindow *ui;
    Day1Window *day1_window;
    day2window *day2_window;
    Day3Window *day3_window;
    Day4Window *day4_window;
    Day5Window *day5_window;
    Day6Window *day6_window;
    Day7Window *day7_window;
    Day8Window *day8_window;
    Day9Window *day9_window;
    Day10Window *day10_window;
    Day11Window *day11_window;
    Day12Window *day12_window;

    QMediaPlayer *player;
    QAudioOutput* audioOutput = new QAudioOutput;


};
#endif // MAINWINDOW_H
