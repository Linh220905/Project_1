#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"quanlilichsu.h"
#include"lichsunguoidung.h"
#include"Thongkedoanhthu.h"
#include"homthu.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void caigiaodien();
    void doctramthuphitufile();

private slots:


    void on_buttonLichSu_clicked();

    void on_ButtonNguoidung_clicked();

    void on_buttondoanhthu_clicked();



    void on_buttonHthu_clicked();

private:
    Ui::MainWindow *ui;
    Quanlilichsu *ptrquanlilichsu;
    Lichsunguoidung *ptrlichsunguoidung;
    Doanhthu *ptrdoanhthu;
    Homthu *ptrhomthu;

};
#endif // MAINWINDOW_H
