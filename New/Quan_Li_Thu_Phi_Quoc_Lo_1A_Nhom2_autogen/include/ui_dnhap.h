/********************************************************************************
** Form generated from reading UI file 'dnhap.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DNHAP_H
#define UI_DNHAP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dnhap
{
public:
    QLabel *backgroumd;
    QLineEdit *linename;
    QLineEdit *linepass;
    QLabel *label;
    QLabel *label_2;
    QPushButton *buttonDnhap;

    void setupUi(QDialog *Dnhap)
    {
        if (Dnhap->objectName().isEmpty())
            Dnhap->setObjectName("Dnhap");
        Dnhap->resize(1262, 713);
        backgroumd = new QLabel(Dnhap);
        backgroumd->setObjectName("backgroumd");
        backgroumd->setGeometry(QRect(-10, 0, 1262, 713));
        backgroumd->setPixmap(QPixmap(QString::fromUtf8("C:/Users/linh/Pictures/Screenshots/Screenshot 2024-05-15 123135.png")));
        backgroumd->setScaledContents(true);
        linename = new QLineEdit(Dnhap);
        linename->setObjectName("linename");
        linename->setGeometry(QRect(520, 270, 321, 41));
        QFont font;
        font.setPointSize(15);
        linename->setFont(font);
        linename->setStyleSheet(QString::fromUtf8("border: 2px solid black"));
        linepass = new QLineEdit(Dnhap);
        linepass->setObjectName("linepass");
        linepass->setGeometry(QRect(520, 340, 321, 41));
        linepass->setFont(font);
        linepass->setStyleSheet(QString::fromUtf8("border: 2px solid black"));
        label = new QLabel(Dnhap);
        label->setObjectName("label");
        label->setGeometry(QRect(330, 260, 181, 51));
        label->setFont(font);
        label_2 = new QLabel(Dnhap);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(330, 330, 151, 41));
        label_2->setFont(font);
        buttonDnhap = new QPushButton(Dnhap);
        buttonDnhap->setObjectName("buttonDnhap");
        buttonDnhap->setGeometry(QRect(540, 410, 161, 61));
        buttonDnhap->setFont(font);
        buttonDnhap->setStyleSheet(QString::fromUtf8("border: 2px solid black"));

        retranslateUi(Dnhap);

        QMetaObject::connectSlotsByName(Dnhap);
    } // setupUi

    void retranslateUi(QDialog *Dnhap)
    {
        Dnhap->setWindowTitle(QCoreApplication::translate("Dnhap", "Dialog", nullptr));
        backgroumd->setText(QString());
        label->setText(QCoreApplication::translate("Dnhap", "T\303\252n \304\221\304\203ng nh\341\272\255p", nullptr));
        label_2->setText(QCoreApplication::translate("Dnhap", "M\341\272\255t kh\341\272\251u", nullptr));
        buttonDnhap->setText(QCoreApplication::translate("Dnhap", "\304\220\304\203ng nh\341\272\255p", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dnhap: public Ui_Dnhap {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DNHAP_H
