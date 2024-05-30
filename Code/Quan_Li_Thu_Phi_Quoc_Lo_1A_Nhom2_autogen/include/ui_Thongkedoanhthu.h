/********************************************************************************
** Form generated from reading UI file 'Thongkedoanhthu.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THONGKEDOANHTHU_H
#define UI_THONGKEDOANHTHU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Doanhthu
{
public:
    QTableWidget *tableWidget;
    QLabel *lblTongtien;

    void setupUi(QDialog *Doanhthu)
    {
        if (Doanhthu->objectName().isEmpty())
            Doanhthu->setObjectName("Doanhthu");
        Doanhthu->resize(999, 713);
        tableWidget = new QTableWidget(Doanhthu);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(0, 70, 1001, 631));
        QFont font;
        font.setPointSize(15);
        tableWidget->setFont(font);
        lblTongtien = new QLabel(Doanhthu);
        lblTongtien->setObjectName("lblTongtien");
        lblTongtien->setGeometry(QRect(700, 10, 281, 51));
        QFont font1;
        font1.setPointSize(16);
        lblTongtien->setFont(font1);

        retranslateUi(Doanhthu);

        QMetaObject::connectSlotsByName(Doanhthu);
    } // setupUi

    void retranslateUi(QDialog *Doanhthu)
    {
        Doanhthu->setWindowTitle(QCoreApplication::translate("Doanhthu", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Doanhthu", "T\303\252n tr\341\272\241m", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Doanhthu", "S\341\273\221 l\306\260\341\273\243ng giao d\341\273\213ch", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Doanhthu", "T\341\273\225ng ti\341\273\201n", nullptr));
        lblTongtien->setText(QCoreApplication::translate("Doanhthu", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Doanhthu: public Ui_Doanhthu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THONGKEDOANHTHU_H
