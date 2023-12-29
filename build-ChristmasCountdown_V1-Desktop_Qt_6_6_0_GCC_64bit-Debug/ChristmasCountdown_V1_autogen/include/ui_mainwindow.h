/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLCDNumber *lcdNumber;
    QPushButton *pushButton;
    QProgressBar *progressBar;
    QLabel *title_label;
    QLabel *label;
    QSpinBox *day_spinBox;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(525, 492);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setMaximumSize(QSize(500, 16777215));
        lcdNumber->setDigitCount(2);
        lcdNumber->setProperty("intValue", QVariant(1));

        verticalLayout->addWidget(lcdNumber);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(301, 71));
        pushButton->setMaximumSize(QSize(16777215, 100));

        verticalLayout->addWidget(pushButton);

        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName("progressBar");
        progressBar->setMaximumSize(QSize(16777215, 30));
        progressBar->setValue(8);

        verticalLayout->addWidget(progressBar);


        gridLayout->addLayout(verticalLayout, 4, 0, 1, 2);

        title_label = new QLabel(centralwidget);
        title_label->setObjectName("title_label");
        title_label->setMaximumSize(QSize(500, 100));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        title_label->setFont(font);
        title_label->setFrameShape(QFrame::Box);
        title_label->setAlignment(Qt::AlignCenter);
        title_label->setWordWrap(true);

        gridLayout->addWidget(title_label, 0, 0, 1, 2);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setMaximumSize(QSize(80, 40));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        day_spinBox = new QSpinBox(centralwidget);
        day_spinBox->setObjectName("day_spinBox");
        day_spinBox->setMaximumSize(QSize(80, 30));
        day_spinBox->setMinimum(1);
        day_spinBox->setMaximum(12);

        gridLayout->addWidget(day_spinBox, 3, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 525, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Click here for today's special surprise! ", nullptr));
        title_label->setText(QCoreApplication::translate("MainWindow", "Georgie's 12 Day Christmas Countdown (or count after)", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Pick Day:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
