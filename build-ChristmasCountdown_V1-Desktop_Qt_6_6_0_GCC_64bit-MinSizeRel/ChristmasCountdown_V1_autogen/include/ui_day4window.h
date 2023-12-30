/********************************************************************************
** Form generated from reading UI file 'day4window.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DAY4WINDOW_H
#define UI_DAY4WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Day4Window
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QLabel *day4_poem_label;
    QLabel *day4_title_label;

    void setupUi(QDialog *Day4Window)
    {
        if (Day4Window->objectName().isEmpty())
            Day4Window->setObjectName("Day4Window");
        Day4Window->resize(400, 300);
        gridLayout = new QGridLayout(Day4Window);
        gridLayout->setObjectName("gridLayout");
        pushButton = new QPushButton(Day4Window);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);

        day4_poem_label = new QLabel(Day4Window);
        day4_poem_label->setObjectName("day4_poem_label");
        day4_poem_label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(day4_poem_label, 2, 0, 1, 1);

        day4_title_label = new QLabel(Day4Window);
        day4_title_label->setObjectName("day4_title_label");
        day4_title_label->setMaximumSize(QSize(250, 50));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        day4_title_label->setFont(font);
        day4_title_label->setFrameShape(QFrame::Box);
        day4_title_label->setAlignment(Qt::AlignCenter);
        day4_title_label->setWordWrap(true);

        gridLayout->addWidget(day4_title_label, 0, 0, 1, 1);


        retranslateUi(Day4Window);

        QMetaObject::connectSlotsByName(Day4Window);
    } // setupUi

    void retranslateUi(QDialog *Day4Window)
    {
        Day4Window->setWindowTitle(QCoreApplication::translate("Day4Window", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Day4Window", "See Poem:", nullptr));
        day4_poem_label->setText(QString());
        day4_title_label->setText(QCoreApplication::translate("Day4Window", "Day 4: A little poem with a suggested activity :) ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Day4Window: public Ui_Day4Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DAY4WINDOW_H
