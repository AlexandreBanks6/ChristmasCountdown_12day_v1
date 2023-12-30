/********************************************************************************
** Form generated from reading UI file 'day9window.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DAY9WINDOW_H
#define UI_DAY9WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Day9Window
{
public:
    QGridLayout *gridLayout;
    QLabel *day9_title_label;
    QLabel *label;
    QPushButton *pushButton;
    QTextBrowser *link_browser;

    void setupUi(QDialog *Day9Window)
    {
        if (Day9Window->objectName().isEmpty())
            Day9Window->setObjectName("Day9Window");
        Day9Window->resize(818, 462);
        gridLayout = new QGridLayout(Day9Window);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(30, 30, 30, -1);
        day9_title_label = new QLabel(Day9Window);
        day9_title_label->setObjectName("day9_title_label");
        day9_title_label->setMaximumSize(QSize(500, 55));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        day9_title_label->setFont(font);
        day9_title_label->setFrameShape(QFrame::Box);
        day9_title_label->setWordWrap(true);

        gridLayout->addWidget(day9_title_label, 0, 0, 1, 2);

        label = new QLabel(Day9Window);
        label->setObjectName("label");
        label->setMaximumSize(QSize(16777215, 140));
        label->setWordWrap(true);

        gridLayout->addWidget(label, 1, 0, 1, 2);

        pushButton = new QPushButton(Day9Window);
        pushButton->setObjectName("pushButton");
        pushButton->setMaximumSize(QSize(220, 16777215));

        gridLayout->addWidget(pushButton, 2, 0, 1, 1);

        link_browser = new QTextBrowser(Day9Window);
        link_browser->setObjectName("link_browser");
        link_browser->setMaximumSize(QSize(16777215, 50));

        gridLayout->addWidget(link_browser, 2, 1, 1, 1);


        retranslateUi(Day9Window);

        QMetaObject::connectSlotsByName(Day9Window);
    } // setupUi

    void retranslateUi(QDialog *Day9Window)
    {
        Day9Window->setWindowTitle(QCoreApplication::translate("Day9Window", "Dialog", nullptr));
        day9_title_label->setText(QCoreApplication::translate("Day9Window", "Day 9: Some things for your road trip across Canada!!!", nullptr));
        label->setText(QCoreApplication::translate("Day9Window", "I thought it would be fun for you to have some tunes and a good book for your cross-country adventure! Open up the package labeled day 9, it's a book with deets on all the provinces as well as animals and wildlife in Canada. Sorry that it is old, but I thought it could be fun for you to have. Also, click the button below to get a link to a spotify playlist I made for your road trip. One of the tunes should be playing right now as a preview!", nullptr));
        pushButton->setText(QCoreApplication::translate("Day9Window", "Get Spotify Playlist Link:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Day9Window: public Ui_Day9Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DAY9WINDOW_H
