#ifndef LANCAMENTO_H
#define LANCAMENTO_H
#include <QDate>
#include "TipoLancamento.h"

class Lancamento {
public:
    Lancamento();
    Lancamento(int CodLan, TipoLancamento * TipLan,QDate DatLan, int NumPar, double VlrPar, QString ObsLan);
    ~Lancamento();
    void setCodLan(int CodLan);
    void setTipLan(TipoLancamento * TipLan);
    void setDatLan(QDate DatLan);
    void setNumPar(int NumPar);
    void setVlrPar(double VlrPar);
    void setObsLan(QString ObsLan);
    int getCodLan();
    TipoLancamento * getTipLan();
    QDate getDatLan();
    int getNumPar();
    double getVlrPar();
    QString getObsLan();

private:
    TipoLancamento * TipLan;
    int CodLan, NumPar;
    double VlrPar;
    QDate DatLan;
    QString ObsLan;

};

#endif // LANCAMENTO_H
