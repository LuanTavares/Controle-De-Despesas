#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include <QMainWindow>
#include <QTableWidget>
#include <QString>
#include <QStringList>
#include <QSqlTableModel>
#include <QProcess>
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
    void atualizaTabela(QTableView * tableMes, QLineEdit *lineMes, int mesSelecionado);
    ~Principal();
    
private:
    Ui::Principal *ui;
    Conexao * con;
    QProcess * processo;
    QStringList * parametros;
    QString * programa;


public slots:
    void cadastraTipoLancamento();
    void cadastraLancamento();
    void alimentaTabelas(int mes);
    void listaRelatorioAlimentacao();
};

#endif // PRINCIPAL_H
