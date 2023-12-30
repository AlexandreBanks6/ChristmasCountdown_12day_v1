/********************************************************************************
** Form generated from reading UI file 'day10window.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DAY10WINDOW_H
#define UI_DAY10WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Day10Window
{
public:
    QGridLayout *gridLayout;
    QLabel *day10_title_label;
    QPushButton *day10_toggle_button;
    QLabel *day10_place_description_label;
    QLabel *day10_outputimage_label;

    void setupUi(QDialog *Day10Window)
    {
        if (Day10Window->objectName().isEmpty())
            Day10Window->setObjectName("Day10Window");
        Day10Window->resize(602, 441);
        gridLayout = new QGridLayout(Day10Window);
        gridLayout->setObjectName("gridLayout");
        day10_title_label = new QLabel(Day10Window);
        day10_title_label->setObjectName("day10_title_label");
        day10_title_label->setMaximumSize(QSize(400, 50));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        day10_title_label->setFont(font);
        day10_title_label->setFrameShape(QFrame::Box);
        day10_title_label->setWordWrap(true);

        gridLayout->addWidget(day10_title_label, 0, 0, 1, 2);

        day10_toggle_button = new QPushButton(Day10Window);
        day10_toggle_button->setObjectName("day10_toggle_button");

        gridLayout->addWidget(day10_toggle_button, 1, 0, 1, 1);

        day10_place_description_label = new QLabel(Day10Window);
        day10_place_description_label->setObjectName("day10_place_description_label");

        gridLayout->addWidget(day10_place_description_label, 1, 1, 1, 1);

        day10_outputimage_label = new QLabel(Day10Window);
        day10_outputimage_label->setObjectName("day10_outputimage_label");

        gridLayout->addWidget(day10_outputimage_label, 2, 0, 1, 2);


        retranslateUi(Day10Window);

        QMetaObject::connectSlotsByName(Day10Window);
    } // setupUi

    void retranslateUi(QDialog *Day10Window)
    {
        Day10Window->setWindowTitle(QCoreApplication::translate("Day10Window", "Dialog", nullptr));
        day10_title_label->setText(QCoreApplication::translate("Day10Window", "Day 10: Some pictures of pretty places at Christmas for a pretty gal <3", nullptr));
        day10_toggle_button->setText(QCoreApplication::translate("Day10Window", "Toggle to next cool place", nullptr));
        day10_place_description_label->setText(QString());
        day10_outputimage_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Day10Window: public Ui_Day10Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DAY10WINDOW_H
