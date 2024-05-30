/********************************************************************************
** Form generated from reading UI file 'dki.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DKI_H
#define UI_DKI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dki
{
public:
    QLabel *backgroumd;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *linenameuser;
    QLineEdit *linename;
    QLineEdit *linepass;
    QPushButton *buttonDki;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *linesdt;
    QLineEdit *linebienso;
    QComboBox *comboBoxLoaiXe;
    QLabel *label_7;
    QLineEdit *linestk;

    void setupUi(QDialog *Dki)
    {
        if (Dki->objectName().isEmpty())
            Dki->setObjectName("Dki");
        Dki->resize(1271, 706);
        backgroumd = new QLabel(Dki);
        backgroumd->setObjectName("backgroumd");
        backgroumd->setGeometry(QRect(-30, -30, 1281, 721));
        backgroumd->setPixmap(QPixmap(QString::fromUtf8("C:/Users/linh/Downloads/vietnam-map-png_68985.png")));
        backgroumd->setScaledContents(true);
        label = new QLabel(Dki);
        label->setObjectName("label");
        label->setGeometry(QRect(310, 40, 161, 61));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        label_2 = new QLabel(Dki);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(310, 110, 181, 61));
        label_2->setFont(font);
        label_3 = new QLabel(Dki);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(310, 180, 131, 61));
        label_3->setFont(font);
        linenameuser = new QLineEdit(Dki);
        linenameuser->setObjectName("linenameuser");
        linenameuser->setGeometry(QRect(510, 55, 331, 41));
        linenameuser->setFont(font);
        linenameuser->setStyleSheet(QString::fromUtf8("border: 2px solid black"));
        linename = new QLineEdit(Dki);
        linename->setObjectName("linename");
        linename->setGeometry(QRect(510, 125, 331, 41));
        linename->setFont(font);
        linename->setStyleSheet(QString::fromUtf8("border: 2px solid black"));
        linepass = new QLineEdit(Dki);
        linepass->setObjectName("linepass");
        linepass->setGeometry(QRect(510, 195, 331, 41));
        linepass->setFont(font);
        linepass->setStyleSheet(QString::fromUtf8("border: 2px solid black"));
        buttonDki = new QPushButton(Dki);
        buttonDki->setObjectName("buttonDki");
        buttonDki->setGeometry(QRect(580, 540, 141, 61));
        buttonDki->setFont(font);
        buttonDki->setStyleSheet(QString::fromUtf8("border: 1px solid black"));
        label_4 = new QLabel(Dki);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(310, 320, 131, 61));
        label_4->setFont(font);
        label_5 = new QLabel(Dki);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(310, 250, 161, 61));
        label_5->setFont(font);
        label_6 = new QLabel(Dki);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(310, 390, 131, 61));
        label_6->setFont(font);
        linesdt = new QLineEdit(Dki);
        linesdt->setObjectName("linesdt");
        linesdt->setGeometry(QRect(510, 265, 331, 41));
        linesdt->setFont(font);
        linesdt->setStyleSheet(QString::fromUtf8("border: 2px solid black"));
        linebienso = new QLineEdit(Dki);
        linebienso->setObjectName("linebienso");
        linebienso->setGeometry(QRect(510, 405, 331, 41));
        linebienso->setFont(font);
        linebienso->setStyleSheet(QString::fromUtf8("border: 2px solid black"));
        comboBoxLoaiXe = new QComboBox(Dki);
        comboBoxLoaiXe->setObjectName("comboBoxLoaiXe");
        comboBoxLoaiXe->setGeometry(QRect(510, 335, 331, 41));
        comboBoxLoaiXe->setFont(font);
        comboBoxLoaiXe->setStyleSheet(QString::fromUtf8("border: 2px solid black"));
        label_7 = new QLabel(Dki);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(310, 470, 141, 51));
        label_7->setFont(font);
        linestk = new QLineEdit(Dki);
        linestk->setObjectName("linestk");
        linestk->setGeometry(QRect(510, 480, 331, 41));
        linestk->setFont(font);
        linestk->setStyleSheet(QString::fromUtf8("border: 2px solid black"));

        retranslateUi(Dki);

        QMetaObject::connectSlotsByName(Dki);
    } // setupUi

    void retranslateUi(QDialog *Dki)
    {
        Dki->setWindowTitle(QCoreApplication::translate("Dki", "Dialog", nullptr));
        backgroumd->setText(QString());
        label->setText(QCoreApplication::translate("Dki", "T\303\252n t\303\240i kho\341\272\243n", nullptr));
        label_2->setText(QCoreApplication::translate("Dki", "T\303\252n \304\221\304\203ng nh\341\272\255p", nullptr));
        label_3->setText(QCoreApplication::translate("Dki", "M\341\272\255t kh\341\272\251u", nullptr));
        buttonDki->setText(QCoreApplication::translate("Dki", "\304\220\304\203ng k\303\275", nullptr));
        label_4->setText(QCoreApplication::translate("Dki", "Lo\341\272\241i xe", nullptr));
        label_5->setText(QCoreApplication::translate("Dki", "S\341\273\221 \304\221i\341\273\207n tho\341\272\241i", nullptr));
        label_6->setText(QCoreApplication::translate("Dki", "Bi\341\273\203n s\341\273\221", nullptr));
        label_7->setText(QCoreApplication::translate("Dki", "S\341\273\221 t\303\240i kho\341\272\243n", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dki: public Ui_Dki {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DKI_H
