#ifndef TAIKHOAN_H
#define TAIKHOAN_H
#include"QString"

class Taikhoan
{
public:
    Taikhoan(QString TenTk="",QString TenDnhap="",QString mk="");
    QString get_TenTk();
    QString get_TenDnhap();
    QString get_mk();
    void set_TenTk(QString TenTk);
    void set_TenDnhap(QString TenDnhap);
    void set_mk(QString mk);

private:
    QString TenTk;
    QString TenDnhap;
    QString mk;
};


#endif // TAIKHOAN_H
