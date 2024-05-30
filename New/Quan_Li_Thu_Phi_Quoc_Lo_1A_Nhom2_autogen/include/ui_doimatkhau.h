/********************************************************************************
** Form generated from reading UI file 'doimatkhau.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOIMATKHAU_H
#define UI_DOIMATKHAU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Doimatkhau
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineMkcu;
    QLineEdit *linemkMoi;
    QLineEdit *lineMkmoix2;
    QPushButton *pushButton;

    void setupUi(QDialog *Doimatkhau)
    {
        if (Doimatkhau->objectName().isEmpty())
            Doimatkhau->setObjectName("Doimatkhau");
        Doimatkhau->resize(839, 494);
        QFont font;
        font.setPointSize(15);
        Doimatkhau->setFont(font);
        label = new QLabel(Doimatkhau);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 70, 191, 61));
        label->setFont(font);
        label_2 = new QLabel(Doimatkhau);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 140, 171, 61));
        label_3 = new QLabel(Doimatkhau);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(90, 220, 231, 61));
        lineMkcu = new QLineEdit(Doimatkhau);
        lineMkcu->setObjectName("lineMkcu");
        lineMkcu->setGeometry(QRect(320, 80, 391, 51));
        lineMkcu->setStyleSheet(QString::fromUtf8("border: 2px solid black"));
        linemkMoi = new QLineEdit(Doimatkhau);
        linemkMoi->setObjectName("linemkMoi");
        linemkMoi->setGeometry(QRect(320, 155, 391, 51));
        linemkMoi->setStyleSheet(QString::fromUtf8("border: 2px solid black"));
        lineMkmoix2 = new QLineEdit(Doimatkhau);
        lineMkmoix2->setObjectName("lineMkmoix2");
        lineMkmoix2->setGeometry(QRect(320, 230, 391, 51));
        lineMkmoix2->setStyleSheet(QString::fromUtf8("border: 2px solid black"));
        pushButton = new QPushButton(Doimatkhau);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(430, 320, 131, 61));
        pushButton->setStyleSheet(QString::fromUtf8("border: 2px solid black"));

        retranslateUi(Doimatkhau);

        QMetaObject::connectSlotsByName(Doimatkhau);
    } // setupUi

    void retranslateUi(QDialog *Doimatkhau)
    {
        Doimatkhau->setWindowTitle(QCoreApplication::translate("Doimatkhau", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Doimatkhau", "M\341\272\255t kh\341\272\251u c\305\251", nullptr));
        label_2->setText(QCoreApplication::translate("Doimatkhau", "M\341\272\255t kh\341\272\251u m\341\273\233i", nullptr));
        label_3->setText(QCoreApplication::translate("Doimatkhau", "Nh\341\272\255p l\341\272\241i m\341\272\255t kh\341\272\251u", nullptr));
        pushButton->setText(QCoreApplication::translate("Doimatkhau", "X\303\241c nh\341\272\255n", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Doimatkhau: public Ui_Doimatkhau {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOIMATKHAU_H
