#include "giaodienchinh.h"
#include "ui_giaodienchinh.h"
#include <QMovie>
#include <QCoreApplication>
#include <QDebug>

Giaodienchinh::Giaodienchinh(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Giaodienchinh)
{
    ui->setupUi(this);
    setWindowTitle("Giao diện chính");
    ptrdnhap = new Dnhap(this);
    ptrdki = new Dki(this);
    ptrgiaodiennguoidung = new Giaodiennguoidung();

    caigiaodien("C:/Users/linh/Downloads/giphy.gif");



}

Giaodienchinh::~Giaodienchinh()
{
    delete ui;
    delete ptrdnhap;
    delete ptrdki;
    delete ptrgiaodiennguoidung;

}

void Giaodienchinh::on_buttonDnhap_clicked()
{
    ptrdnhap->show();

}

void Giaodienchinh::on_buttonDki_clicked()
{
    ptrdki->show();
}
// Cài ảnh gif
void Giaodienchinh::caigiaodien(QString gifPath)
{

    ui->lblbackground->setVisible(false);
    QMovie *gifbackground = new QMovie(gifPath);
    if (!gifbackground->isValid()) {
        qDebug() << "Không thể tải GIF:" << gifPath;
        return;
    }
    ui->lblbackground->setMovie(gifbackground);
    ui->lblbackground->setVisible(true);
    ui->lblbackground->raise();
    ui->lblbackground->lower();
    gifbackground->start();
}

