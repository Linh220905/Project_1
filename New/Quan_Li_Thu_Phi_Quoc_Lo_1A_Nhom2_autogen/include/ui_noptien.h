/********************************************************************************
** Form generated from reading UI file 'noptien.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOPTIEN_H
#define UI_NOPTIEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Noptien
{
public:
    QPushButton *buttonxacnhan;
    QLabel *label;
    QLineEdit *linestk;
    QLabel *label_2;
    QLineEdit *linetien;

    void setupUi(QDialog *Noptien)
    {
        if (Noptien->objectName().isEmpty())
            Noptien->setObjectName("Noptien");
        Noptien->resize(443, 233);
        buttonxacnhan = new QPushButton(Noptien);
        buttonxacnhan->setObjectName("buttonxacnhan");
        buttonxacnhan->setGeometry(QRect(320, 170, 111, 51));
        QFont font;
        font.setPointSize(11);
        buttonxacnhan->setFont(font);
        buttonxacnhan->setStyleSheet(QString::fromUtf8("border: 1px solid black"));
        label = new QLabel(Noptien);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 40, 111, 51));
        QFont font1;
        font1.setPointSize(12);
        label->setFont(font1);
        linestk = new QLineEdit(Noptien);
        linestk->setObjectName("linestk");
        linestk->setGeometry(QRect(150, 50, 281, 31));
        linestk->setFont(font1);
        linestk->setStyleSheet(QString::fromUtf8("border: 2px solid black"));
        label_2 = new QLabel(Noptien);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 90, 81, 41));
        label_2->setFont(font1);
        linetien = new QLineEdit(Noptien);
        linetien->setObjectName("linetien");
        linetien->setGeometry(QRect(150, 100, 281, 31));
        linetien->setFont(font1);
        linetien->setStyleSheet(QString::fromUtf8("border: 2px solid black"));

        retranslateUi(Noptien);

        QMetaObject::connectSlotsByName(Noptien);
    } // setupUi

    void retranslateUi(QDialog *Noptien)
    {
        Noptien->setWindowTitle(QCoreApplication::translate("Noptien", "Dialog", nullptr));
        buttonxacnhan->setText(QCoreApplication::translate("Noptien", " X\303\241c nh\341\272\255n", nullptr));
        label->setText(QCoreApplication::translate("Noptien", "S\341\273\221 t\303\240i kho\341\272\243n", nullptr));
        label_2->setText(QCoreApplication::translate("Noptien", "S\341\273\221 ti\341\273\201n", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Noptien: public Ui_Noptien {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOPTIEN_H
