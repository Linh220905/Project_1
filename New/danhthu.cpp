#include "danhthu.h"

Danhthu::Danhthu() {}
Danhthu::Danhthu(QString tentram)
{
    set_tentram(tentram);
    soluong=0;
    tongtien=0;
}

void Danhthu::set_tentram(QString tentram)
{
    this->tentram=tentram;
}
QString Danhthu::get_tentram()
{
    return tentram;
}
double Danhthu::get_tongtien()
{
    return tongtien;
}
 int Danhthu::get_soluong()
{
    return soluong;
}
void Danhthu::set_tongtien(double tongtien)
{
    this->tongtien=tongtien;
}
void Danhthu::set_soluong(int soluong)
{
    this-> soluong=soluong;
}
