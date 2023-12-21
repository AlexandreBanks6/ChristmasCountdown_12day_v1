#ifndef DAY3WINDOW_H
#define DAY3WINDOW_H

#include <QDialog>
#include <QDebug>
#include <fstream>
#include <QFile>
#include <QByteArray>
#include <QJsonParseError>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QVector>
#include <QJsonValue>
#include <QRandomGenerator>

namespace Ui {
class Day3Window;
}

class Day3Window : public QDialog
{
    Q_OBJECT
    QString json_filepath="../Resources/recipes_list.json";

public:
    explicit Day3Window(QWidget *parent = nullptr);
    ~Day3Window();
    void select_url_cat(QString* mealType,QString* cuisineType);

private slots:
    void on_generaterecipe_button_clicked();

private:
    Ui::Day3Window *ui;
};

#endif // DAY3WINDOW_H
