#ifndef DAY11WINDOW_H
#define DAY11WINDOW_H

#include <QDialog>

#include <QMediaPlayer>
#include <QVideoWidget>
#include <QtMultimedia>
#include <QDebug>
#include <QGridLayout>
#include <QGraphicsVideoItem>
#include <ctime>

namespace Ui {
class Day11Window;
}

class Day11Window : public QDialog
{
    Q_OBJECT

public:
    explicit Day11Window(QWidget *parent = nullptr);
    ~Day11Window();

private slots:
    void stopPlayer();

private:
    Ui::Day11Window *ui;

    QMediaPlayer* player;
    QVideoWidget* vw;
    QAudioOutput* audioOutput = new QAudioOutput(this);
};

#endif // DAY11WINDOW_H
