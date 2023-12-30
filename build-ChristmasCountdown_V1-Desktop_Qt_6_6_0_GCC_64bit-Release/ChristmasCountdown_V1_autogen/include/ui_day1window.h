/********************************************************************************
** Form generated from reading UI file 'day1window.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DAY1WINDOW_H
#define UI_DAY1WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Day1Window
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_3;
    QPushButton *pause_day1;
    QPushButton *play_day1;
    QPushButton *start_day1;
    QLabel *video_title;

    void setupUi(QDialog *Day1Window)
    {
        if (Day1Window->objectName().isEmpty())
            Day1Window->setObjectName("Day1Window");
        Day1Window->resize(839, 587);
        gridLayout_2 = new QGridLayout(Day1Window);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(30, 30, 30, 30);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        pause_day1 = new QPushButton(Day1Window);
        pause_day1->setObjectName("pause_day1");

        gridLayout_3->addWidget(pause_day1, 0, 2, 1, 1);

        play_day1 = new QPushButton(Day1Window);
        play_day1->setObjectName("play_day1");

        gridLayout_3->addWidget(play_day1, 0, 1, 1, 1);

        start_day1 = new QPushButton(Day1Window);
        start_day1->setObjectName("start_day1");

        gridLayout_3->addWidget(start_day1, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_3, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);

        video_title = new QLabel(Day1Window);
        video_title->setObjectName("video_title");
        video_title->setMaximumSize(QSize(16777215, 20));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        video_title->setFont(font);
        video_title->setAutoFillBackground(false);
        video_title->setFrameShape(QFrame::Box);
        video_title->setFrameShadow(QFrame::Plain);
        video_title->setLineWidth(1);
        video_title->setWordWrap(false);

        gridLayout_2->addWidget(video_title, 0, 0, 1, 1, Qt::AlignLeft);


        retranslateUi(Day1Window);

        QMetaObject::connectSlotsByName(Day1Window);
    } // setupUi

    void retranslateUi(QDialog *Day1Window)
    {
        Day1Window->setWindowTitle(QCoreApplication::translate("Day1Window", "Dialog", nullptr));
        pause_day1->setText(QCoreApplication::translate("Day1Window", "Pause", nullptr));
        play_day1->setText(QCoreApplication::translate("Day1Window", "Play", nullptr));
        start_day1->setText(QCoreApplication::translate("Day1Window", "Start 1st Video", nullptr));
        video_title->setText(QCoreApplication::translate("Day1Window", "!!!Day1: Funny Cat Videos!!!!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Day1Window: public Ui_Day1Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DAY1WINDOW_H
