/********************************************************************************
** Form generated from reading UI file 'quanlind.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUANLIND_H
#define UI_QUANLIND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Quanlind
{
public:
    QTableWidget *tableWidget;

    void setupUi(QDialog *Quanlind)
    {
        if (Quanlind->objectName().isEmpty())
            Quanlind->setObjectName("Quanlind");
        Quanlind->resize(1199, 466);
        tableWidget = new QTableWidget(Quanlind);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(410, 50, 256, 192));

        retranslateUi(Quanlind);

        QMetaObject::connectSlotsByName(Quanlind);
    } // setupUi

    void retranslateUi(QDialog *Quanlind)
    {
        Quanlind->setWindowTitle(QCoreApplication::translate("Quanlind", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Quanlind: public Ui_Quanlind {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUANLIND_H
