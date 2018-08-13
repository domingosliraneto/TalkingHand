/********************************************************************************
** Form generated from reading UI file 'commands.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMANDS_H
#define UI_COMMANDS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Commands
{
public:
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_5;
    QPushButton *addPwm1;
    QSlider *pwm1Value;
    QPushButton *subPwm1;
    QLabel *pwm1ValueLabel;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QPushButton *addPwm2;
    QSlider *pwm2Value;
    QPushButton *subPwm2;
    QLabel *pwm2ValueLabel;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QPushButton *addPwm3;
    QSlider *pwm3Value;
    QPushButton *subPwm3;
    QLabel *pwm3ValueLabel;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout;
    QPushButton *addPwm4;
    QSlider *pwm4Value;
    QPushButton *subPwm4;
    QLabel *pwm4ValueLabel;
    QPushButton *fixValues;
    QWidget *tab_2;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *sensorZ;
    QLineEdit *sensorY;
    QLineEdit *sensorX;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *data2Send;
    QPushButton *sendData;

    void setupUi(QDialog *Commands)
    {
        if (Commands->objectName().isEmpty())
            Commands->setObjectName(QStringLiteral("Commands"));
        Commands->resize(398, 300);
        Commands->setMinimumSize(QSize(300, 300));
        verticalLayout_2 = new QVBoxLayout(Commands);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        tabWidget = new QTabWidget(Commands);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        widget = new QWidget(tab);
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_5 = new QVBoxLayout(groupBox);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        addPwm1 = new QPushButton(groupBox);
        addPwm1->setObjectName(QStringLiteral("addPwm1"));
        addPwm1->setEnabled(true);

        verticalLayout_5->addWidget(addPwm1);

        pwm1Value = new QSlider(groupBox);
        pwm1Value->setObjectName(QStringLiteral("pwm1Value"));
        pwm1Value->setMinimum(-1);
        pwm1Value->setMaximum(258);
        pwm1Value->setValue(25);
        pwm1Value->setSliderPosition(25);
        pwm1Value->setOrientation(Qt::Vertical);
        pwm1Value->setInvertedAppearance(false);
        pwm1Value->setInvertedControls(false);
        pwm1Value->setTickPosition(QSlider::NoTicks);

        verticalLayout_5->addWidget(pwm1Value);

        subPwm1 = new QPushButton(groupBox);
        subPwm1->setObjectName(QStringLiteral("subPwm1"));

        verticalLayout_5->addWidget(subPwm1);

        pwm1ValueLabel = new QLabel(groupBox);
        pwm1ValueLabel->setObjectName(QStringLiteral("pwm1ValueLabel"));
        pwm1ValueLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(pwm1ValueLabel);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(widget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        addPwm2 = new QPushButton(groupBox_2);
        addPwm2->setObjectName(QStringLiteral("addPwm2"));

        verticalLayout_4->addWidget(addPwm2);

        pwm2Value = new QSlider(groupBox_2);
        pwm2Value->setObjectName(QStringLiteral("pwm2Value"));
        pwm2Value->setMinimum(-1);
        pwm2Value->setMaximum(258);
        pwm2Value->setValue(25);
        pwm2Value->setSliderPosition(25);
        pwm2Value->setOrientation(Qt::Vertical);
        pwm2Value->setInvertedAppearance(false);
        pwm2Value->setInvertedControls(false);
        pwm2Value->setTickPosition(QSlider::NoTicks);

        verticalLayout_4->addWidget(pwm2Value);

        subPwm2 = new QPushButton(groupBox_2);
        subPwm2->setObjectName(QStringLiteral("subPwm2"));

        verticalLayout_4->addWidget(subPwm2);

        pwm2ValueLabel = new QLabel(groupBox_2);
        pwm2ValueLabel->setObjectName(QStringLiteral("pwm2ValueLabel"));
        pwm2ValueLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(pwm2ValueLabel);


        gridLayout_2->addWidget(groupBox_2, 0, 1, 1, 1);

        groupBox_3 = new QGroupBox(widget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        addPwm3 = new QPushButton(groupBox_3);
        addPwm3->setObjectName(QStringLiteral("addPwm3"));

        verticalLayout_3->addWidget(addPwm3);

        pwm3Value = new QSlider(groupBox_3);
        pwm3Value->setObjectName(QStringLiteral("pwm3Value"));
        pwm3Value->setMinimum(-1);
        pwm3Value->setMaximum(258);
        pwm3Value->setValue(25);
        pwm3Value->setSliderPosition(25);
        pwm3Value->setOrientation(Qt::Vertical);
        pwm3Value->setInvertedAppearance(false);
        pwm3Value->setInvertedControls(false);
        pwm3Value->setTickPosition(QSlider::NoTicks);

        verticalLayout_3->addWidget(pwm3Value);

        subPwm3 = new QPushButton(groupBox_3);
        subPwm3->setObjectName(QStringLiteral("subPwm3"));

        verticalLayout_3->addWidget(subPwm3);

        pwm3ValueLabel = new QLabel(groupBox_3);
        pwm3ValueLabel->setObjectName(QStringLiteral("pwm3ValueLabel"));
        pwm3ValueLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(pwm3ValueLabel);


        gridLayout_2->addWidget(groupBox_3, 0, 2, 1, 1);

        groupBox_4 = new QGroupBox(widget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setLayoutDirection(Qt::LeftToRight);
        groupBox_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        verticalLayout = new QVBoxLayout(groupBox_4);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        addPwm4 = new QPushButton(groupBox_4);
        addPwm4->setObjectName(QStringLiteral("addPwm4"));

        verticalLayout->addWidget(addPwm4);

        pwm4Value = new QSlider(groupBox_4);
        pwm4Value->setObjectName(QStringLiteral("pwm4Value"));
        pwm4Value->setMinimum(-1);
        pwm4Value->setMaximum(258);
        pwm4Value->setValue(25);
        pwm4Value->setSliderPosition(25);
        pwm4Value->setOrientation(Qt::Vertical);
        pwm4Value->setInvertedAppearance(false);
        pwm4Value->setInvertedControls(false);
        pwm4Value->setTickPosition(QSlider::NoTicks);

        verticalLayout->addWidget(pwm4Value);

        subPwm4 = new QPushButton(groupBox_4);
        subPwm4->setObjectName(QStringLiteral("subPwm4"));

        verticalLayout->addWidget(subPwm4);

        pwm4ValueLabel = new QLabel(groupBox_4);
        pwm4ValueLabel->setObjectName(QStringLiteral("pwm4ValueLabel"));
        pwm4ValueLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(pwm4ValueLabel);


        gridLayout_2->addWidget(groupBox_4, 0, 3, 1, 1);

        groupBox_4->raise();
        groupBox_2->raise();
        groupBox->raise();
        groupBox_3->raise();

        gridLayout->addWidget(widget, 0, 0, 1, 1);

        fixValues = new QPushButton(tab);
        fixValues->setObjectName(QStringLiteral("fixValues"));

        gridLayout->addWidget(fixValues, 1, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_4 = new QGridLayout(tab_2);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        groupBox_5 = new QGroupBox(tab_2);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        verticalLayout_6 = new QVBoxLayout(groupBox_5);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        sensorZ = new QLineEdit(groupBox_5);
        sensorZ->setObjectName(QStringLiteral("sensorZ"));

        verticalLayout_6->addWidget(sensorZ);

        sensorY = new QLineEdit(groupBox_5);
        sensorY->setObjectName(QStringLiteral("sensorY"));

        verticalLayout_6->addWidget(sensorY);

        sensorX = new QLineEdit(groupBox_5);
        sensorX->setObjectName(QStringLiteral("sensorX"));

        verticalLayout_6->addWidget(sensorX);


        gridLayout_4->addWidget(groupBox_5, 0, 0, 1, 1);

        widget_2 = new QWidget(tab_2);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        data2Send = new QLineEdit(widget_2);
        data2Send->setObjectName(QStringLiteral("data2Send"));

        horizontalLayout->addWidget(data2Send);

        sendData = new QPushButton(widget_2);
        sendData->setObjectName(QStringLiteral("sendData"));

        horizontalLayout->addWidget(sendData);


        gridLayout_4->addWidget(widget_2, 1, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        verticalLayout_2->addWidget(tabWidget);


        retranslateUi(Commands);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Commands);
    } // setupUi

    void retranslateUi(QDialog *Commands)
    {
        Commands->setWindowTitle(QApplication::translate("Commands", "Dialog", 0));
        groupBox->setTitle(QApplication::translate("Commands", "PWM 1", 0));
        addPwm1->setText(QApplication::translate("Commands", "+", 0));
        subPwm1->setText(QApplication::translate("Commands", "-", 0));
        pwm1ValueLabel->setText(QApplication::translate("Commands", "0", 0));
        groupBox_2->setTitle(QApplication::translate("Commands", "PWM 2", 0));
        addPwm2->setText(QApplication::translate("Commands", "+", 0));
        subPwm2->setText(QApplication::translate("Commands", "-", 0));
        pwm2ValueLabel->setText(QApplication::translate("Commands", "0", 0));
        groupBox_3->setTitle(QApplication::translate("Commands", "PWM 3", 0));
        addPwm3->setText(QApplication::translate("Commands", "+", 0));
        subPwm3->setText(QApplication::translate("Commands", "-", 0));
        pwm3ValueLabel->setText(QApplication::translate("Commands", "0", 0));
        groupBox_4->setTitle(QApplication::translate("Commands", "PWM 4", 0));
        addPwm4->setText(QApplication::translate("Commands", "+", 0));
        subPwm4->setText(QApplication::translate("Commands", "-", 0));
        pwm4ValueLabel->setText(QApplication::translate("Commands", "0", 0));
        fixValues->setText(QApplication::translate("Commands", "Fixar", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Commands", "Tab 1", 0));
        groupBox_5->setTitle(QApplication::translate("Commands", "Data", 0));
        sendData->setText(QApplication::translate("Commands", "send", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Commands", "Tab 2", 0));
    } // retranslateUi

};

namespace Ui {
    class Commands: public Ui_Commands {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMANDS_H
