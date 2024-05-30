#include "phanhoi.h"
#include "ui_phanhoi.h"
#include"QFile"
#include"QDebug"
#include"QMessageBox"

Phanhoi::Phanhoi(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Phanhoi)
{
    ui->setupUi(this);
    setWindowTitle("Phản hồi");

}

Phanhoi::~Phanhoi()
{
    delete ui;
}
void Phanhoi::Hienthi(QString tentk)
{
    Tentk=tentk;
    show();
    ui->textEdit->setStyleSheet("background-color: white;");
    ui->textEdit->setStyleSheet("color: black;");
}
void Phanhoi::on_buttonGui_clicked()
{
    QString tieude = ui->lineEditTieude->text(); ui->lineEditTieude->clear();
    QString noidung = ui->textEdit->toPlainText(); ui->textEdit->clear();
    if (tieude.isEmpty() || noidung.isEmpty())
    {
        QMessageBox::warning(this,"Lỗi","Vui lòng nhập đày đủ thông tin");
        return;
    }
    QFile file("YKien.txt");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append))
    {
        qDebug()<<"loi";
        return;
    }
    QTextStream out(&file);
    out<<Tentk<<":::"<<tieude<<":::"<<noidung<<"<<END>>";
    file.close();
    QMessageBox::information(this,"Thông báo","Ý kiến của bạn đã được ghi nhận");
}

