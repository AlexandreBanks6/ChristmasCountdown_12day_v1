/********************************************************************************
** Form generated from reading UI file 'day5window.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DAY5WINDOW_H
#define UI_DAY5WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Day5Window
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *day5_title_label;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox;
    QComboBox *animalType_box;
    QLabel *videostream_label;

    void setupUi(QDialog *Day5Window)
    {
        if (Day5Window->objectName().isEmpty())
            Day5Window->setObjectName("Day5Window");
        Day5Window->resize(570, 476);
        verticalLayout_2 = new QVBoxLayout(Day5Window);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(25, 25, 25, 25);
        day5_title_label = new QLabel(Day5Window);
        day5_title_label->setObjectName("day5_title_label");
        day5_title_label->setMaximumSize(QSize(200, 50));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        day5_title_label->setFont(font);
        day5_title_label->setFrameShape(QFrame::Box);
        day5_title_label->setWordWrap(true);

        verticalLayout_2->addWidget(day5_title_label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        checkBox = new QCheckBox(Day5Window);
        checkBox->setObjectName("checkBox");

        verticalLayout->addWidget(checkBox);

        animalType_box = new QComboBox(Day5Window);
        animalType_box->addItem(QString());
        animalType_box->addItem(QString());
        animalType_box->addItem(QString());
        animalType_box->setObjectName("animalType_box");
        animalType_box->setMaximumSize(QSize(80, 16777215));

        verticalLayout->addWidget(animalType_box);


        verticalLayout_2->addLayout(verticalLayout);

        videostream_label = new QLabel(Day5Window);
        videostream_label->setObjectName("videostream_label");

        verticalLayout_2->addWidget(videostream_label);


        retranslateUi(Day5Window);

        QMetaObject::connectSlotsByName(Day5Window);
    } // setupUi

    void retranslateUi(QDialog *Day5Window)
    {
        Day5Window->setWindowTitle(QCoreApplication::translate("Day5Window", "Dialog", nullptr));
        day5_title_label->setText(QCoreApplication::translate("Day5Window", "Day 5: Spirit Animal Converter", nullptr));
        checkBox->setText(QCoreApplication::translate("Day5Window", "Show Spirit Animal", nullptr));
        animalType_box->setItemText(0, QCoreApplication::translate("Day5Window", "lizard", nullptr));
        animalType_box->setItemText(1, QCoreApplication::translate("Day5Window", "goat", nullptr));
        animalType_box->setItemText(2, QString());

        videostream_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Day5Window: public Ui_Day5Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DAY5WINDOW_H
