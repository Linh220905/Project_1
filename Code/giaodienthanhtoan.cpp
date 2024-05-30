#include "giaodienthanhtoan.h"
#include "ui_giaodienthanhtoan.h"
#include"QFile"
#include"QDebug"
#include"QDateTime"
Giaodienthanhtoan::Giaodienthanhtoan(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Giaodienthanhtoan)
{
    ui->setupUi(this);
    setWindowTitle("Thanh toán");
}

Giaodienthanhtoan::~Giaodienthanhtoan()
{
    delete ui;
}

void Giaodienthanhtoan::layThongTin(QString ten,QString loaixe)
{
    this->ten=ten;
    this->loaixe=loaixe;
}

void Giaodienthanhtoan::hienThongTinTram( QString tenTram, double soTien,QString thoiGian)
{
    ui->lblbill->setText("Tên khách hàng: " + ten +"\nLoại xe: " + loaixe +"\nTên trạm: " + tenTram+"\nSố tiền: "+QString::number(soTien)+"\nThời gian: "+thoiGian);
}

void Giaodienthanhtoan::on_pushButton_clicked()
{
    accept();
}

