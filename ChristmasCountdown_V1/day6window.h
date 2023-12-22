#ifndef DAY6WINDOW_H
#define DAY6WINDOW_H

#include <QDialog>
#include <QString>

namespace Ui {
class Day6Window;
}

class Day6Window : public QDialog
{
    Q_OBJECT
    int memeNumber=1;
    int MAXMEMEBUMBER=5;

public:
    explicit Day6Window(QWidget *parent = nullptr);
    ~Day6Window();

private slots:
    void on_meme_pushbutton_clicked();

private:
    Ui::Day6Window *ui;
};

#endif // DAY6WINDOW_H
