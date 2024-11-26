/********************************************************************************
** Form generated from reading UI file 'xogamewidget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XOGAMEWIDGET_H
#define UI_XOGAMEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_XOGameWidget
{
public:
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QGridLayout *gridLayout_2;
    QLabel *label_timer;

    void setupUi(QWidget *XOGameWidget)
    {
        if (XOGameWidget->objectName().isEmpty())
            XOGameWidget->setObjectName("XOGameWidget");
        XOGameWidget->resize(271, 300);
        gridLayout = new QGridLayout(XOGameWidget);
        gridLayout->setObjectName("gridLayout");
        lineEdit = new QLineEdit(XOGameWidget);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 2, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");

        gridLayout->addLayout(gridLayout_2, 1, 0, 1, 1);

        label_timer = new QLabel(XOGameWidget);
        label_timer->setObjectName("label_timer");
        label_timer->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_timer->sizePolicy().hasHeightForWidth());
        label_timer->setSizePolicy(sizePolicy);
        label_timer->setSizeIncrement(QSize(0, 50));
        label_timer->setBaseSize(QSize(50, 0));

        gridLayout->addWidget(label_timer, 0, 0, 1, 1);


        retranslateUi(XOGameWidget);

        QMetaObject::connectSlotsByName(XOGameWidget);
    } // setupUi

    void retranslateUi(QWidget *XOGameWidget)
    {
        XOGameWidget->setWindowTitle(QCoreApplication::translate("XOGameWidget", "Form", nullptr));
        label_timer->setText(QCoreApplication::translate("XOGameWidget", "Timer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class XOGameWidget: public Ui_XOGameWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XOGAMEWIDGET_H
