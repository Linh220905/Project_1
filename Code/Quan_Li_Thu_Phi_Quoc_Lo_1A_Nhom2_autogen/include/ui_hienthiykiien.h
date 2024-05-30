/********************************************************************************
** Form generated from reading UI file 'hienthiykiien.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HIENTHIYKIIEN_H
#define UI_HIENTHIYKIIEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Hienthiykiien
{
public:
    QLabel *label;

    void setupUi(QDialog *Hienthiykiien)
    {
        if (Hienthiykiien->objectName().isEmpty())
            Hienthiykiien->setObjectName("Hienthiykiien");
        Hienthiykiien->resize(729, 383);
        label = new QLabel(Hienthiykiien);
        label->setObjectName("label");
        label->setGeometry(QRect(40, -30, 651, 331));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);

        retranslateUi(Hienthiykiien);

        QMetaObject::connectSlotsByName(Hienthiykiien);
    } // setupUi

    void retranslateUi(QDialog *Hienthiykiien)
    {
        Hienthiykiien->setWindowTitle(QCoreApplication::translate("Hienthiykiien", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Hienthiykiien", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Hienthiykiien: public Ui_Hienthiykiien {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HIENTHIYKIIEN_H
