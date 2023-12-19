#ifndef DAY1WINDOW_H
#define DAY1WINDOW_H

#include <QDialog>
#include <QMediaPlayer>
#include <QVideoWidget>
#include <QtMultimedia>
#include <QDebug>
#include <QGridLayout>
#include <QGraphicsVideoItem>

namespace Ui {
class Day1Window;
}

class Day1Window : public QDialog
{
    Q_OBJECT
    int VideoNumber=1;


public:
    explicit Day1Window(QWidget *parent = nullptr);
    ~Day1Window();

private slots:
    void on_play_day1_clicked();
    void new_video();

private:
    Ui::Day1Window *ui;
    QMediaPlayer* player;
    QVideoWidget* vw;
    QAudioOutput* audioOutput = new QAudioOutput(this);


};

#endif // DAY1WINDOW_H
