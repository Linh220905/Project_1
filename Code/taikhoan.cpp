#include "taikhoan.h"

Taikhoan::Taikhoan(QString TenTk,QString TenDnhap,QString mk)
    :TenTk(TenTk),TenDnhap(TenDnhap),mk(mk){}
 QString Taikhoan::get_TenTk()
{
    return TenTk;
} QString Taikhoan::get_TenDnhap()
{
    return TenDnhap;
} QString Taikhoan::get_mk()
{
    return mk;
}
void Taikhoan::set_TenTk(QString TenTk)
{
    this->TenTk=TenTk;
}
void Taikhoan::set_TenDnhap(QString TenDnhap)
{
    this->TenDnhap=TenDnhap;
}
void Taikhoan::set_mk(QString mk)
{
    this->mk=mk;
}
