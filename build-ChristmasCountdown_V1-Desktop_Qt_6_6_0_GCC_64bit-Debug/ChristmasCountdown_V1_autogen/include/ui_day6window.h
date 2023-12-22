/********************************************************************************
** Form generated from reading UI file 'day6window.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DAY6WINDOW_H
#define UI_DAY6WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Day6Window
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *day6_title_label;
    QPushButton *meme_pushbutton;
    QLabel *meme_output_label;

    void setupUi(QDialog *Day6Window)
    {
        if (Day6Window->objectName().isEmpty())
            Day6Window->setObjectName("Day6Window");
        Day6Window->resize(400, 300);
        verticalLayout = new QVBoxLayout(Day6Window);
        verticalLayout->setObjectName("verticalLayout");
        day6_title_label = new QLabel(Day6Window);
        day6_title_label->setObjectName("day6_title_label");
        day6_title_label->setMaximumSize(QSize(300, 50));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        day6_title_label->setFont(font);
        day6_title_label->setFrameShape(QFrame::Box);
        day6_title_label->setWordWrap(true);

        verticalLayout->addWidget(day6_title_label);

        meme_pushbutton = new QPushButton(Day6Window);
        meme_pushbutton->setObjectName("meme_pushbutton");
        meme_pushbutton->setMaximumSize(QSize(200, 16777215));

        verticalLayout->addWidget(meme_pushbutton);

        meme_output_label = new QLabel(Day6Window);
        meme_output_label->setObjectName("meme_output_label");

        verticalLayout->addWidget(meme_output_label);


        retranslateUi(Day6Window);

        QMetaObject::connectSlotsByName(Day6Window);
    } // setupUi

    void retranslateUi(QDialog *Day6Window)
    {
        Day6Window->setWindowTitle(QCoreApplication::translate("Day6Window", "Dialog", nullptr));
        day6_title_label->setText(QCoreApplication::translate("Day6Window", "Day 6: Some memes for someone a bit cold-sensitive ;)", nullptr));
        meme_pushbutton->setText(QCoreApplication::translate("Day6Window", "Push for Next Meme", nullptr));
        meme_output_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Day6Window: public Ui_Day6Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DAY6WINDOW_H
