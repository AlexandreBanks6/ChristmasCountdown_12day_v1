#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "day1window.h"
#include "day2window.h"
#include "day3window.h"
#include "day4window.h"
#include "day5window.h"
#include "day6window.h"

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

private:
    Ui::MainWindow *ui;
    Day1Window *day1_window;
    day2window *day2_window;
    Day3Window *day3_window;
    Day4Window *day4_window;
    Day5Window *day5_window;
    Day6Window *day6_window;


};
#endif // MAINWINDOW_H
