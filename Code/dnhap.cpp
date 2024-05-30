#include "dnhap.h"
#include "ui_dnhap.h"
#include"QFile"
#include"QMessageBox"
#include"QString"
#include"QDebug"
#include"giaodiennguoidung.h"
#include <QCryptographicHash>

Dnhap::Dnhap(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dnhap)
{
    ui->setupUi(this);
    setWindowTitle("Đăng Nhập");
    // Ẩn mk
    ui->linepass->setEchoMode(QLineEdit::Password);
    ptrgiaodien = new Giaodiennguoidung(this);
    ptrmainwindow = new MainWindow();




}

Dnhap::~Dnhap()
{
    delete ui;
    delete ptrgiaodien;
    delete ptrmainwindow;
}

QString Dnhap::get_name()
{
    return name;
}
QString Dnhap::get_pass()
{
    return pass;
}

void Dnhap::on_buttonDnhap_clicked()
{
    name = ui->linename->text(); ui->linename->clear();
    pass = ui->linepass->text(); ui->linepass->clear();
    if (name.isEmpty() ||pass.isEmpty())
    {
        QMessageBox::warning(this,"Lỗi","Vui lòng nhập đầy đủ thông tin");
        return;
    }
    QString mkHashInput = QString(QCryptographicHash::hash(pass.toUtf8(), QCryptographicHash::Md5).toHex());
    if (name=="Admin" && pass=="admin123")
    {
        ptrmainwindow->show();

        return;
    }


    QFile file("TaiKhoanNguoiDung.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug()<<"Lỗi";
        return;
    }
    QTextStream in(&file);
    bool ktra=false;
    while (!in.atEnd())
    {
        QString line = in.readLine();
        QStringList park = line.split(":::");
        if (name==park[1] && mkHashInput==park[2])
        {
            ktra=true;
        }
    }
    if (ktra)
    {
        ptrgiaodien->get_thongtin(name,pass);

    } else
    {
        QMessageBox::warning(this,"Lỗi","Tài khoản không tồn tại");
    }
}

