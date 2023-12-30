/********************************************************************************
** Form generated from reading UI file 'day8window.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DAY8WINDOW_H
#define UI_DAY8WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Day8Window
{
public:
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *day8_title_label;

    void setupUi(QDialog *Day8Window)
    {
        if (Day8Window->objectName().isEmpty())
            Day8Window->setObjectName("Day8Window");
        Day8Window->resize(899, 622);
        gridLayout = new QGridLayout(Day8Window);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(-1, 30, 30, 30);
        label_3 = new QLabel(Day8Window);
        label_3->setObjectName("label_3");
        label_3->setMaximumSize(QSize(250, 100));
        label_3->setWordWrap(true);

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        label = new QLabel(Day8Window);
        label->setObjectName("label");
        label->setMaximumSize(QSize(250, 100));
        label->setWordWrap(true);

        gridLayout->addWidget(label, 2, 1, 1, 1);

        label_4 = new QLabel(Day8Window);
        label_4->setObjectName("label_4");
        label_4->setMaximumSize(QSize(250, 100));
        label_4->setWordWrap(true);

        gridLayout->addWidget(label_4, 3, 1, 1, 1);

        label_2 = new QLabel(Day8Window);
        label_2->setObjectName("label_2");
        label_2->setMaximumSize(QSize(250, 100));
        label_2->setWordWrap(true);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        day8_title_label = new QLabel(Day8Window);
        day8_title_label->setObjectName("day8_title_label");
        day8_title_label->setMaximumSize(QSize(250, 300));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        day8_title_label->setFont(font);
        day8_title_label->setFrameShape(QFrame::Box);
        day8_title_label->setWordWrap(true);

        gridLayout->addWidget(day8_title_label, 0, 0, 1, 1);


        retranslateUi(Day8Window);

        QMetaObject::connectSlotsByName(Day8Window);
    } // setupUi

    void retranslateUi(QDialog *Day8Window)
    {
        Day8Window->setWindowTitle(QCoreApplication::translate("Day8Window", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("Day8Window", "They can be old boyz too, living up to 50 years!!! No way, that do be nuts lol.", nullptr));
        label->setText(QCoreApplication::translate("Day8Window", "Geckos have microscopic hair on their feet!!", nullptr));
        label_4->setText(QCoreApplication::translate("Day8Window", "Also, you know those funky frills that some lizards have, those are used to scare off predators!", nullptr));
        label_2->setText(QCoreApplication::translate("Day8Window", "The biggest lizard is the Komodo dragon and these boys can be up to 2.6 meters long!!", nullptr));
        day8_title_label->setText(QCoreApplication::translate("Day8Window", "Day 8: Some cool facts about lizards for ya!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Day8Window: public Ui_Day8Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DAY8WINDOW_H
