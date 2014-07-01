#ifndef CADASTROTIPOLANCAMENTO_H
#define CADASTROTIPOLANCAMENTO_H

#include <QDialog>
#include "Conexao.h"
#include "TipoLancamento.h"
#include "TipoLancamentoDAO.h"

namespace Ui {
    class CadastroTipoLancamento;
}

class CadastroTipoLancamento : public QDialog {
    Q_OBJECT
    
public:
    explicit CadastroTipoLancamento(Conexao * connection ,QWidget *parent = 0);
    ~CadastroTipoLancamento();
    
private:
    Ui::CadastroTipoLancamento *ui;
    Conexao * conn;

public slots:
    void gravaTipoLancamento();
};

#endif // CADASTROTIPOLANCAMENTO_H
