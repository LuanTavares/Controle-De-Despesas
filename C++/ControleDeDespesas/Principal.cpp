#include "Principal.h"
#include "ui_Principal.h"

Principal::Principal(QWidget *parent) : QMainWindow(parent), ui(new Ui::Principal) {
    ui->setupUi(this);
    connect(ui->actionLancamento,SIGNAL(triggered()),this,SLOT(cadastraLancamento()));
    connect(ui->actionTipo,SIGNAL(triggered()),this,SLOT(cadastraTipoLancamento()));
    connect(ui->tabWidgetMeses,SIGNAL(currentChanged(int)),this,SLOT(alimentaTabelas(int)));
    con = new Conexao();
}

Principal::~Principal() {
    delete ui;
}

void Principal::cadastraTipoLancamento(){
    CadastroTipoLancamento * dialogTipoLancamento = new CadastroTipoLancamento(con);
    dialogTipoLancamento->show();
}

void Principal::cadastraLancamento() {
    CadastroLancamento * dialogLancamento = new CadastroLancamento(con);
    dialogLancamento->show();
}

/*
con->getDataBase().open();
QSqlTableModel * model = new QSqlTableModel();
model->setTable("TipLan");
model->setEditStrategy(QSqlTableModel::OnManualSubmit);
model->select();
model->setHeaderData(0, Qt::Horizontal, tr("CodTip"));
model->setHeaderData(1, Qt::Horizontal, tr("DesTip"));
model->setHeaderData(2, Qt::Horizontal, tr("NatTip"));

ui->tableView->setModel(model);
*/

void Principal::alimentaTabelas(int mes) {
    switch (mes) {
    case 0:
        atualizaTabela(ui->tableViewJaneiro);
        break;
    case 1:
        atualizaTabela(ui->tableViewFevereiro);
        break;
    case 2:
        atualizaTabela(ui->tableViewMarco);
        break;
    default:
        break;
    }
}

void Principal::atualizaTabela(QTableView *mes) {
    con->getDataBase().open();
    QSqlTableModel * model = new QSqlTableModel();
    model->setQuery("SELECT ");
    //model->setTable("TipLan");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();
    model->setHeaderData(0, Qt::Horizontal, tr("CodTip"));
    model->setHeaderData(1, Qt::Horizontal, tr("DesTip"));
    model->setHeaderData(2, Qt::Horizontal, tr("NatTip"));

    mes->setModel(model);
}
