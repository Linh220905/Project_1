/********************************************************************************
** Form generated from reading UI file 'homthu.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMTHU_H
#define UI_HOMTHU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Homthu
{
public:
    QTableWidget *tableWidget;

    void setupUi(QDialog *Homthu)
    {
        if (Homthu->objectName().isEmpty())
            Homthu->setObjectName("Homthu");
        Homthu->resize(1026, 525);
        tableWidget = new QTableWidget(Homthu);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(0, 0, 1021, 521));
        QFont font;
        font.setPointSize(15);
        tableWidget->setFont(font);

        retranslateUi(Homthu);

        QMetaObject::connectSlotsByName(Homthu);
    } // setupUi

    void retranslateUi(QDialog *Homthu)
    {
        Homthu->setWindowTitle(QCoreApplication::translate("Homthu", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Homthu", "T\303\252n t\303\240i kho\341\272\243n", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Homthu", "Ti\303\252u \304\221\341\273\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Homthu: public Ui_Homthu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMTHU_H
