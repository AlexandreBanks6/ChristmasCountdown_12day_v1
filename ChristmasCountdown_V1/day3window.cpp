#include "day3window.h"
#include "ui_day3window.h"

Day3Window::Day3Window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Day3Window)
{
    ui->setupUi(this);
    ui->day3_title_label->setStyleSheet("QLabel { background-color : lightblue}");
    ui->day3_title_label->setText("<font color='black'>Day 3: Filterable Random Recipe Generator!");
    ui->mealtype_label->setStyleSheet("QLabel { background-color : lightblue}");
    ui->mealtype_label->setText("<font color='black'>Select Meal Type:");

    ui->cuisinetype_label->setStyleSheet("QLabel { background-color : lightblue}");
    ui->cuisinetype_label->setText("<font color='black'>Select Cuisine:");
    //Setting background of window
    QPixmap bkgnd("../Resources/BackgroundImages/day3_background.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::KeepAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Window, bkgnd);
    this->setPalette(palette);
}

Day3Window::~Day3Window()
{
    delete ui;
}

void Day3Window::select_url_cat(QString *mealType, QString *cuisineType)
{
    QString meal_type,cuisine_type;
    meal_type=ui->mealtype_box->currentText();
    cuisine_type=ui->cuisinetype_box->currentText();
    *mealType=meal_type;
    *cuisineType=cuisine_type;

}

void Day3Window::on_generaterecipe_button_clicked()
{
    QFile inFile(json_filepath);
    inFile.open(QIODevice::ReadOnly|QIODevice::Text);
    QByteArray data = inFile.readAll();
    inFile.close();

    QJsonParseError errorPtr;
    QJsonDocument doc = QJsonDocument::fromJson(data, &errorPtr);
    if (doc.isNull()) {
        ui->recipe_textedit->setText("Dataset File not Found (look for recipes_list.json in Resources folder");
        return;
    }
    QJsonObject rootObj = doc.object();

    //This is where we get the meal type and cuisine type from drop-down boxes
    QString mealType; // = "breakfast"; // Change this to "lunch" if needed
    QString cuisineType; //= "French"; // Change this to "Italian" if needed

    select_url_cat(&mealType,&cuisineType);

    QJsonObject mealObj = rootObj.value(mealType).toObject();
    QJsonArray urlsArray = mealObj.value(cuisineType).toArray();

    int urlarray_size=urlsArray.size();
    if(urlarray_size>0){

        int url_ind=QRandomGenerator::global()->bounded(0,urlarray_size);
        QString selected_url=urlsArray.at(url_ind).toString(); //This is the line where we get the url
        ui->recipe_textedit->setText(selected_url);
    }
    else{
        ui->recipe_textedit->setText("No Recipes Currently For Selection");
    }



}

