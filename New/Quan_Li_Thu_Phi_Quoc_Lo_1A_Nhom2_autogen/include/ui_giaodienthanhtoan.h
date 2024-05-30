/********************************************************************************
** Form generated from reading UI file 'giaodienthanhtoan.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GIAODIENTHANHTOAN_H
#define UI_GIAODIENTHANHTOAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Giaodienthanhtoan
{
public:
    QLabel *lblbill;
    QPushButton *pushButton;

    void setupUi(QDialog *Giaodienthanhtoan)
    {
        if (Giaodienthanhtoan->objectName().isEmpty())
            Giaodienthanhtoan->setObjectName("Giaodienthanhtoan");
        Giaodienthanhtoan->resize(712, 402);
        lblbill = new QLabel(Giaodienthanhtoan);
        lblbill->setObjectName("lblbill");
        lblbill->setGeometry(QRect(170, 10, 531, 191));
        QFont font;
        font.setPointSize(15);
        lblbill->setFont(font);
        pushButton = new QPushButton(Giaodienthanhtoan);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(250, 230, 131, 51));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("border: 2px solid black"));

        retranslateUi(Giaodienthanhtoan);

        QMetaObject::connectSlotsByName(Giaodienthanhtoan);
    } // setupUi

    void retranslateUi(QDialog *Giaodienthanhtoan)
    {
        Giaodienthanhtoan->setWindowTitle(QCoreApplication::translate("Giaodienthanhtoan", "Dialog", nullptr));
        lblbill->setText(QCoreApplication::translate("Giaodienthanhtoan", "T\303\252n tr\341\272\241m:", nullptr));
        pushButton->setText(QCoreApplication::translate("Giaodienthanhtoan", "X\303\241c nh\341\272\255n", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Giaodienthanhtoan: public Ui_Giaodienthanhtoan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GIAODIENTHANHTOAN_H
