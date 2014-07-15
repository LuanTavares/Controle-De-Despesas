#ifndef LANCAMENTODAO_H
#define LANCAMENTODAO_H
#include <QList>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <iostream>
#include "Lancamento.h"
#include "Conexao.h"

class LancamentoDAO {

public:
    LancamentoDAO(Conexao *conn);
    ~LancamentoDAO();
    QList <Lancamento> getLancamentos();
    double getDespesas(QDate dataInicio, QDate dataFim);
    double getProventos(QDate dataInicio, QDate dataFim);
    bool insereLancamento(Lancamento lan);
    bool atualizaLancamento(Lancamento lan);
    bool deletaLancamento(Lancamento lan);
    QSqlQueryModel * get(QDate dataInicio, QDate dataFim);

private:
    QSqlDatabase db;
    QSqlQuery query;
};

#endif // LANCAMENTODAO_H
