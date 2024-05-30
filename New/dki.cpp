#include "dki.h"
#include "ui_dki.h"
#include"QString"
#include<QMessageBox>
#include"taikhoan.h"
#include"QFile"
#include"QDebug"
#include <QCryptographicHash>
#include <QRegularExpression>
#include <QRegularExpressionValidator>
#include <QValidator>


Dki::Dki(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dki)
{
    ui->setupUi(this);
    setWindowTitle("Đăng kí");
    // Ẩn mk
    ui->linepass->setEchoMode(QLineEdit::Password);
    ui->comboBoxLoaiXe->addItem("Xe loại 1 (< 2 tấn, < 12 ghế ngồi)");
    ui->comboBoxLoaiXe->addItem("Xe loại 2 (2-4 tấn, 12-24 ghế ngồi) ");
    ui->comboBoxLoaiXe->addItem("Xe loại 3 (4-10 tấn, > 31 ghế ngồi) ");
    ui->comboBoxLoaiXe->addItem("Xe loại 4 (10-18 tấn) ");
    ui->comboBoxLoaiXe->addItem("Xe loại 5 (>18 tấn)");

}

Dki::~Dki()
{
    delete ui;
}
bool Dki::checksdt( QString Sdt) {

    QRegularExpression regex("^\\d{10,11}$");
    QRegularExpressionValidator validator(regex, nullptr);
    int pos = 0;
    return validator.validate(const_cast<QString&>(Sdt), pos) == QValidator::Acceptable;
}
bool Dki::checkbienso(QString Bienso) {

    QRegularExpression regex("^[0-9]{2}[A-Z]{1,2}-[0-9]{4,5}$");
    QRegularExpressionValidator validator(regex);
    int pos = 0;
    return validator.validate(const_cast<QString&>(Bienso), pos) == QValidator::Acceptable;
}

void Dki::on_buttonDki_clicked()
{

    QString Tentk = ui->linenameuser->text(); ui->linenameuser->clear();
    QString TenDnhap = ui->linename->text(); ui->linename->clear();
    QString mk = ui->linepass->text(); ui->linepass->clear();
    // Mã hóa mật khẩu
    QString mkHash = QString(QCryptographicHash::hash(mk.toUtf8(), QCryptographicHash::Md5).toHex());
    QString sdt = ui->linesdt->text(); ui->linesdt->clear();
    QString loaixe = ui->comboBoxLoaiXe->currentText().split(" (")[0];
    QString bienso = ui->linebienso->text(); ui->linebienso->clear();
    QString stk = ui->linestk->text(); ui->linestk->clear();
    if (Tentk.isEmpty() || TenDnhap.isEmpty() || mk.isEmpty() || sdt.isEmpty() || loaixe.isEmpty() || bienso.isEmpty() || stk.isEmpty())
    {
        QMessageBox::warning(this,"Lỗi","Vui lòng nhập đầy đủ thông tin");
        return;
    }
    if (!checksdt(sdt))
    {
        QMessageBox::warning(this,"Lỗi","Số điện thoại sai định dạng");
        return;
    }
    if (!checkbienso(bienso))
    {
        QMessageBox::warning(this,"Lỗi","Biển số sai định dạng");
        return;
    }

   nd.add_Nguoidung(Tentk,TenDnhap,mk,sdt,loaixe,bienso,stk);
     qlnd.add_nguoidung(nd);


    QFile file("TaiKhoanNguoidung.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug()<<"Lỗi";
        return;
    }
    QTextStream in(&file);
    bool ktra=false;
    while(!in.atEnd())
    {
        QString line = in.readLine();
        QStringList park = line.split(":::");
        if (Tentk==park[0] || TenDnhap==park[1] || mk==park[2] || bienso==park[5])
        {
            ktra=true;
            QMessageBox::warning(this,"Lỗi","Thông tin đăng ký bị trùng");
            return;
        }
    }
    file.close();
    if (!ktra)
    {
        QFile file("TaiKhoanNguoidung.txt");
        if (!file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append))
        {
            qDebug()<<"Lỗi";
            return;
        }
        QTextStream out(&file);
        out<<Tentk<<":::"
           <<TenDnhap<<":::"
           <<mkHash<<":::"
           <<sdt<<":::"
           <<loaixe<<":::"
           <<bienso<<":::"
            <<stk<<"\n";
        QMessageBox::information(this,"Thông báo","Đăng ký thành công");
        hide();
    }

}

