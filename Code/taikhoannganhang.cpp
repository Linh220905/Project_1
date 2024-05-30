#include "taikhoannganhang.h"

Taikhoannganhang::Taikhoannganhang() {}
long int Taikhoannganhang::thanhtoan(long int tienthanhtoan)
{
    tien-=tienthanhtoan;
    return tien;
}
QString Taikhoannganhang::get_stk()
{
    return stk;
}
long int Taikhoannganhang::get_tien()
{
    return tien;
}
void Taikhoannganhang::set_stk(QString stk)
{
    this->stk=stk;
}
void Taikhoannganhang::set_sotien(long int tien)
{
    this->tien=tien;
}
long int Taikhoannganhang::noptien(long int tiennop)
{
    tien +=tiennop;
    return tien;
}
