#ifndef DANHSACHTRAMTHUPHI_H
#define DANHSACHTRAMTHUPHI_H

#include <QObject>
#include"QVector"
#include <QString>
#include"QFile"
#include"QMap"

struct TramThuPhi {
    QString ten;
    double tien;

    TramThuPhi( QString tenTram = "") : ten(tenTram) {}
};

class Danhsachtramthuphi : public QObject
{
    Q_OBJECT
public:
    explicit Danhsachtramthuphi(QObject *parent = nullptr);


    TramThuPhi layThongTinTram() ;
    bool docTramTuFile(QString ,QString);
    void clear();

private:
    QVector<TramThuPhi> danhSachTram;
};

#endif
