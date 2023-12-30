/********************************************************************************
** Form generated from reading UI file 'day11window.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DAY11WINDOW_H
#define UI_DAY11WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Day11Window
{
public:
    QGridLayout *gridLayout;
    QLabel *day11_title_label;

    void setupUi(QDialog *Day11Window)
    {
        if (Day11Window->objectName().isEmpty())
            Day11Window->setObjectName("Day11Window");
        Day11Window->resize(573, 434);
        gridLayout = new QGridLayout(Day11Window);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(30, 30, 30, 30);
        day11_title_label = new QLabel(Day11Window);
        day11_title_label->setObjectName("day11_title_label");
        day11_title_label->setMaximumSize(QSize(500, 55));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        day11_title_label->setFont(font);
        day11_title_label->setFrameShape(QFrame::Box);
        day11_title_label->setWordWrap(true);

        gridLayout->addWidget(day11_title_label, 0, 0, 1, 1);


        retranslateUi(Day11Window);

        QMetaObject::connectSlotsByName(Day11Window);
    } // setupUi

    void retranslateUi(QDialog *Day11Window)
    {
        Day11Window->setWindowTitle(QCoreApplication::translate("Day11Window", "Dialog", nullptr));
        day11_title_label->setText(QCoreApplication::translate("Day11Window", "Day 11: Open up gift labeled day 11. You might feel like having soup after this one;)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Day11Window: public Ui_Day11Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DAY11WINDOW_H
