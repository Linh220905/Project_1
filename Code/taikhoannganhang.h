#ifndef TAIKHOANNGANHANG_H
#define TAIKHOANNGANHANG_H
#include"QString"

class Taikhoannganhang
{
public:
    Taikhoannganhang();
    long int thanhtoan(long int);
    QString get_stk();
    long int get_tien();
    void set_stk(QString);
    void set_sotien(long int);
    long int noptien(long int);
private:
    QString stk;
    long int tien=0;
};

#endif // TAIKHOANNGANHANG_H
