#ifndef DAY4WINDOW_H
#define DAY4WINDOW_H

#include <QDialog>
#include <QString>
#include <QFile>

namespace Ui {
class Day4Window;
}

class Day4Window : public QDialog
{
    Q_OBJECT

public:
    explicit Day4Window(QWidget *parent = nullptr);
    ~Day4Window();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Day4Window *ui;
};

#endif // DAY4WINDOW_H
