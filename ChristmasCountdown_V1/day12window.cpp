#include "day12window.h"
#include "ui_day12window.h"

Day12Window::Day12Window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Day12Window)
{
    ui->setupUi(this);
}

Day12Window::~Day12Window()
{
    delete ui;
}
