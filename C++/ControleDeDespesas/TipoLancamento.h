#ifndef TIPOLANCAMENTO_H
#define TIPOLANCAMENTO_H
#include <QString>

class TipoLancamento {
public:
    TipoLancamento();
    TipoLancamento(QString DesTip, QString NatTip, int CodTip);
    ~TipoLancamento();
    void setDesTip(QString DesTip);
    void setNatTip(QString NatTip);
    void setCodTip(int CodTip);
    QString getDesTip();
    QString getNatTip();
    int getCodTip();

private:
    QString DesTip, NatTip;
    int CodTip;
};

#endif // TIPOLANCAMENTO_H
