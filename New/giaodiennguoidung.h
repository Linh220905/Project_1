#ifndef GIAODIENNGUOIDUNG_H
#define GIAODIENNGUOIDUNG_H

#include <QDialog>
#include"nguoidung.h"
#include"noptien.h"
#include"giaodienthanhtoan.h"
#include"danhsachtramthuphi.h"
#include"doimatkhau.h"
#include"lichsugiaodich.h"
#include"QDateTime"
#include"phanhoi.h"


namespace Ui {
class Giaodiennguoidung;
}

class Giaodiennguoidung : public QDialog
{
    Q_OBJECT

public:
    explicit Giaodiennguoidung( QWidget *parent = nullptr);

    ~Giaodiennguoidung();
    void get_thongtin(QString&,QString&);

    void addThongTinCaNhan();
    void addTienGoccuafile();
    QString Docstylesheet(QString);



private slots:



    void on_buttonNtien_clicked();
    void NopTien();
    void ThanhToan();



    void on_buttonTtoan_clicked();

    void on_ButtonLsu_clicked();

    void on_pushButton_clicked();



    void on_buttonluu_clicked();

    void on_buttonPhanHoi_clicked();

private:
    Ui::Giaodiennguoidung *ui;
    Ui::Noptien *ptrnoptien;
    Noptien *Ptrnoptien;
    Giaodienthanhtoan *ptrgiaodienthanhtoan;
    Phanhoi *ptrphanhoi;
    double Tiengoc;
    Danhsachtramthuphi danhSachTram;
    QString name;
    QString pass;
    QString loaixe;
    QString Tentk;
    QString Stk;
    QString sdt;
    QString bienso;
    double TienThanhToan;
    Doimatkhau *ptrdoimatkhau;
    Lichsugiaodich *ptrlichsu;
    QString Thoigian;
    QString tentram;




};

#endif // GIAODIENNGUOIDUNG_H
