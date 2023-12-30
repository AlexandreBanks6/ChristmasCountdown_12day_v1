/********************************************************************************
** Form generated from reading UI file 'day12window.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DAY12WINDOW_H
#define UI_DAY12WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Day12Window
{
public:
    QGridLayout *gridLayout;
    QLabel *day12_title_label;
    QPushButton *pushButton;

    void setupUi(QDialog *Day12Window)
    {
        if (Day12Window->objectName().isEmpty())
            Day12Window->setObjectName("Day12Window");
        Day12Window->resize(591, 395);
        gridLayout = new QGridLayout(Day12Window);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(30, 30, 30, 30);
        day12_title_label = new QLabel(Day12Window);
        day12_title_label->setObjectName("day12_title_label");
        day12_title_label->setMaximumSize(QSize(500, 50));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        day12_title_label->setFont(font);
        day12_title_label->setFrameShape(QFrame::Box);
        day12_title_label->setWordWrap(true);

        gridLayout->addWidget(day12_title_label, 0, 0, 1, 1);

        pushButton = new QPushButton(Day12Window);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);


        retranslateUi(Day12Window);

        QMetaObject::connectSlotsByName(Day12Window);
    } // setupUi

    void retranslateUi(QDialog *Day12Window)
    {
        Day12Window->setWindowTitle(QCoreApplication::translate("Day12Window", "Dialog", nullptr));
        day12_title_label->setText(QCoreApplication::translate("Day12Window", "Day 12: You knock my socks off babe. ;) Click the button for a hint and open up day 12.", nullptr));
        pushButton->setText(QCoreApplication::translate("Day12Window", "Click for a hint:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Day12Window: public Ui_Day12Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DAY12WINDOW_H
