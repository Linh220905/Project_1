/********************************************************************************
** Form generated from reading UI file 'caidat.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAIDAT_H
#define UI_CAIDAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Caidat
{
public:

    void setupUi(QDialog *Caidat)
    {
        if (Caidat->objectName().isEmpty())
            Caidat->setObjectName("Caidat");
        Caidat->resize(1268, 716);

        retranslateUi(Caidat);

        QMetaObject::connectSlotsByName(Caidat);
    } // setupUi

    void retranslateUi(QDialog *Caidat)
    {
        Caidat->setWindowTitle(QCoreApplication::translate("Caidat", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Caidat: public Ui_Caidat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAIDAT_H
