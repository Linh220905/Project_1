#include "nguoidung.h"

Nguoidung::Nguoidung(QString sdt,QString loaixe,QString bienso)
    : sdt(sdt),loaixe(loaixe),bienso(bienso){}
void Nguoidung::set_Sdt(QString sdt)
{
    this->sdt=sdt;
}
void Nguoidung::set_loaixe(QString loaixe)
{
    this->loaixe=loaixe;
}
void Nguoidung::set_bienso(QString bieso)
{
    this->bienso=bienso;
}
QString Nguoidung::get_sdt()
{
    return sdt;
}
QString Nguoidung::get_loaixe()
{
    return loaixe;
}
QString Nguoidung::get_bienso()
{
    return bienso;
}
Taikhoannganhang Nguoidung::get_tknganhang()
{
    return TKNganhang;
}
void Nguoidung::add_Nguoidung(QString tentk,QString tendnhap,QString mk,QString sdt,QString loaixe,QString bienso,QString stk)
{
    set_TenTk(tentk);
    set_TenDnhap(tendnhap);
    set_mk(mk);
    set_loaixe(loaixe);
    set_bienso(bienso);
    get_tknganhang().set_stk(stk);
}



