#ifndef LICHSUNGUOIDUNG_H
#define LICHSUNGUOIDUNG_H

#include <QDialog>

namespace Ui {
class Lichsunguoidung;
}

class Lichsunguoidung : public QDialog
{
    Q_OBJECT

public:
    explicit Lichsunguoidung(QWidget *parent = nullptr);
    ~Lichsunguoidung();
    void Themlichsu(QString,QString,QString,QString,QString,int);
    void Docnguoidungtufile();
    void soluongnguoidung();
    QString Tachten(QString);

private slots:


    void on_buttontimkiem_clicked();

private:
    Ui::Lichsunguoidung *ui;
     QVector<QStringList> Nguoidung;
};

#endif // LICHSUNGUOIDUNG_H
