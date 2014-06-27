#include "Principal.h"
#include "ui_Principal.h"

Principal::Principal(QWidget *parent) : QMainWindow(parent), ui(new Ui::Principal) {
    ui->setupUi(this);
    connect(ui->actionLancamento,SIGNAL(triggered()),this,SLOT(teste()));
    con = new Conexao();
}

Principal::~Principal() {
    delete ui;
}

void Principal::teste(){

    con->getDataBase().open();
    QSqlTableModel * model = new QSqlTableModel();
    model->setTable("TipLan");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();
    model->setHeaderData(0, Qt::Horizontal, tr("CodTip"));
    model->setHeaderData(1, Qt::Horizontal, tr("DesTip"));
    model->setHeaderData(2, Qt::Horizontal, tr("NatTip"));

    ui->tableView->setModel(model);
}
