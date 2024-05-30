/********************************************************************************
** Form generated from reading UI file 'lichsugiaodich.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LICHSUGIAODICH_H
#define UI_LICHSUGIAODICH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Lichsugiaodich
{
public:
    QTableWidget *tableWidget;

    void setupUi(QDialog *Lichsugiaodich)
    {
        if (Lichsugiaodich->objectName().isEmpty())
            Lichsugiaodich->setObjectName("Lichsugiaodich");
        Lichsugiaodich->resize(1317, 564);
        tableWidget = new QTableWidget(Lichsugiaodich);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
        QFont font;
        font.setPointSize(15);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font);
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font);
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font);
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(5, 1, 1317, 564));
        tableWidget->setFont(font);

        retranslateUi(Lichsugiaodich);

        QMetaObject::connectSlotsByName(Lichsugiaodich);
    } // setupUi

    void retranslateUi(QDialog *Lichsugiaodich)
    {
        Lichsugiaodich->setWindowTitle(QCoreApplication::translate("Lichsugiaodich", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Lichsugiaodich", "T\303\252n kh\303\241ch h\303\240ng", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Lichsugiaodich", "Lo\341\272\241i xe", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Lichsugiaodich", "T\303\252n tr\341\272\241m", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Lichsugiaodich", "S\341\273\221 ti\341\273\201n", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Lichsugiaodich", "Th\341\273\235i gian", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Lichsugiaodich: public Ui_Lichsugiaodich {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LICHSUGIAODICH_H
