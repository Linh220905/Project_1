#include "lichsunguoidung.h"
#include "ui_lichsunguoidung.h"
#include <QTableWidget>
#include <QFile>
#include <QDebug>

Lichsunguoidung::Lichsunguoidung(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Lichsunguoidung)
{
    ui->setupUi(this);
    setWindowTitle("Danh sách người dùng");
}

Lichsunguoidung::~Lichsunguoidung()
{
    delete ui;
}
void Lichsunguoidung::Themlichsu(QString tentaikhoan, QString sdt, QString loaixe, QString bienso, QString stk, int Hang) {
    ui->tableWidget->insertRow(Hang);
    ui->tableWidget->setItem(Hang, 0, new QTableWidgetItem(tentaikhoan));
    ui->tableWidget->setItem(Hang, 1, new QTableWidgetItem(sdt));
    ui->tableWidget->setItem(Hang, 2, new QTableWidgetItem(loaixe));
    ui->tableWidget->setItem(Hang, 3, new QTableWidgetItem(bienso));
    ui->tableWidget->setItem(Hang, 4, new QTableWidgetItem(stk));
}
QString Lichsunguoidung::Tachten( QString fullName) {
    QStringList part = fullName.split(' ');
    return part.isEmpty() ? QString() : part.last();
}
void Lichsunguoidung::Docnguoidungtufile()
{
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeMode::Stretch);
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(5);
     Nguoidung.clear();
    QFile lichsu("TaiKhoanNguoiDung.txt");
    if (!lichsu.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Lỗi";
    }

    QTextStream in(&lichsu);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList park = line.split(":::");
        if (park.size() == 7 ) {
            Nguoidung.push_front(park);

        }
    }
    lichsu.close();
    std::sort(Nguoidung.begin(), Nguoidung.end(), [this]( QStringList a,  QStringList b) {
        return Tachten(a[0]) < Tachten(b[0]);
    });

    ui->tableWidget->setRowCount(0);
    int hang = 0;
    for ( QStringList park : Nguoidung) {
        Themlichsu(park[0], park[3], park[4], park[5], park[6], hang);
        hang++;
    }
    show();
    soluongnguoidung();
}





void Lichsunguoidung::on_buttontimkiem_clicked()
{

    ui->tableWidget->setRowCount(0);

    int hang = 0;
    QString tentk = ui->lineTkiem->text();
    if(tentk=="")
    {
        Nguoidung.clear();
        Docnguoidungtufile();
    }

    for (int i=0;i<Nguoidung.size();i++)
    {

        if (Nguoidung[i][0]==tentk)
        {
            Themlichsu(Nguoidung[i][0], Nguoidung[i][3], Nguoidung[i][4], Nguoidung[i][5], Nguoidung[i][6], hang);
            hang++;
        }
    }
}
void Lichsunguoidung::soluongnguoidung()
{
    QString soluong=QString::number(Nguoidung.size());
    ui->lblsoluong->setText("Số lượng: "+ soluong);
}

