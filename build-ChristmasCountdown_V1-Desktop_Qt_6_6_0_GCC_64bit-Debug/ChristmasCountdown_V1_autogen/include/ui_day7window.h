/********************************************************************************
** Form generated from reading UI file 'day7window.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DAY7WINDOW_H
#define UI_DAY7WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Day7Window
{
public:
    QGridLayout *gridLayout;
    QPushButton *day7_button;
    QLabel *day7_title_label;

    void setupUi(QDialog *Day7Window)
    {
        if (Day7Window->objectName().isEmpty())
            Day7Window->setObjectName("Day7Window");
        Day7Window->resize(620, 448);
        gridLayout = new QGridLayout(Day7Window);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(30, 30, 30, 30);
        day7_button = new QPushButton(Day7Window);
        day7_button->setObjectName("day7_button");

        gridLayout->addWidget(day7_button, 1, 0, 1, 1);

        day7_title_label = new QLabel(Day7Window);
        day7_title_label->setObjectName("day7_title_label");
        day7_title_label->setMaximumSize(QSize(300, 60));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        day7_title_label->setFont(font);
        day7_title_label->setFrameShape(QFrame::Box);
        day7_title_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        day7_title_label->setWordWrap(true);

        gridLayout->addWidget(day7_title_label, 0, 0, 1, 1);


        retranslateUi(Day7Window);

        QMetaObject::connectSlotsByName(Day7Window);
    } // setupUi

    void retranslateUi(QDialog *Day7Window)
    {
        Day7Window->setWindowTitle(QCoreApplication::translate("Day7Window", "Dialog", nullptr));
        day7_button->setText(QCoreApplication::translate("Day7Window", "See hint:", nullptr));
        day7_title_label->setText(QCoreApplication::translate("Day7Window", "Day 7: Open up gift labeled day 7! Push the button for a hint ;)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Day7Window: public Ui_Day7Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DAY7WINDOW_H
