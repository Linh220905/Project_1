#ifndef QUANLINGUOIDUNG_H
#define QUANLINGUOIDUNG_H
#include"nguoidung.h"
#include"QVector"

class Quanlinguoidung :public Nguoidung
{
public:
    Quanlinguoidung();
    void add_nguoidung(Nguoidung);
    static QVector<Nguoidung> get_qlnguoidung();

private:
    static QVector<Nguoidung> nguoidung;
};

#endif // QUANLINGUOIDUNG_H
