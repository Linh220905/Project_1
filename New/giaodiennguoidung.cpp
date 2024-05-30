#include "giaodiennguoidung.h"
#include "ui_giaodiennguoidung.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QStringList>
#include <QMessageBox>
#include <QCryptographicHash>
#include "QStringList"



Giaodiennguoidung::Giaodiennguoidung(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Giaodiennguoidung)
{
    ui->setupUi(this);
    setWindowTitle("Giao diện người dùng");
    Ptrnoptien = new Noptien();
    ptrgiaodienthanhtoan = new Giaodienthanhtoan();
    ptrdoimatkhau = new Doimatkhau();
    ptrlichsu = new Lichsugiaodich();
    ptrphanhoi = new Phanhoi();
    // các tín hiệu để kết nối dữ liệu
    connect(Ptrnoptien, &Noptien::accepted, this, &Giaodiennguoidung::NopTien);
    connect(ptrgiaodienthanhtoan, &Giaodienthanhtoan::accepted, this, &Giaodiennguoidung::ThanhToan);
     connect(ptrdoimatkhau, &Doimatkhau::accepted, this, &Giaodiennguoidung::addThongTinCaNhan);



}

Giaodiennguoidung::~Giaodiennguoidung()
{
    delete ui;
    delete Ptrnoptien;
    delete ptrgiaodienthanhtoan;
    delete ptrdoimatkhau;
    delete ptrlichsu;
    delete ptrphanhoi;
}


void Giaodiennguoidung::addTienGoccuafile()
{

    QString tenfile = Tentk + " - NganHang.txt";
    QString tiengoc;
    QFile filein(tenfile);

    if (!filein.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "loi doc file tien:" << filein.errorString();
        return;
    }

    QTextStream in(&filein);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList park = line.split(":::");
        if (park.size() == 2) {
            tiengoc = park[1];
        }
    }
    filein.close();

    Tiengoc = tiengoc.toDouble();
    qDebug() << "Tien goc:" << Tiengoc;
}
// hàm này để lấy thông tin từ file đăng nhập
void Giaodiennguoidung::get_thongtin(QString &ten, QString &mk)
{
    name = ten;
    QString Mk = mk;
    pass = QString(QCryptographicHash::hash(Mk.toUtf8(), QCryptographicHash::Md5).toHex());
    show();
    addThongTinCaNhan();
    addTienGoccuafile();
    QString Tien ="Số dư hiện tại: " + QString::number(Tiengoc, 'f', 2)+" VND";
    ui->llbtien->setText(Tien);

}

void Giaodiennguoidung::addThongTinCaNhan()
{
    QFile fs("TaiKhoanNguoiDung.txt");
    if (!fs.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "loi doc file nguoi dung" << fs.errorString();
        return;
    }

    QTextStream in(&fs);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList park = line.split(":::");
        if (park.size() >= 6 && park[1] == name && park[2] == pass) {
            Tentk=park[0];
            sdt=park[3];
            loaixe=park[4];
            bienso=park[5];
            Stk=park[6];
            ui->lblTentk->setText("Tên tài khoản: "+Tentk);
            ui->linesdt->setText(sdt);
            ui->lineloaixe->setText(loaixe);
            ui->linebienso->setText(bienso);
            ui->linestk->setText(Stk);
        }
    }
    fs.close();
}

void Giaodiennguoidung::on_buttonNtien_clicked()
{
    Ptrnoptien->show();
    Ptrnoptien->exec();
}

void Giaodiennguoidung::NopTien()
{
    QString stk = Ptrnoptien->getStk();
    double tiennop = Ptrnoptien->getTiennop();
    Tiengoc += tiennop;
    if (Stk!=stk)
    {
        QMessageBox::warning(this,"Lỗi","Thông tin không đúng");
        return;
    }

    QString Tentk = ui->lblTentk->text();
    QString tenfile = Tentk + " - NganHang.txt";
    QFile fileout(tenfile);
    if (!fileout.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug() << "Loi" << fileout.errorString();
        return;
    }
    QTextStream out(&fileout);
    out << stk << "::: " << QString::number(Tiengoc, 'f', 2);
    fileout.close();


    ui->llbtien->setText("Số dư hiện tại: " + QString::number(Tiengoc, 'f', 2)+" VND");
    QMessageBox::information(this, "Thông báo", "Nộp tiền thành công");
}

