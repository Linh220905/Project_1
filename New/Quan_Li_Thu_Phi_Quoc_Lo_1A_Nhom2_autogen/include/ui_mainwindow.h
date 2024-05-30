/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QListWidget *listWidget;
    QLabel *lbl;
    QPushButton *buttonLichSu;
    QPushButton *ButtonNguoidung;
    QLabel *label;
    QPushButton *buttondoanhthu;
    QPushButton *buttonHthu;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1270, 717);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(760, 120, 511, 571));
        QFont font;
        font.setPointSize(15);
        listWidget->setFont(font);
        listWidget->setStyleSheet(QString::fromUtf8(" color: black;"));
        lbl = new QLabel(centralwidget);
        lbl->setObjectName("lbl");
        lbl->setGeometry(QRect(150, 60, 551, 621));
        buttonLichSu = new QPushButton(centralwidget);
        buttonLichSu->setObjectName("buttonLichSu");
        buttonLichSu->setGeometry(QRect(0, 20, 161, 81));
        buttonLichSu->setFont(font);
        buttonLichSu->setStyleSheet(QString::fromUtf8("border: 2px solid black"));
        ButtonNguoidung = new QPushButton(centralwidget);
        ButtonNguoidung->setObjectName("ButtonNguoidung");
        ButtonNguoidung->setGeometry(QRect(190, 20, 161, 81));
        ButtonNguoidung->setFont(font);
        ButtonNguoidung->setStyleSheet(QString::fromUtf8("border: 2px solid black"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(850, 40, 391, 61));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        label->setFont(font1);
        buttondoanhthu = new QPushButton(centralwidget);
        buttondoanhthu->setObjectName("buttondoanhthu");
        buttondoanhthu->setGeometry(QRect(390, 20, 161, 81));
        buttondoanhthu->setFont(font);
        buttondoanhthu->setStyleSheet(QString::fromUtf8("border: 2px solid black"));
        buttonHthu = new QPushButton(centralwidget);
        buttonHthu->setObjectName("buttonHthu");
        buttonHthu->setGeometry(QRect(570, 20, 151, 81));
        buttonHthu->setFont(font);
        buttonHthu->setStyleSheet(QString::fromUtf8("border: 2px solid black"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1270, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lbl->setText(QString());
        buttonLichSu->setText(QCoreApplication::translate("MainWindow", "L\341\273\213ch s\341\273\255", nullptr));
        ButtonNguoidung->setText(QCoreApplication::translate("MainWindow", "Ng\306\260\341\273\235i d\303\271ng", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Danh s\303\241ch tr\341\272\241m thu ph\303\255", nullptr));
        buttondoanhthu->setText(QCoreApplication::translate("MainWindow", "Doanh thu", nullptr));
        buttonHthu->setText(QCoreApplication::translate("MainWindow", "H\303\262m th\306\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
