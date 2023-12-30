/********************************************************************************
** Form generated from reading UI file 'day3window.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DAY3WINDOW_H
#define UI_DAY3WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Day3Window
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *day3_title_label;
    QVBoxLayout *verticalLayout;
    QLabel *mealtype_label;
    QComboBox *mealtype_box;
    QVBoxLayout *verticalLayout_2;
    QLabel *cuisinetype_label;
    QComboBox *cuisinetype_box;
    QGridLayout *gridLayout;
    QPushButton *generaterecipe_button;
    QSpacerItem *verticalSpacer;
    QTextEdit *recipe_textedit;

    void setupUi(QDialog *Day3Window)
    {
        if (Day3Window->objectName().isEmpty())
            Day3Window->setObjectName("Day3Window");
        Day3Window->resize(824, 173);
        gridLayout_3 = new QGridLayout(Day3Window);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        day3_title_label = new QLabel(Day3Window);
        day3_title_label->setObjectName("day3_title_label");
        day3_title_label->setMaximumSize(QSize(16777215, 50));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        day3_title_label->setFont(font);
        day3_title_label->setFrameShape(QFrame::Box);
        day3_title_label->setWordWrap(true);

        gridLayout_2->addWidget(day3_title_label, 0, 0, 1, 2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        mealtype_label = new QLabel(Day3Window);
        mealtype_label->setObjectName("mealtype_label");
        mealtype_label->setMaximumSize(QSize(150, 30));

        verticalLayout->addWidget(mealtype_label);

        mealtype_box = new QComboBox(Day3Window);
        mealtype_box->addItem(QString());
        mealtype_box->addItem(QString());
        mealtype_box->addItem(QString());
        mealtype_box->addItem(QString());
        mealtype_box->setObjectName("mealtype_box");
        mealtype_box->setMaximumSize(QSize(150, 30));

        verticalLayout->addWidget(mealtype_box);


        gridLayout_2->addLayout(verticalLayout, 1, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        cuisinetype_label = new QLabel(Day3Window);
        cuisinetype_label->setObjectName("cuisinetype_label");
        cuisinetype_label->setMaximumSize(QSize(150, 30));

        verticalLayout_2->addWidget(cuisinetype_label);

        cuisinetype_box = new QComboBox(Day3Window);
        cuisinetype_box->addItem(QString());
        cuisinetype_box->addItem(QString());
        cuisinetype_box->addItem(QString());
        cuisinetype_box->addItem(QString());
        cuisinetype_box->addItem(QString());
        cuisinetype_box->addItem(QString());
        cuisinetype_box->addItem(QString());
        cuisinetype_box->addItem(QString());
        cuisinetype_box->setObjectName("cuisinetype_box");
        cuisinetype_box->setMaximumSize(QSize(150, 30));

        verticalLayout_2->addWidget(cuisinetype_box);


        gridLayout_2->addLayout(verticalLayout_2, 1, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        generaterecipe_button = new QPushButton(Day3Window);
        generaterecipe_button->setObjectName("generaterecipe_button");

        gridLayout->addWidget(generaterecipe_button, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        recipe_textedit = new QTextEdit(Day3Window);
        recipe_textedit->setObjectName("recipe_textedit");

        gridLayout->addWidget(recipe_textedit, 1, 0, 1, 2);


        gridLayout_2->addLayout(gridLayout, 1, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);


        retranslateUi(Day3Window);

        QMetaObject::connectSlotsByName(Day3Window);
    } // setupUi

    void retranslateUi(QDialog *Day3Window)
    {
        Day3Window->setWindowTitle(QCoreApplication::translate("Day3Window", "Dialog", nullptr));
        day3_title_label->setText(QCoreApplication::translate("Day3Window", "Day 3: Filterable Random Recipe Generator!", nullptr));
        mealtype_label->setText(QCoreApplication::translate("Day3Window", "Select Meal Type", nullptr));
        mealtype_box->setItemText(0, QCoreApplication::translate("Day3Window", "Breakfast", nullptr));
        mealtype_box->setItemText(1, QCoreApplication::translate("Day3Window", "Lunch", nullptr));
        mealtype_box->setItemText(2, QCoreApplication::translate("Day3Window", "Dinner", nullptr));
        mealtype_box->setItemText(3, QCoreApplication::translate("Day3Window", "Dessert", nullptr));

        cuisinetype_label->setText(QCoreApplication::translate("Day3Window", "Select Cuisine", nullptr));
        cuisinetype_box->setItemText(0, QCoreApplication::translate("Day3Window", "French", nullptr));
        cuisinetype_box->setItemText(1, QCoreApplication::translate("Day3Window", "Japanese", nullptr));
        cuisinetype_box->setItemText(2, QCoreApplication::translate("Day3Window", "Thai", nullptr));
        cuisinetype_box->setItemText(3, QCoreApplication::translate("Day3Window", "Indian", nullptr));
        cuisinetype_box->setItemText(4, QCoreApplication::translate("Day3Window", "Mexican", nullptr));
        cuisinetype_box->setItemText(5, QCoreApplication::translate("Day3Window", "Canadian", nullptr));
        cuisinetype_box->setItemText(6, QCoreApplication::translate("Day3Window", "Italian", nullptr));
        cuisinetype_box->setItemText(7, QCoreApplication::translate("Day3Window", "Chinese", nullptr));

        generaterecipe_button->setText(QCoreApplication::translate("Day3Window", "Generate Recipe Link:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Day3Window: public Ui_Day3Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DAY3WINDOW_H
