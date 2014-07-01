#include "CadastroTipoLancamento.h"
#include "ui_CadastroTipoLancamento.h"

CadastroTipoLancamento::CadastroTipoLancamento(Conexao *connection, QWidget *parent) : QDialog(parent), ui(new Ui::CadastroTipoLancamento) {
    ui->setupUi(this);
    this->conn = connection;
    connect(ui->buttonBox,SIGNAL(accepted()),this,SLOT(gravaTipoLancamento()));
}

CadastroTipoLancamento::~CadastroTipoLancamento() {
    delete ui;
}

void CadastroTipoLancamento::gravaTipoLancamento() {
    TipoLancamento * dialogTipoLancamento = new TipoLancamento(0,ui->lineEditDescricao->text(),ui->lineEditNatureza->text());
    TipoLancamentoDAO * dialogTipoLancamentoDAO = new TipoLancamentoDAO(conn);
    dialogTipoLancamentoDAO->insereTipoLancamento(*dialogTipoLancamento);
}
