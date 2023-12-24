#ifndef DAY11WINDOW_H
#define DAY11WINDOW_H

#include <QDialog>

namespace Ui {
class Day11Window;
}

class Day11Window : public QDialog
{
    Q_OBJECT

public:
    explicit Day11Window(QWidget *parent = nullptr);
    ~Day11Window();

private:
    Ui::Day11Window *ui;
};

#endif // DAY11WINDOW_H
