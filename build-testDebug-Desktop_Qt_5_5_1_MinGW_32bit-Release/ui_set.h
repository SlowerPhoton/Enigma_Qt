/********************************************************************************
** Form generated from reading UI file 'set.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SET_H
#define UI_SET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QKeySequenceEdit>
#include <QtWidgets/QProgressBar>

QT_BEGIN_NAMESPACE

class Ui_Set
{
public:
    QDialogButtonBox *buttonBox;
    QKeySequenceEdit *keySequenceEdit;
    QComboBox *comboBox;
    QFontComboBox *fontComboBox;
    QComboBox *comboBox_2;
    QProgressBar *progressBar;

    void setupUi(QDialog *Set)
    {
        if (Set->objectName().isEmpty())
            Set->setObjectName(QStringLiteral("Set"));
        Set->resize(400, 300);
        buttonBox = new QDialogButtonBox(Set);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        keySequenceEdit = new QKeySequenceEdit(Set);
        keySequenceEdit->setObjectName(QStringLiteral("keySequenceEdit"));
        keySequenceEdit->setGeometry(QRect(50, 40, 113, 20));
        comboBox = new QComboBox(Set);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(50, 120, 69, 22));
        fontComboBox = new QFontComboBox(Set);
        fontComboBox->setObjectName(QStringLiteral("fontComboBox"));
        fontComboBox->setGeometry(QRect(30, 170, 157, 22));
        comboBox_2 = new QComboBox(Set);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(170, 120, 69, 22));
        progressBar = new QProgressBar(Set);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(230, 50, 118, 23));
        progressBar->setValue(24);

        retranslateUi(Set);
        QObject::connect(buttonBox, SIGNAL(accepted()), Set, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Set, SLOT(reject()));

        QMetaObject::connectSlotsByName(Set);
    } // setupUi

    void retranslateUi(QDialog *Set)
    {
        Set->setWindowTitle(QApplication::translate("Set", "Dialog", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Set", "A", 0)
         << QApplication::translate("Set", "B", 0)
         << QApplication::translate("Set", "C", 0)
         << QApplication::translate("Set", "D", 0)
        );
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("Set", "A", 0)
         << QApplication::translate("Set", "B", 0)
         << QApplication::translate("Set", "C", 0)
         << QApplication::translate("Set", "D", 0)
        );
#ifndef QT_NO_WHATSTHIS
        progressBar->setWhatsThis(QApplication::translate("Set", "<html><head/><body><p>fg dsf dsf</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
    } // retranslateUi

};

namespace Ui {
    class Set: public Ui_Set {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SET_H
