#ifndef DKI_H
#define DKI_H

#include <QDialog>
#include"quanlinguoidung.h"
#include"QVector.h"
#include"nguoidung.h"

namespace Ui {
class Dki;
}

class Dki : public QDialog
{
    Q_OBJECT

public:
    explicit Dki(QWidget *parent = nullptr);
    ~Dki();
    bool checksdt(QString);
    bool checkbienso(QString);

private slots:
    void on_buttonDki_clicked();



private:
    Ui::Dki *ui;
    Nguoidung nd;
    Quanlinguoidung qlnd;


};

#endif // DKI_H
