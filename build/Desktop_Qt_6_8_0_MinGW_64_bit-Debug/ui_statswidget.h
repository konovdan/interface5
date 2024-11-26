/********************************************************************************
** Form generated from reading UI file 'statswidget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATSWIDGET_H
#define UI_STATSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StatsWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *label_text_1;
    QLabel *label_value_games;
    QLabel *label_text_2;
    QLabel *label_4;
    QLabel *label_text_3;
    QLabel *label_value_min_steps;

    void setupUi(QWidget *StatsWidget)
    {
        if (StatsWidget->objectName().isEmpty())
            StatsWidget->setObjectName("StatsWidget");
        StatsWidget->resize(400, 300);
        gridLayout = new QGridLayout(StatsWidget);
        gridLayout->setObjectName("gridLayout");
        label_text_1 = new QLabel(StatsWidget);
        label_text_1->setObjectName("label_text_1");

        gridLayout->addWidget(label_text_1, 0, 0, 1, 1);

        label_value_games = new QLabel(StatsWidget);
        label_value_games->setObjectName("label_value_games");

        gridLayout->addWidget(label_value_games, 0, 1, 1, 1);

        label_text_2 = new QLabel(StatsWidget);
        label_text_2->setObjectName("label_text_2");

        gridLayout->addWidget(label_text_2, 1, 0, 1, 1);

        label_4 = new QLabel(StatsWidget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 1, 1, 1, 1);

        label_text_3 = new QLabel(StatsWidget);
        label_text_3->setObjectName("label_text_3");

        gridLayout->addWidget(label_text_3, 2, 0, 1, 1);

        label_value_min_steps = new QLabel(StatsWidget);
        label_value_min_steps->setObjectName("label_value_min_steps");

        gridLayout->addWidget(label_value_min_steps, 2, 1, 1, 1);


        retranslateUi(StatsWidget);

        QMetaObject::connectSlotsByName(StatsWidget);
    } // setupUi

    void retranslateUi(QWidget *StatsWidget)
    {
        StatsWidget->setWindowTitle(QCoreApplication::translate("StatsWidget", "Form", nullptr));
        label_text_1->setText(QCoreApplication::translate("StatsWidget", "\320\230\320\263\321\200 \321\201\321\213\320\263\321\200\320\260\320\275\320\276", nullptr));
        label_value_games->setText(QCoreApplication::translate("StatsWidget", "TextLabel", nullptr));
        label_text_2->setText(QCoreApplication::translate("StatsWidget", "\320\234\320\260\320\272\321\201\320\270\320\274\321\203\320\274 \321\205\320\276\320\264\320\276\320\262", nullptr));
        label_4->setText(QCoreApplication::translate("StatsWidget", "TextLabel", nullptr));
        label_text_3->setText(QCoreApplication::translate("StatsWidget", "\320\234\320\270\320\275\320\270\320\274\321\203\320\274 \321\205\320\276\320\264\320\276\320\262", nullptr));
        label_value_min_steps->setText(QCoreApplication::translate("StatsWidget", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StatsWidget: public Ui_StatsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATSWIDGET_H
