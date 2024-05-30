/********************************************************************************
** Form generated from reading UI file 'lichsunguoidung.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LICHSUNGUOIDUNG_H
#define UI_LICHSUNGUOIDUNG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Lichsunguoidung
{
public:
    QTableWidget *tableWidget;
    QPushButton *buttontimkiem;
    QLineEdit *lineTkiem;
    QLabel *lblsoluong;

    void setupUi(QDialog *Lichsunguoidung)
    {
        if (Lichsunguoidung->objectName().isEmpty())
            Lichsunguoidung->setObjectName("Lichsunguoidung");
        Lichsunguoidung->resize(1279, 715);
        tableWidget = new QTableWidget(Lichsunguoidung);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(0, 70, 1271, 641));
        QFont font;
        font.setPointSize(13);
        tableWidget->setFont(font);
        buttontimkiem = new QPushButton(Lichsunguoidung);
        buttontimkiem->setObjectName("buttontimkiem");
        buttontimkiem->setGeometry(QRect(10, 0, 121, 51));
        QFont font1;
        font1.setPointSize(15);
        buttontimkiem->setFont(font1);
        buttontimkiem->setStyleSheet(QString::fromUtf8("border: 2px solid black"));
        lineTkiem = new QLineEdit(Lichsunguoidung);
        lineTkiem->setObjectName("lineTkiem");
        lineTkiem->setGeometry(QRect(140, 0, 381, 51));
        lineTkiem->setFont(font1);
        lineTkiem->setStyleSheet(QString::fromUtf8("border: 2px solid black"));
        lblsoluong = new QLabel(Lichsunguoidung);
        lblsoluong->setObjectName("lblsoluong");
        lblsoluong->setGeometry(QRect(1080, 10, 161, 41));
        lblsoluong->setFont(font1);

        retranslateUi(Lichsunguoidung);

        QMetaObject::connectSlotsByName(Lichsunguoidung);
    } // setupUi

    void retranslateUi(QDialog *Lichsunguoidung)
    {
        Lichsunguoidung->setWindowTitle(QCoreApplication::translate("Lichsunguoidung", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Lichsunguoidung", "T\303\252n t\303\240i kho\341\272\243n", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Lichsunguoidung", "S\341\273\221 \304\221i\341\273\207n tho\341\272\241i", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Lichsunguoidung", "Lo\341\272\241i xe", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Lichsunguoidung", "Bi\341\273\203n s\341\273\221", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Lichsunguoidung", "S\341\273\221 t\303\240i kho\341\272\243n", nullptr));
        buttontimkiem->setText(QCoreApplication::translate("Lichsunguoidung", "T\303\254m ki\341\272\277m", nullptr));
        lblsoluong->setText(QCoreApplication::translate("Lichsunguoidung", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Lichsunguoidung: public Ui_Lichsunguoidung {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LICHSUNGUOIDUNG_H
