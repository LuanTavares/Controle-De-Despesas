#ifndef LANCAMENTO_H
#define LANCAMENTO_H
#include <QDate>
#include "TipoLancamento.h"

class Lancamento {
public:
    Lancamento();
    Lancamento(int CodLan, TipoLancamento * TipLan,QDate * DatLan, int NumPar, QString ObsLan);
    ~Lancamento();
    void setCodLan(int CodLan);
    void setTipLan(TipoLancamento * TipLan);
    void setDatLan(QDate * DatLan);
    void setNumPar(int NumPar);
    void setObsLan(QString ObsLan);
    int getCodLan();
    TipoLancamento * getTipLan();
    QDate * getDatLan();
    int getNumPar();
    QString getObsLan();

private:
    TipoLancamento * TipLan;
    int CodLan, NumPar;
    double VlrLan;
    QDate * DatLan;
    QString ObsLan;

};

#endif // LANCAMENTO_H
