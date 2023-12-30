/********************************************************************************
** Form generated from reading UI file 'day2window.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DAY2WINDOW_H
#define UI_DAY2WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_day2window
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *day2_title_label;
    QHBoxLayout *horizontalLayout;
    QPushButton *day2_button;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *day2_image_label;
    QLabel *day2_image2_label;
    QLabel *day2_image3_label;

    void setupUi(QDialog *day2window)
    {
        if (day2window->objectName().isEmpty())
            day2window->setObjectName("day2window");
        day2window->resize(679, 457);
        gridLayout = new QGridLayout(day2window);
        gridLayout->setObjectName("gridLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        day2_title_label = new QLabel(day2window);
        day2_title_label->setObjectName("day2_title_label");
        day2_title_label->setMaximumSize(QSize(16777215, 50));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        day2_title_label->setFont(font);
        day2_title_label->setFrameShape(QFrame::Box);
        day2_title_label->setWordWrap(true);

        verticalLayout->addWidget(day2_title_label, 0, Qt::AlignLeft);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        day2_button = new QPushButton(day2window);
        day2_button->setObjectName("day2_button");
        day2_button->setMaximumSize(QSize(16777215, 30));

        horizontalLayout->addWidget(day2_button);

        horizontalSpacer = new QSpacerItem(40, 30, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        day2_image_label = new QLabel(day2window);
        day2_image_label->setObjectName("day2_image_label");
        day2_image_label->setMinimumSize(QSize(0, 0));

        horizontalLayout_2->addWidget(day2_image_label);

        day2_image2_label = new QLabel(day2window);
        day2_image2_label->setObjectName("day2_image2_label");

        horizontalLayout_2->addWidget(day2_image2_label);

        day2_image3_label = new QLabel(day2window);
        day2_image3_label->setObjectName("day2_image3_label");

        horizontalLayout_2->addWidget(day2_image3_label);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);


        retranslateUi(day2window);

        QMetaObject::connectSlotsByName(day2window);
    } // setupUi

    void retranslateUi(QDialog *day2window)
    {
        day2window->setWindowTitle(QCoreApplication::translate("day2window", "Dialog", nullptr));
        day2_title_label->setText(QCoreApplication::translate("day2window", "Day 2: Can I take you on a date GT?", nullptr));
        day2_button->setText(QCoreApplication::translate("day2window", "Click here for a date suggestion: ", nullptr));
        day2_image_label->setText(QString());
        day2_image2_label->setText(QString());
        day2_image3_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class day2window: public Ui_day2window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DAY2WINDOW_H
