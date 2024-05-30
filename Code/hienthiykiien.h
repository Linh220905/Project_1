#ifndef HIENTHIYKIIEN_H
#define HIENTHIYKIIEN_H

#include <QDialog>

namespace Ui {
class Hienthiykiien;
}

class Hienthiykiien : public QDialog
{
    Q_OBJECT

public:
    explicit Hienthiykiien(QWidget *parent = nullptr);
    ~Hienthiykiien();
    void Hienthi(QString,QString);
    void Docykien();

private:
    Ui::Hienthiykiien *ui;
    QString tentk;
    QString tieude;
};

#endif // HIENTHIYKIIEN_H
