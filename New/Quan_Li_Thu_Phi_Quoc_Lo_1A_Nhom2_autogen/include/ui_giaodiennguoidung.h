/********************************************************************************
** Form generated from reading UI file 'giaodiennguoidung.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GIAODIENNGUOIDUNG_H
#define UI_GIAODIENNGUOIDUNG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Giaodiennguoidung
{
public:
    QFrame *frame;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *buttonluu;
    QLineEdit *linesdt;
    QLineEdit *lineloaixe;
    QLineEdit *linebienso;
    QLabel *label_2;
    QLineEdit *linestk;
    QLabel *lblTentk;
    QLabel *label;
    QLabel *llbtien;
    QPushButton *buttonNtien;
    QPushButton *buttonTtoan;
    QPushButton *ButtonLsu;
    QPushButton *pushButton;
    QPushButton *buttonPhanHoi;

    void setupUi(QDialog *Giaodiennguoidung)
    {
        if (Giaodiennguoidung->objectName().isEmpty())
            Giaodiennguoidung->setObjectName("Giaodiennguoidung");
        Giaodiennguoidung->resize(1266, 705);
        frame = new QFrame(Giaodiennguoidung);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(780, 170, 481, 531));
        frame->setStyleSheet(QString::fromUtf8("border: 1px solid black"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(0, 0, 181, 61));
        QFont font;
        font.setPointSize(15);
        label_4->setFont(font);
        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(0, 90, 181, 61));
        label_5->setFont(font);
        label_6 = new QLabel(frame);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(0, 180, 181, 61));
        label_6->setFont(font);
        buttonluu = new QPushButton(frame);
        buttonluu->setObjectName("buttonluu");
        buttonluu->setGeometry(QRect(340, 450, 121, 61));
        buttonluu->setFont(font);
        linesdt = new QLineEdit(frame);
        linesdt->setObjectName("linesdt");
        linesdt->setGeometry(QRect(200, 0, 281, 61));
        linesdt->setFont(font);
        lineloaixe = new QLineEdit(frame);
        lineloaixe->setObjectName("lineloaixe");
        lineloaixe->setGeometry(QRect(200, 90, 281, 61));
        lineloaixe->setFont(font);
        linebienso = new QLineEdit(frame);
        linebienso->setObjectName("linebienso");
        linebienso->setGeometry(QRect(200, 180, 281, 61));
        linebienso->setFont(font);
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 270, 181, 61));
        label_2->setFont(font);
        linestk = new QLineEdit(frame);
        linestk->setObjectName("linestk");
        linestk->setGeometry(QRect(200, 270, 281, 61));
        linestk->setFont(font);
        lblTentk = new QLabel(Giaodiennguoidung);
        lblTentk->setObjectName("lblTentk");
        lblTentk->setGeometry(QRect(909, 0, 350, 41));
        lblTentk->setFont(font);
        label = new QLabel(Giaodiennguoidung);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 170, 771, 531));
        label->setPixmap(QPixmap(QString::fromUtf8("C:/Users/linh/Downloads/_8e5fb45b-1dc8-4d97-80b5-b82f1c30e904.png")));
        label->setScaledContents(true);
        llbtien = new QLabel(Giaodiennguoidung);
        llbtien->setObjectName("llbtien");
        llbtien->setGeometry(QRect(909, 40, 350, 41));
        llbtien->setFont(font);
        buttonNtien = new QPushButton(Giaodiennguoidung);
        buttonNtien->setObjectName("buttonNtien");
        buttonNtien->setGeometry(QRect(0, 80, 151, 71));
        buttonNtien->setFont(font);
        buttonNtien->setStyleSheet(QString::fromUtf8("border: 2px solid black"));
        buttonTtoan = new QPushButton(Giaodiennguoidung);
        buttonTtoan->setObjectName("buttonTtoan");
        buttonTtoan->setGeometry(QRect(170, 80, 151, 71));
        buttonTtoan->setFont(font);
        buttonTtoan->setStyleSheet(QString::fromUtf8("border: 2px solid black"));
        ButtonLsu = new QPushButton(Giaodiennguoidung);
        ButtonLsu->setObjectName("ButtonLsu");
        ButtonLsu->setGeometry(QRect(350, 80, 161, 71));
        ButtonLsu->setFont(font);
        ButtonLsu->setStyleSheet(QString::fromUtf8("border: 2px solid black"));
        pushButton = new QPushButton(Giaodiennguoidung);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(540, 80, 171, 71));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("border: 2px solid black"));
        buttonPhanHoi = new QPushButton(Giaodiennguoidung);
        buttonPhanHoi->setObjectName("buttonPhanHoi");
        buttonPhanHoi->setGeometry(QRect(740, 80, 161, 71));
        buttonPhanHoi->setFont(font);
        buttonPhanHoi->setStyleSheet(QString::fromUtf8("border: 2px solid black"));

        retranslateUi(Giaodiennguoidung);

        QMetaObject::connectSlotsByName(Giaodiennguoidung);
    } // setupUi

    void retranslateUi(QDialog *Giaodiennguoidung)
    {
        Giaodiennguoidung->setWindowTitle(QCoreApplication::translate("Giaodiennguoidung", "Dialog", nullptr));
        label_4->setText(QCoreApplication::translate("Giaodiennguoidung", "S\341\273\221 \304\221i\341\273\207n tho\341\272\241i", nullptr));
        label_5->setText(QCoreApplication::translate("Giaodiennguoidung", "Lo\341\272\241i xe", nullptr));
        label_6->setText(QCoreApplication::translate("Giaodiennguoidung", "Bi\341\273\203n s\341\273\221", nullptr));
        buttonluu->setText(QCoreApplication::translate("Giaodiennguoidung", "L\306\260u", nullptr));
        label_2->setText(QCoreApplication::translate("Giaodiennguoidung", "S\341\273\221 t\303\240i kho\341\272\243n", nullptr));
        lblTentk->setText(QString());
        label->setText(QString());
        llbtien->setText(QString());
        buttonNtien->setText(QCoreApplication::translate("Giaodiennguoidung", "N\341\273\231p ti\341\273\201n", nullptr));
        buttonTtoan->setText(QCoreApplication::translate("Giaodiennguoidung", "Thanh to\303\241n", nullptr));
        ButtonLsu->setText(QCoreApplication::translate("Giaodiennguoidung", "L\341\273\213ch s\341\273\255 ", nullptr));
        pushButton->setText(QCoreApplication::translate("Giaodiennguoidung", "\304\220\341\273\225i m\341\272\255t kh\341\272\251u", nullptr));
        buttonPhanHoi->setText(QCoreApplication::translate("Giaodiennguoidung", "Ph\341\272\243n h\341\273\223i", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Giaodiennguoidung: public Ui_Giaodiennguoidung {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GIAODIENNGUOIDUNG_H
