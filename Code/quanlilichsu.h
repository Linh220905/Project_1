#ifndef QUANLILICHSU_H
#define QUANLILICHSU_H

#include <QDialog>

namespace Ui {
class Quanlilichsu;
}

class Quanlilichsu : public QDialog
{
    Q_OBJECT

public:
    explicit Quanlilichsu(QWidget *parent = nullptr);
    ~Quanlilichsu();
    void Themlichsu(QString ,QString,QString,QString,QString,int);
    void Doclichsutufile();
    void doccomboboxtufile();
    void soluonggiaodich();
    QString Tachten(QString);

private slots:
    void on_buttonLoc_clicked();

private:
    Ui::Quanlilichsu *ui;
    QVector<QStringList> Giaodich;


};

#endif // QUANLILICHSU_H
