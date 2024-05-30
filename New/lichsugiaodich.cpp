#include "lichsugiaodich.h"
#include "ui_lichsugiaodich.h"
#include <QTableWidget>
#include <QFile>
#include <QDebug>

Lichsugiaodich::Lichsugiaodich(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Lichsugiaodich)
{
    ui->setupUi(this);
    setWindowTitle("Lịch sử");
   ui->tableWidget->setColumnWidth(2,200);
}

Lichsugiaodich::~Lichsugiaodich()
{
    delete ui;
}

void Lichsugiaodich::Themlichsu(QString tentaikhoan, QString loaixe, QString tentram, QString tien, QString thoigian, int Hang) {
    ui->tableWidget->insertRow(Hang);
    ui->tableWidget->setItem(Hang, 0, new QTableWidgetItem(tentaikhoan));
    ui->tableWidget->setItem(Hang, 1, new QTableWidgetItem(loaixe));
    ui->tableWidget->setItem(Hang, 2, new QTableWidgetItem(tentram));
    ui->tableWidget->setItem(Hang, 3, new QTableWidgetItem(tien));
    ui->tableWidget->setItem(Hang, 4, new QTableWidgetItem(thoigian));
}
void Lichsugiaodich::Doclichsutufile(QString tentk)
{
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeMode::Stretch);
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(5);

    QFile lichsu("LichSuGiaoDich.txt");
    if (!lichsu.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Lỗi";
    }

    QTextStream in(&lichsu);
    int hang = 0;
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList park = line.split(":::");
        if (park.size() == 5 && park[0]==tentk) {
            Themlichsu(park[0], park[1], park[2], park[3], park[4], hang);
            hang++;
        }
    }
    lichsu.close();
    show();
}
