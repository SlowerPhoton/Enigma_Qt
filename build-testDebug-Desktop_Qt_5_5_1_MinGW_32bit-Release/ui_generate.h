/********************************************************************************
** Form generated from reading UI file 'generate.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERATE_H
#define UI_GENERATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_Generate
{
public:
    QDialogButtonBox *buttonBox;
    QSpinBox *spinBox;
    QLabel *label;

    void setupUi(QDialog *Generate)
    {
        if (Generate->objectName().isEmpty())
            Generate->setObjectName(QStringLiteral("Generate"));
        Generate->resize(181, 144);
        buttonBox = new QDialogButtonBox(Generate);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(10, 100, 151, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        spinBox = new QSpinBox(Generate);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(10, 60, 151, 22));
        spinBox->setMaximum(999999);
        label = new QLabel(Generate);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 151, 41));
        QFont font;
        font.setPointSize(11);
        label->setFont(font);
        label->setTextFormat(Qt::AutoText);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label->setWordWrap(true);

        retranslateUi(Generate);
        QObject::connect(buttonBox, SIGNAL(accepted()), Generate, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Generate, SLOT(reject()));

        QMetaObject::connectSlotsByName(Generate);
    } // setupUi

    void retranslateUi(QDialog *Generate)
    {
        Generate->setWindowTitle(QApplication::translate("Generate", "Dialog", 0));
#ifndef QT_NO_WHATSTHIS
        Generate->setWhatsThis(QApplication::translate("Generate", "<html><head/><body><p>The generate function will use your input as the seed for the qrand() function.</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        label->setText(QApplication::translate("Generate", "Enter the seed to generate the key from", 0));
    } // retranslateUi

};

namespace Ui {
    class Generate: public Ui_Generate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERATE_H
