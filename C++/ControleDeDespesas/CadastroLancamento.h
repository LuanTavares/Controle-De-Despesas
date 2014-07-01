#ifndef CADASTROLANCAMENTO_H
#define CADASTROLANCAMENTO_H

#include <QDialog>
#include "Conexao.h"
#include "Lancamento.h"
#include "LancamentoDAO.h"
#include "TipoLancamento.h"
#include "TipoLancamentoDAO.h"

namespace Ui {
    class CadastroLancamento;
}

class CadastroLancamento : public QDialog {
    Q_OBJECT
    
public:
    explicit CadastroLancamento(Conexao *connection, QWidget *parent = 0);
    ~CadastroLancamento();
    
private:
    Ui::CadastroLancamento *ui;
    Conexao * conn;
    QList <TipoLancamento> listTipos;
    QList <QString> listNomeTipos;

public slots:
    void gravaLancamento();
};

#endif // CADASTROLANCAMENTO_H
