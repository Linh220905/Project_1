#ifndef GIAODIENTHANHTOAN_H
#define GIAODIENTHANHTOAN_H

#include <QDialog>

namespace Ui {
class Giaodienthanhtoan;
}

class Giaodienthanhtoan : public QDialog
{
    Q_OBJECT

public:
    explicit Giaodienthanhtoan(QWidget *parent = nullptr);
    ~Giaodienthanhtoan();
    void hienThongTinTram( QString , double,QString );
    void layThongTin(QString,QString);
    QString ten;
    QString loaixe;

private slots:
    void on_pushButton_clicked();

private:
    Ui::Giaodienthanhtoan *ui;
};

#endif // GIAODIENTHANHTOAN_H
