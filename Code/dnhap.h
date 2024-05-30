#ifndef DNHAP_H
#define DNHAP_H
#include"quanlind.h"
#include"nguoidung.h"
#include"mainwindow.h"
#include <QDialog>

class Giaodiennguoidung;

namespace Ui {
class Dnhap;
}

class Dnhap : public QDialog
{
    Q_OBJECT


public:
    explicit Dnhap(QWidget *parent = nullptr);
    ~Dnhap();
    QString get_name();
    QString get_pass();


private slots:
    void on_buttonDnhap_clicked();


private:
    Ui::Dnhap *ui;
    Giaodiennguoidung *ptrgiaodien;
    QString name;
    QString pass;
    MainWindow *ptrmainwindow;

};

#endif // DNHAP_H
