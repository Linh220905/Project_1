#include "homthu.h"
#include "ui_homthu.h"
#include"QFile"
#include"QDebug"

Homthu::Homthu(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Homthu)
{
    ui->setupUi(this);
    setWindowTitle("Hòm thư");
    ptrhienthi = new Hienthiykiien();
    setbang();

}

Homthu::~Homthu()
{
    delete ui;
    delete ptrhienthi;
}
void Homthu::Themykien( QString tentaikhoan, QString tieude, int Hang) {
    ui->tableWidget->insertRow(Hang);
    ui->tableWidget->setItem(Hang, 0, new QTableWidgetItem(tentaikhoan));
    ui->tableWidget->setItem(Hang, 1, new QTableWidgetItem(tieude));
}
void Homthu::on_tableWidget_doubleClicked(const QModelIndex &index)
{
    int row = index.row();
    QString tentaikhoan = ui->tableWidget->item(row, 0)->text();
    QString tieude = ui->tableWidget->item(row, 1)->text();
      ptrhienthi->Hienthi(tentaikhoan,tieude);
}
void Homthu::docykientufile()
{
    QFile file("YKien.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qWarning() << "Cannot open file for reading.";
        return;
    }

    QTextStream in(&file);
    QString noidung = in.readAll();
    file.close();

    int hang=0;
    ui->tableWidget->setRowCount(0);
    QStringList ykien = noidung.split("<<END>>");
    for (QString Ykien : ykien)
    {
        QStringList part=Ykien.split(":::");
        if (part.size()==3)
        {
            Themykien(part[0],part[1],hang);
            hang++;
        }
    }
    show();
}
void Homthu::setbang()
{
    ui->tableWidget->setColumnCount(2);
    int totalWidth = ui->tableWidget->width();
    int column0Width = totalWidth / 3;
    int column1Width = column0Width * 2;

    ui->tableWidget->setColumnWidth(0, column0Width);
    ui->tableWidget->setColumnWidth(1, column1Width);
}


