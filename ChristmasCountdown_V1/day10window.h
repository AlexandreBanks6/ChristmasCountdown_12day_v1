#ifndef DAY10WINDOW_H
#define DAY10WINDOW_H

#include <QDialog>
#include <QFile>

namespace Ui {
class Day10Window;
}

class Day10Window : public QDialog
{
    Q_OBJECT
    int picture_num=1;
    int MAXNUMBEROFPICTURES=6;

public:
    explicit Day10Window(QWidget *parent = nullptr);
    ~Day10Window();

private slots:
    void on_day10_toggle_button_clicked();

private:
    Ui::Day10Window *ui;
};

#endif // DAY10WINDOW_H
