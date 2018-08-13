/********************************************************************************
** Form generated from reading UI file 'accelerometerwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCELEROMETERWINDOW_H
#define UI_ACCELEROMETERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_accelerometerWindow
{
public:
    QWidget *widget;

    void setupUi(QDialog *accelerometerWindow)
    {
        if (accelerometerWindow->objectName().isEmpty())
            accelerometerWindow->setObjectName(QStringLiteral("accelerometerWindow"));
        accelerometerWindow->resize(634, 506);
        accelerometerWindow->setMinimumSize(QSize(220, 0));
        widget = new QWidget(accelerometerWindow);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(9, 9, 621, 491));

        retranslateUi(accelerometerWindow);

        QMetaObject::connectSlotsByName(accelerometerWindow);
    } // setupUi

    void retranslateUi(QDialog *accelerometerWindow)
    {
        accelerometerWindow->setWindowTitle(QApplication::translate("accelerometerWindow", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class accelerometerWindow: public Ui_accelerometerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCELEROMETERWINDOW_H
