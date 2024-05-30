#include "doimatkhau.h"
#include "ui_doimatkhau.h"
#include "QFile"
#include "QDebug"
#include "QString"
#include "QMessageBox"
#include <QCryptographicHash>

Doimatkhau::Doimatkhau(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Doimatkhau)
{
    ui->setupUi(this);
    setWindowTitle("Đổi mật khẩu");
    // Ẩn mk
    ui->lineMkcu->setEchoMode(QLineEdit::Password);
    ui->linemkMoi->setEchoMode(QLineEdit::Password);
    ui->lineMkmoix2->setEchoMode(QLineEdit::Password);
}

Doimatkhau::~Doimatkhau()
{
    delete ui;
}

void Doimatkhau::doimatkhau(QString mkcu, QString tentk)
{
    show();
    Mkcu = mkcu;
    Tentk = tentk;
}

void Doimatkhau::on_pushButton_clicked()
{
    QString MkCu = ui->lineMkcu->text();
    ui->lineMkcu->clear();
    QString hashMkCu = QString(QCryptographicHash::hash(MkCu.toUtf8(), QCryptographicHash::Md5).toHex());

    QString MKMoi = ui->linemkMoi->text();
    ui->linemkMoi->clear();
    QString MkMoix2 = ui->lineMkmoix2->text();
    ui->lineMkmoix2->clear();
    if (MkCu.isEmpty() || MKMoi.isEmpty() || MkMoix2.isEmpty())
    {
        QMessageBox::warning(this,"Lỗi","Vui lòng nhập đầy đủ thông tin");
        return;
    }
    if (MKMoi != MkMoix2)
    {
        QMessageBox::warning(this, "Lỗi", "Mật khẩu không trùng khớp");
        return;
    }

    QString hashMkMoi = QString(QCryptographicHash::hash(MKMoi.toUtf8(), QCryptographicHash::Md5).toHex());

    QFile file("TaiKhoanNguoiDung.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug() << "loi";
        return;
    }
    if (hashMkCu!=Mkcu)
    {
        QMessageBox::warning(this,"Lỗi","Mật khẩu sai vui lòng nhập lại");
        return;
    }
    QStringList lines;
    QTextStream in(&file);
    bool ktra = false;

    while (!in.atEnd())
    {
        QString line = in.readLine();
        QStringList parts = line.split(":::");
        if (parts.size() < 3)
        {

            lines.append(line);
            continue;
        }
        if (parts[0] == Tentk)
        {


                parts[2] = hashMkMoi;
                ktra = true;
                accept();


        }
        lines.append(parts.join(":::"));
    }

    file.close();

    if (!ktra)
    {
        QMessageBox::warning(this, "Lỗi", "Không tìm thấy tài khoản");
        return;
    }

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
    QMessageBox::information(this, "Thành công", "Đổi mật khẩu thành công");
    hide();
}
