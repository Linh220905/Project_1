/********************************************************************************
** Form generated from reading UI file 'quanlilichsu.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUANLILICHSU_H
#define UI_QUANLILICHSU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Quanlilichsu
{
public:
    QTableWidget *tableWidget;
    QPushButton *buttonLoc;
    QComboBox *comboBoxTramThuPhi;
    QLabel *lblsoluong;

    void setupUi(QDialog *Quanlilichsu)
    {
        if (Quanlilichsu->objectName().isEmpty())
            Quanlilichsu->setObjectName("Quanlilichsu");
        Quanlilichsu->resize(1267, 715);
        tableWidget = new QTableWidget(Quanlilichsu);
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
        tableWidget->setGeometry(QRect(10, 90, 1251, 621));
        QFont font;
        font.setPointSize(13);
        tableWidget->setFont(font);
        buttonLoc = new QPushButton(Quanlilichsu);
        buttonLoc->setObjectName("buttonLoc");
        buttonLoc->setGeometry(QRect(40, 10, 101, 61));
        QFont font1;
        font1.setPointSize(15);
        buttonLoc->setFont(font1);
        buttonLoc->setStyleSheet(QString::fromUtf8("border: 2px solid black"));
        comboBoxTramThuPhi = new QComboBox(Quanlilichsu);
        comboBoxTramThuPhi->setObjectName("comboBoxTramThuPhi");
        comboBoxTramThuPhi->setGeometry(QRect(150, 10, 381, 61));
        comboBoxTramThuPhi->setFont(font1);
        comboBoxTramThuPhi->setStyleSheet(QString::fromUtf8("border: 2px solid black"));
        lblsoluong = new QLabel(Quanlilichsu);
        lblsoluong->setObjectName("lblsoluong");
        lblsoluong->setGeometry(QRect(1090, 20, 161, 41));
        lblsoluong->setFont(font1);

        retranslateUi(Quanlilichsu);

        QMetaObject::connectSlotsByName(Quanlilichsu);
    } // setupUi

    void retranslateUi(QDialog *Quanlilichsu)
    {
        Quanlilichsu->setWindowTitle(QCoreApplication::translate("Quanlilichsu", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Quanlilichsu", "T\303\252n kh\303\241ch h\303\240ng", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Quanlilichsu", "Lo\341\272\241i xe", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Quanlilichsu", "T\303\252n tr\341\272\241m", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Quanlilichsu", "S\341\273\221 ti\341\273\201n", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Quanlilichsu", "Th\341\273\235i gian", nullptr));
        buttonLoc->setText(QCoreApplication::translate("Quanlilichsu", "L\341\273\215c", nullptr));
        lblsoluong->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Quanlilichsu: public Ui_Quanlilichsu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUANLILICHSU_H
