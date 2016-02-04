/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QSpinBox *shift1;
    QSpinBox *shift2;
    QSpinBox *shift3;
    QPushButton *pushButton;
    QSpinBox *rotor1;
    QSpinBox *rotor2;
    QSpinBox *rotor3;
    QPlainTextEdit *openText;
    QPlainTextEdit *encrypted;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton_2;
    QPushButton *generate;
    QPushButton *set;
    QSpinBox *randSeed;
    QPushButton *pushButton_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(500, 325);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        shift1 = new QSpinBox(centralWidget);
        shift1->setObjectName(QStringLiteral("shift1"));
        shift1->setGeometry(QRect(230, 10, 42, 22));
        shift1->setMaximum(25);
        shift2 = new QSpinBox(centralWidget);
        shift2->setObjectName(QStringLiteral("shift2"));
        shift2->setGeometry(QRect(230, 40, 42, 22));
        shift2->setMaximum(25);
        shift3 = new QSpinBox(centralWidget);
        shift3->setObjectName(QStringLiteral("shift3"));
        shift3->setGeometry(QRect(230, 70, 42, 22));
        shift3->setMaximum(25);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(200, 100, 75, 23));
        rotor1 = new QSpinBox(centralWidget);
        rotor1->setObjectName(QStringLiteral("rotor1"));
        rotor1->setGeometry(QRect(90, 10, 42, 22));
        rotor1->setMaximum(25);
        rotor2 = new QSpinBox(centralWidget);
        rotor2->setObjectName(QStringLiteral("rotor2"));
        rotor2->setGeometry(QRect(90, 40, 42, 22));
        rotor2->setMaximum(25);
        rotor3 = new QSpinBox(centralWidget);
        rotor3->setObjectName(QStringLiteral("rotor3"));
        rotor3->setGeometry(QRect(90, 70, 42, 22));
        rotor3->setMaximum(25);
        openText = new QPlainTextEdit(centralWidget);
        openText->setObjectName(QStringLiteral("openText"));
        openText->setGeometry(QRect(40, 130, 271, 81));
        encrypted = new QPlainTextEdit(centralWidget);
        encrypted->setObjectName(QStringLiteral("encrypted"));
        encrypted->setGeometry(QRect(40, 230, 271, 81));
        encrypted->setReadOnly(true);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 20, 47, 13));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(170, 50, 47, 13));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(170, 80, 47, 13));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 20, 47, 13));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 50, 47, 13));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 80, 47, 13));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(320, 130, 75, 81));
        generate = new QPushButton(centralWidget);
        generate->setObjectName(QStringLiteral("generate"));
        generate->setGeometry(QRect(310, 10, 75, 41));
        set = new QPushButton(centralWidget);
        set->setObjectName(QStringLiteral("set"));
        set->setGeometry(QRect(310, 70, 75, 41));
        randSeed = new QSpinBox(centralWidget);
        randSeed->setObjectName(QStringLiteral("randSeed"));
        randSeed->setGeometry(QRect(400, 20, 71, 22));
        randSeed->setMaximum(9999);
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(320, 230, 75, 81));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        pushButton->setText(QApplication::translate("MainWindow", "reset shift", 0));
        label->setText(QApplication::translate("MainWindow", "shift 1", 0));
        label_2->setText(QApplication::translate("MainWindow", "shift 2", 0));
        label_3->setText(QApplication::translate("MainWindow", "shift 3", 0));
        label_4->setText(QApplication::translate("MainWindow", "rotor 1", 0));
        label_5->setText(QApplication::translate("MainWindow", "rotor 2", 0));
        label_6->setText(QApplication::translate("MainWindow", "rotor 3", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Encrypt", 0));
        generate->setText(QApplication::translate("MainWindow", "Generate key", 0));
        set->setText(QApplication::translate("MainWindow", "Set key", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
