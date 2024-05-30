#include "hienthiykiien.h"
#include "ui_hienthiykiien.h"
#include"QFile"
#include"QDebug"

Hienthiykiien::Hienthiykiien(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Hienthiykiien)
{
    ui->setupUi(this);

}

Hienthiykiien::~Hienthiykiien()
{
    delete ui;
}
void Hienthiykiien::Hienthi(QString tentk,QString tieude)
{
    this->tentk=tentk;
    this->tieude=tieude;
    show();
    Docykien();
}
void Hienthiykiien::Docykien()
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


    QStringList ykien = noidung.split("<<END>>");
    for (QString Ykien:ykien)
    {
        QStringList part=Ykien.split(":::");
        if (part[0]==tentk && part[1]==tieude)
        {
            ui->label->setText(part[2]);
            ui->label->setWordWrap(true);
            ui->label->setAlignment(Qt::AlignCenter);
            ui->label->setFixedWidth(500);
        }

    }

}
