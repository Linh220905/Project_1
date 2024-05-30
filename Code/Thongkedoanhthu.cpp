#include "Thongkedoanhthu.h"
#include "ui_Thongkedoanhthu.h"
#include"QFile"
#include"QDebug"



Doanhthu::Doanhthu(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Doanhthu)
{
    ui->setupUi(this);
    setWindowTitle("Thống kê doanh thu");
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeMode::Stretch);
    ui->tableWidget->setColumnCount(3);
    ui->tableWidget->setColumnWidth(2, 200);

}

Doanhthu::~Doanhthu()
{
    delete ui;
}
void Doanhthu::doctentram()
{
    QFile file("DanhSachTramThuPhi.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug()<<"loi";
        return;
    }
    QTextStream in(&file);
    while(!in.atEnd())
    {
        QString line = in.readLine();
        QStringList park= line.split(":::");
        Danhthu dthu(park[0]);
        danhthu.push_back(dthu);
    }
    file.close();
}
void Doanhthu::thongkedoanhthu()
{
    QFile file("LichSuGiaoDich.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug()<<"Loi";
        return;
    }
    danhthu.clear();
    doctentram();
    QTextStream in(&file);
    while(!in.atEnd())
    {
        Danhthu danhthuuu;
        QString line = in.readLine();
        QStringList park=line.split(":::");
        for (int i=0;i<danhthu.size();i++)
        {


        if (park.size()==5 && park[2]==danhthu[i].get_tentram())
        {
            double tien = park[3].toDouble();
            double tongtien=danhthu[i].get_tongtien()+tien;
            danhthu[i].set_tongtien(tongtien);
            int soluong=danhthu[i].get_soluong();
            soluong++;
            danhthu[i].set_soluong(soluong);
        }
    }
    }
    file.close();
}
void Doanhthu::themdanhthu( QString tentram,QString soluong,QString tongtien, int Hang) {
    ui->tableWidget->insertRow(Hang);
    ui->tableWidget->setItem(Hang, 0, new QTableWidgetItem(tentram));
    ui->tableWidget->setItem(Hang, 1, new QTableWidgetItem(soluong));
    ui->tableWidget->setItem(Hang, 2, new QTableWidgetItem(tongtien));

}
void Doanhthu::thongkevaobang()
{
  thongkedoanhthu();
    double Tongtien;
     ui->tableWidget->setRowCount(0);
    std::sort(danhthu.begin(), danhthu.end(), []( Danhthu a,  Danhthu b) {
      return a.get_tongtien()<b.get_tongtien();
    });
    int hang=0;
    for (int i=0;i<danhthu.size();i++)
  {
        Tongtien+= danhthu[i].get_tongtien();
            QString soluong=QString::number(danhthu[i].get_soluong());
            QString tongtien=QString::number(danhthu[i].get_tongtien(),'f',2);
            themdanhthu(danhthu[i].get_tentram(),soluong,tongtien,hang);

       \
  }
    ui->lblTongtien->setText("Tổng tiền: "+QString::number(Tongtien,'f',2));
    show();
}

