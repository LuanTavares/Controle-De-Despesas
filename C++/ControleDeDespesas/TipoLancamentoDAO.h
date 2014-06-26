#ifndef TIPOLANCAMENTODAO_H
#define TIPOLANCAMENTODAO_H
#include <QList>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <iostream>
#include "TipoLancamento.h"
#include "Conexao.h"

class TipoLancamentoDAO {

public:
    TipoLancamentoDAO(Conexao *conn);
    ~TipoLancamentoDAO();
    QList<TipoLancamento> getTiposLancamento();
    bool insereTipoLancamento(TipoLancamento tipo);
    bool atualizaTipoLancamento(TipoLancamento tipo);
    bool deletaTipoLancamento(TipoLancamento tipo);

private:
    QSqlDatabase db;
    QSqlQuery query;
};

#endif // TIPOLANCAMENTODAO_H
