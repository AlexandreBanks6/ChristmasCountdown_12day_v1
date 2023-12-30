#ifndef DAY9WINDOW_H
#define DAY9WINDOW_H

#include <QDialog>
#include <QMediaPlayer>
#include <QVideoWidget>
#include <QtMultimedia>
#include <QDebug>
#include <QGridLayout>
#include <QGraphicsVideoItem>
#include <ctime>

namespace Ui {
class Day9Window;
}

class Day9Window : public QDialog
{
    Q_OBJECT

public:
    explicit Day9Window(QWidget *parent = nullptr);
    ~Day9Window();

private slots:
    void on_pushButton_clicked();
    void stopPlayer();

private:
    Ui::Day9Window *ui;
    QMediaPlayer *player;
    QAudioOutput* audioOutput = new QAudioOutput;

};

#endif // DAY9WINDOW_H
