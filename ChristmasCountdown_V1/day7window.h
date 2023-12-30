#ifndef DAY7WINDOW_H
#define DAY7WINDOW_H

#include <QDialog>

#include <QMediaPlayer>
#include <QVideoWidget>
#include <QtMultimedia>
#include <QDebug>
#include <QGridLayout>
#include <QGraphicsVideoItem>
#include <ctime>

namespace Ui {
class Day7Window;
}

class Day7Window : public QDialog
{
    Q_OBJECT

public:
    explicit Day7Window(QWidget *parent = nullptr);
    ~Day7Window();

private slots:
    void on_day7_button_clicked();
    void stopPlayer();

private:
    Ui::Day7Window *ui;

    QMediaPlayer* player;
    QVideoWidget* vw;
    QAudioOutput* audioOutput = new QAudioOutput(this);
};

#endif // DAY7WINDOW_H
