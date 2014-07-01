#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include <QMainWindow>
#include <QTableWidget>
#include <QStringList>
#include <QSqlTableModel>
#include "Conexao.h"
#include "CadastroTipoLancamento.h"
#include "CadastroLancamento.h"

namespace Ui {
class Principal;
}

class Principal : public QMainWindow {
    Q_OBJECT
    
public:
    explicit Principal(QWidget *parent = 0);
    void atualizaTabela(QTableView * tableMes, int mesSelecionado);
    ~Principal();
    
private:
    Ui::Principal *ui;
    Conexao * con;

public slots:
    void cadastraTipoLancamento();
    void cadastraLancamento();
    void alimentaTabelas(int mes);
};

#endif // PRINCIPAL_H
