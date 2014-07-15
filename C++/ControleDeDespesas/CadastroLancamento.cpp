#include "CadastroLancamento.h"
#include "ui_CadastroLancamento.h"

CadastroLancamento::CadastroLancamento(Conexao *connection, QWidget *parent) : QDialog(parent), ui(new Ui::CadastroLancamento) {
    ui->setupUi(this);
    conn = connection;
    TipoLancamentoDAO * dialogTipoLancamento = new TipoLancamentoDAO(conn);
    listTipos = dialogTipoLancamento->getTiposLancamento();
    for (int i = 0; i < listTipos.size(); ++i) {
        TipoLancamento dialogTipo = listTipos.at(i);
        listNomeTipos.insert(i,dialogTipo.getDesTip());
    }
    ui->comboBoxTipoDeLancamento->addItems(listNomeTipos);
    this->setWindowFlags(Qt::WindowStaysOnTopHint);
    connect(ui->buttonBox,SIGNAL(accepted()),this,SLOT(gravaLancamento()));
}

CadastroLancamento::~CadastroLancamento() {
    delete ui;
}

void CadastroLancamento::gravaLancamento() {
    QDate dialog = ui->dateEditDataLancamento->date();
    for (int i = 1; i <= ui->spinBoxQtdParcelas->value(); ++i) {
        TipoLancamento dialogTipo = listTipos.at(ui->comboBoxTipoDeLancamento->currentIndex());
        Lancamento * dialogLancamento = new Lancamento(0,
                                            &dialogTipo,
                                            dialog,
                                            i,
                                            ui->doubleSpinBoxVlrParcela->value(),
                                            ui->textEditObs->toPlainText());
        LancamentoDAO * dialogLancamentoDAO = new LancamentoDAO(conn);
        dialogLancamentoDAO->insereLancamento(*dialogLancamento);
        dialog = dialog.addMonths(1);
    }
}
