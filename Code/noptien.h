#ifndef NOPTIEN_H
#define NOPTIEN_H

#include <QDialog>

namespace Ui {
class Noptien;
}

class Noptien : public QDialog
{
    Q_OBJECT

public:
    explicit Noptien(QWidget *parent = nullptr);
    ~Noptien();


    QString getStk() ;
    double getTiennop() ;

private slots:
    void on_buttonxacnhan_clicked();

private:
    Ui::Noptien *ui;
    QString Tentk;
    double Tiengoc;
    QString Stk;
    double Tiennop;
};

#endif // NOPTIEN_H
