#include "noptien.h"
#include "ui_noptien.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QDebug>

Noptien::Noptien(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Noptien)
{
    ui->setupUi(this);
    setWindowTitle("Nop tien");
}

Noptien::~Noptien()
{
    delete ui;
}


QString Noptien::getStk()
{
    return Stk;
}

double Noptien::getTiennop()
{
    return Tiennop;
}

void Noptien::on_buttonxacnhan_clicked()
{
    Stk = ui->linestk->text(); ui->linestk->clear();
    QString tien = ui->linetien->text(); ui->linetien->clear();
    if (Stk.isEmpty() || tien.isEmpty())
    {
        QMessageBox::warning(this,"Lỗi","Vui lòng nhập đầy đủ thông tin");
        return;
    }
    Tiennop = tien.toDouble();
    accept();
}
