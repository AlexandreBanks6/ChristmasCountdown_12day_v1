#ifndef DAY12WINDOW_H
#define DAY12WINDOW_H

#include <QDialog>

namespace Ui {
class Day12Window;
}

class Day12Window : public QDialog
{
    Q_OBJECT

public:
    explicit Day12Window(QWidget *parent = nullptr);
    ~Day12Window();

private:
    Ui::Day12Window *ui;
};

#endif // DAY12WINDOW_H
