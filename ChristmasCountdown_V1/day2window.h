#ifndef DAY2WINDOW_H
#define DAY2WINDOW_H

#include <QDialog>

namespace Ui {
class day2window;
}

class day2window : public QDialog
{
    Q_OBJECT

public:
    explicit day2window(QWidget *parent = nullptr);
    ~day2window();

private slots:
    void on_day2_button_clicked();

private:
    Ui::day2window *ui;
    //QPixmap date_image_1;
};

#endif // DAY2WINDOW_H
