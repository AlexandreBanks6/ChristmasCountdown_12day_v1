#ifndef DAY12WINDOW_H
#define DAY12WINDOW_H

#include <QDialog>

#include <QMediaPlayer>
#include <QVideoWidget>
#include <QtMultimedia>
#include <QDebug>
#include <QGridLayout>
#include <QGraphicsVideoItem>
#include <ctime>

namespace Ui {
class Day12Window;
}

class Day12Window : public QDialog
{
    Q_OBJECT

public:
    explicit Day12Window(QWidget *parent = nullptr);
    ~Day12Window();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Day12Window *ui;

    QMediaPlayer* player;
    QVideoWidget* vw;
    QAudioOutput* audioOutput = new QAudioOutput(this);

};

#endif // DAY12WINDOW_H
