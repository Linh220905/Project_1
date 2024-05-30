/********************************************************************************
** Form generated from reading UI file 'phanhoi.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHANHOI_H
#define UI_PHANHOI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Phanhoi
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEditTieude;
    QLabel *label_3;
    QPushButton *buttonGui;
    QTextEdit *textEdit;

    void setupUi(QDialog *Phanhoi)
    {
        if (Phanhoi->objectName().isEmpty())
            Phanhoi->setObjectName("Phanhoi");
        Phanhoi->resize(917, 597);
        label = new QLabel(Phanhoi);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 160, 121, 61));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        label_2 = new QLabel(Phanhoi);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 100, 121, 61));
        label_2->setFont(font);
        lineEditTieude = new QLineEdit(Phanhoi);
        lineEditTieude->setObjectName("lineEditTieude");
        lineEditTieude->setGeometry(QRect(200, 100, 651, 61));
        lineEditTieude->setFont(font);
        lineEditTieude->setStyleSheet(QString::fromUtf8("border: 2px solid black"));
        label_3 = new QLabel(Phanhoi);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(270, 0, 491, 71));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        label_3->setFont(font1);
        buttonGui = new QPushButton(Phanhoi);
        buttonGui->setObjectName("buttonGui");
        buttonGui->setGeometry(QRect(410, 490, 151, 61));
        buttonGui->setFont(font);
        buttonGui->setStyleSheet(QString::fromUtf8("border: 2px solid black"));
        textEdit = new QTextEdit(Phanhoi);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(200, 190, 651, 271));
        QFont font2;
        font2.setPointSize(16);
        textEdit->setFont(font2);
        textEdit->setStyleSheet(QString::fromUtf8("border: 2px solid black"));

        retranslateUi(Phanhoi);

        QMetaObject::connectSlotsByName(Phanhoi);
    } // setupUi

    void retranslateUi(QDialog *Phanhoi)
    {
        Phanhoi->setWindowTitle(QCoreApplication::translate("Phanhoi", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Phanhoi", "N\341\273\231i dung", nullptr));
        label_2->setText(QCoreApplication::translate("Phanhoi", "Ti\303\252u \304\221\341\273\201", nullptr));
        label_3->setText(QCoreApplication::translate("Phanhoi", "H\303\243y g\341\273\255i \303\275 ki\341\272\277n c\341\273\247a b\341\272\241n t\341\272\241i \304\221\303\242y", nullptr));
        buttonGui->setText(QCoreApplication::translate("Phanhoi", "G\341\273\255i", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Phanhoi: public Ui_Phanhoi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHANHOI_H
