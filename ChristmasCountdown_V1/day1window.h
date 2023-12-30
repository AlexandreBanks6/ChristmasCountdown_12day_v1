#ifndef DAY1WINDOW_H
#define DAY1WINDOW_H

#include <QDialog>
#include <QMediaPlayer>
#include <QVideoWidget>
#include <QtMultimedia>
#include <QDebug>
#include <QGridLayout>
#include <QGraphicsVideoItem>
#include <ctime>

namespace Ui {
class Day1Window;
}

class Day1Window : public QDialog
{
    Q_OBJECT
    int VideoNumber=0;
    bool isPlaying=true;
    bool isPaused=false;
    int NUMBEROFVIDEOS=12;

public:
    explicit Day1Window(QWidget *parent = nullptr);
    ~Day1Window();
    QString day_extension(int day);
    QString catvideo_display(int videonum);

private slots:
    void on_start_day1_clicked();
    void stopPlayer();

private:
    Ui::Day1Window *ui;
    QMediaPlayer* player;
    QVideoWidget* vw;
    QAudioOutput* audioOutput = new QAudioOutput(this);
};

#endif // DAY1WINDOW_H