void Giaodiennguoidung::on_buttonTtoan_clicked()
{
    TramThuPhi tram;
    QDateTime thoigian = QDateTime::currentDateTime();
     Thoigian = thoigian.toString("hh:mm:ss yyyy-MM-dd");
    danhSachTram.clear();
    danhSachTram.docTramTuFile("DanhSachTramThuPhi.txt",loaixe);
    // random trạm
    tram = danhSachTram.layThongTinTram();
    TienThanhToan = tram.tien;
    tentram=tram.ten;
    // truyền tt qua file thanh toán
    ptrgiaodienthanhtoan->layThongTin(Tentk,loaixe);
    ptrgiaodienthanhtoan->hienThongTinTram(tram.ten,tram.tien,Thoigian);
    ptrgiaodienthanhtoan->exec();

}
void Giaodiennguoidung::ThanhToan()
{

    if (Tiengoc<TienThanhToan)
    {
        QMessageBox::warning(this,"Lỗi","Vui lòng nộp thêm tiền vào tài khoản");
        return;
    }
    Tiengoc -= TienThanhToan;


    QString tenfile = Tentk + " - NganHang.txt";
    QFile fileout(tenfile);
    if (!fileout.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug() << "Loi ghi file thanh toan" << fileout.errorString();
        return;
    }
    QTextStream out(&fileout);
    out << Stk << "::: " << QString::number(Tiengoc, 'f', 2);
    fileout.close();


    ui->llbtien->setText("Số dư hiện tại: " + QString::number(Tiengoc, 'f', 2)+" VND");
    QMessageBox::information(this, "Thông báo", "Thanh toán thành công");
    if (Tiengoc>TienThanhToan)
    {

        QFile file("LichSuGiaoDich.txt");
        if (!file.open(QIODevice::WriteOnly | QIODevice::Text |QIODevice::Append))
        {
            qDebug()<<" Loi";
        }
        QTextStream out(&file);
        out<<Tentk<<":::"<<loaixe<<":::"<<tentram<<":::"<<QString::number(TienThanhToan)<<":::"<<Thoigian<<"\n";
        file.close();
    }
}


void Giaodiennguoidung::on_ButtonLsu_clicked()
{
   // Truyền thông tin qua file lịch sử để check giao dịch
    ptrlichsu->Doclichsutufile(Tentk);


}


void Giaodiennguoidung::on_pushButton_clicked()
{
    // Truyền thông tin để check
    ptrdoimatkhau->doimatkhau(pass,Tentk);
}


// slots này để chỉnh sửa thông tin người dùng
void Giaodiennguoidung::on_buttonluu_clicked()
{
    QString Sdt= ui->linesdt->text();
    QString Loaixe= ui->lineloaixe->text();
    QString Bienso= ui->linebienso->text();
    QString Stk= ui->linestk->text();
    QStringList lines;
    QFile file("TaiKhoanNguoiDung.txt");
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
        if (park[0]==Tentk)
        {
            park[3]=Sdt;
            park[4]=Loaixe;
            park[5]=Bienso;
            park[6]=Stk;
        }
        lines.append(park.join(":::"));
    }
    file.close();

    if (!file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Truncate))
    {
        qDebug() << "Lỗi ghi file";
        return;
    }

    QTextStream out(&file);
    for ( QString line : lines)
    {
        out << line << "\n";
    }

    file.close();
QMessageBox::information(this,"Thông báo","Chỉnh sửa thành công");
    addThongTinCaNhan();
}



void Giaodiennguoidung::on_buttonPhanHoi_clicked()
{
    ptrphanhoi->Hienthi(Tentk);
}

