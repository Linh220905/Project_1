#include "quanlilichsu.h"
#include "ui_quanlilichsu.h"
#include <QFile>
#include <QDebug>
#include <algorithm>
#include"QVector"

Quanlilichsu::Quanlilichsu(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Quanlilichsu)
{
    ui->setupUi(this);
     setWindowTitle("Danh sách lịch sử");
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeMode::Stretch);
    ui->tableWidget->setColumnCount(5);
     ui->tableWidget->setColumnWidth(2, 200);
    doccomboboxtufile();
}

Quanlilichsu::~Quanlilichsu()
{
    delete ui;
}

void Quanlilichsu::Themlichsu( QString tentaikhoan, QString loaixe,  QString tentram,QString tien, QString thoigian, int Hang) {
    ui->tableWidget->insertRow(Hang);
    ui->tableWidget->setItem(Hang, 0, new QTableWidgetItem(tentaikhoan));
    ui->tableWidget->setItem(Hang, 1, new QTableWidgetItem(loaixe));
    ui->tableWidget->setItem(Hang, 2, new QTableWidgetItem(tentram));
    ui->tableWidget->setItem(Hang, 3, new QTableWidgetItem(tien));
    ui->tableWidget->setItem(Hang, 4, new QTableWidgetItem(thoigian));
}
QString Quanlilichsu::Tachten( QString fullName) {
    QStringList part = fullName.split(' ');
    return part.isEmpty() ? QString() : part.last();
}
void Quanlilichsu::Doclichsutufile() {
    Giaodich.clear();
    QFile lichsu("LichSuGiaoDich.txt");
    if (!lichsu.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Lỗi khi mở file";
        return;
    }



    QTextStream in(&lichsu);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList park = line.split(":::");
        if (park.size() == 5) {
            Giaodich.push_back(park);
        }
    }
    lichsu.close();


    std::sort(Giaodich.begin(), Giaodich.end(), [this]( QStringList a,  QStringList b) {
        return Tachten(a[0]) < Tachten(b[0]);
    });


    ui->tableWidget->setRowCount(0);
    int hang = 0;
    for ( QStringList &park : Giaodich) {
        Themlichsu(park[0], park[1], park[2], park[3], park[4], hang);
        hang++;
    }

    show();
    soluonggiaodich();

}
void Quanlilichsu::doccomboboxtufile()
{
    QFile file("DanhSachTramThuPhi.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug()<<"Loi";
        return;
    }
    QTextStream in(&file);
    ui->comboBoxTramThuPhi->addItem(" ");
    while(!in.atEnd())
    {
        QString line = in.readLine();
        QStringList park= line.split(":::");
        if (park.size()==6)
        {

            ui->comboBoxTramThuPhi->addItem(park[0]);
        }
    }

    file.close();
}

void Quanlilichsu::on_buttonLoc_clicked()
{
     ui->tableWidget->setRowCount(0);

    int hang = 0;
    QString tram = ui->comboBoxTramThuPhi->currentText();
    if (tram==" ")
    { Giaodich.clear();
        Doclichsutufile();
    }
     for (int i=0;i<Giaodich.size();i++)
    {

        if (Giaodich[i][2]==tram)
         {
             Themlichsu(Giaodich[i][0], Giaodich[i][1], Giaodich[i][2], Giaodich[i][3], Giaodich[i][4], hang);
             hang++;
         }
    }
}
void Quanlilichsu::soluonggiaodich()
{
    QString soluong= QString::number(Giaodich.size());
    ui->lblsoluong->setText("Số lượng: "+soluong);
}


