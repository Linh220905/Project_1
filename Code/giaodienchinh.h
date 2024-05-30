#ifndef GIAODIENCHINH_H
#define GIAODIENCHINH_H

#include <QDialog>
#include"dnhap.h"
#include"dki.h"
#include"QMovie"
#include"QThread"
#include"giaodiennguoidung.h"


namespace Ui {
class Giaodienchinh;
}

class Giaodienchinh : public QDialog
{
    Q_OBJECT

public:
    explicit Giaodienchinh(QWidget *parent = nullptr);
    ~Giaodienchinh();
    void caigiaodien(QString);
    void hienthi();


private slots:


    void on_buttonDnhap_clicked();

    void on_buttonDki_clicked();


private:
    Ui::Giaodienchinh *ui;
    Dnhap *ptrdnhap;
    Dki *ptrdki;
    Giaodiennguoidung *ptrgiaodiennguoidung;


};

#endif // GIAODIENCHINH_H
