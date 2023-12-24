#ifndef DAY8WINDOW_H
#define DAY8WINDOW_H

#include <QDialog>

#include <QMediaPlayer>
#include <QVideoWidget>
#include <QtMultimedia>
#include <QDebug>
#include <QGridLayout>
#include <QGraphicsVideoItem>
#include <ctime>

namespace Ui {
class Day8Window;
}

class Day8Window : public QDialog
{
    Q_OBJECT

public:
    explicit Day8Window(QWidget *parent = nullptr);
    ~Day8Window();

private:
    Ui::Day8Window *ui;

    QMediaPlayer* player;
    QVideoWidget* vw;
    QAudioOutput* audioOutput = new QAudioOutput(this);
};

#endif // DAY8WINDOW_H
