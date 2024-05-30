#ifndef DANHTHU_H
#define DANHTHU_H
#include"QString"

class Danhthu
{
public:
    Danhthu();
    Danhthu(QString );
    void set_tentram(QString);
    QString get_tentram();
    double get_tongtien();
    int get_soluong();
    void set_tongtien(double);
    void set_soluong(int);
private:
    int soluong;
    double tongtien;
    QString tentram;

};

#endif // DANHTHU_H
