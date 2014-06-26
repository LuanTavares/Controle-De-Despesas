#ifndef LANCAMENTODAO_H
#define LANCAMENTODAO_H
#include <QList>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <iostream>
#include "Lancamento.h"
#include "Conexao.h"

class LancamentoDAO {

public:
    LancamentoDAO(Conexao *conn);
    ~LancamentoDAO();
    QList <Lancamento> getLancamentos();
    bool insereLancamento(Lancamento lan);
    bool atualizaLancamento(Lancamento lan);
    bool deletaLancamento(Lancamento lan);

private:
    QSqlDatabase db;
    QSqlQuery query;
};

#endif // LANCAMENTODAO_H
