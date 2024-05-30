/********************************************************************************
** Form generated from reading UI file 'quanlinguoidung.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUANLINGUOIDUNG_H
#define UI_QUANLINGUOIDUNG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Quanlinguoidung
{
public:
    QTableWidget *tableWidget;

    void setupUi(QDialog *Quanlinguoidung)
    {
        if (Quanlinguoidung->objectName().isEmpty())
            Quanlinguoidung->setObjectName("Quanlinguoidung");
        Quanlinguoidung->resize(1199, 466);
        tableWidget = new QTableWidget(Quanlinguoidung);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(410, 50, 256, 192));

        retranslateUi(Quanlinguoidung);

        QMetaObject::connectSlotsByName(Quanlinguoidung);
    } // setupUi

    void retranslateUi(QDialog *Quanlinguoidung)
    {
        Quanlinguoidung->setWindowTitle(QCoreApplication::translate("Quanlinguoidung", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Quanlinguoidung: public Ui_Quanlinguoidung {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUANLINGUOIDUNG_H
