/********************************************************************************
** Form generated from reading UI file 'giaodienchinh.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GIAODIENCHINH_H
#define UI_GIAODIENCHINH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Giaodienchinh
{
public:
    QPushButton *buttonDnhap;
    QLabel *lblbackground;
    QPushButton *buttonDki;
    QLabel *label_2;

    void setupUi(QDialog *Giaodienchinh)
    {
        if (Giaodienchinh->objectName().isEmpty())
            Giaodienchinh->setObjectName("Giaodienchinh");
        Giaodienchinh->resize(1248, 720);
        buttonDnhap = new QPushButton(Giaodienchinh);
        buttonDnhap->setObjectName("buttonDnhap");
        buttonDnhap->setGeometry(QRect(470, 270, 241, 81));
        QFont font;
        font.setPointSize(15);
        buttonDnhap->setFont(font);
        buttonDnhap->setStyleSheet(QString::fromUtf8("border: 2px solid black"));
        lblbackground = new QLabel(Giaodienchinh);
        lblbackground->setObjectName("lblbackground");
        lblbackground->setGeometry(QRect(-8, -1, 1251, 720));
        lblbackground->setPixmap(QPixmap(QString::fromUtf8("C:/Users/linh/Pictures/Screenshots/Screenshot 2024-05-15 123209.png")));
        lblbackground->setScaledContents(true);
        buttonDki = new QPushButton(Giaodienchinh);
        buttonDki->setObjectName("buttonDki");
        buttonDki->setGeometry(QRect(470, 390, 241, 81));
        buttonDki->setFont(font);
        buttonDki->setStyleSheet(QString::fromUtf8("border: 2px solid black"));
        label_2 = new QLabel(Giaodienchinh);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(360, 100, 581, 101));
        QFont font1;
        font1.setPointSize(30);
        font1.setBold(true);
        label_2->setFont(font1);
        lblbackground->raise();
        buttonDnhap->raise();
        buttonDki->raise();
        label_2->raise();

        retranslateUi(Giaodienchinh);

        QMetaObject::connectSlotsByName(Giaodienchinh);
    } // setupUi

    void retranslateUi(QDialog *Giaodienchinh)
    {
        Giaodienchinh->setWindowTitle(QCoreApplication::translate("Giaodienchinh", "Dialog", nullptr));
        buttonDnhap->setText(QCoreApplication::translate("Giaodienchinh", "\304\220\304\203ng nh\341\272\255p", nullptr));
        lblbackground->setText(QString());
        buttonDki->setText(QCoreApplication::translate("Giaodienchinh", "\304\220\304\203ng k\303\255", nullptr));
        label_2->setText(QCoreApplication::translate("Giaodienchinh", "Tr\341\272\241m thu ph\303\255 qu\341\273\221c l\341\273\231 1A", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Giaodienchinh: public Ui_Giaodienchinh {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GIAODIENCHINH_H
