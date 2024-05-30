#include "quanlinguoidung.h"

Quanlinguoidung::Quanlinguoidung() {}
void Quanlinguoidung::add_nguoidung(Nguoidung nd)
{
    nguoidung.push_front(nd);
}
QVector<Nguoidung> Quanlinguoidung::nguoidung;
QVector<Nguoidung> Quanlinguoidung::get_qlnguoidung()
{
    return nguoidung;
}
