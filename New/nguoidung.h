#ifndef NGUOIDUNG_H
#define NGUOIDUNG_H
#include"QString.h"
#include"taikhoan.h"
#include"taikhoannganhang.h"
#include"QVector"


class Nguoidung : public Taikhoan
{
public:
    Nguoidung(){}
    Nguoidung(QString ,QString ,QString);
    void set_Sdt(QString sdt);
    void set_loaixe(QString loaixe);
    void set_bienso(QString bieso);
    QString get_sdt();
    QString get_loaixe();
    QString get_bienso();
    Taikhoannganhang get_tknganhang();
    void add_Nguoidung(QString,QString,QString,QString,QString,QString,QString);



private:

    QString sdt;
    QString loaixe;
    QString bienso;
    Taikhoannganhang TKNganhang;




};

#endif // NGUOIDUNG_H
