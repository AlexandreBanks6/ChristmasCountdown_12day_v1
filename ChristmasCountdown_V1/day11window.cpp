#include "day11window.h"
#include "ui_day11window.h"

Day11Window::Day11Window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Day11Window)
{
    ui->setupUi(this);
}

Day11Window::~Day11Window()
{
    delete ui;
}
