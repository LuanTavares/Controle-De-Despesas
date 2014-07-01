#include "Principal.h"
#include "ui_Principal.h"

Principal::Principal(QWidget *parent) : QMainWindow(parent), ui(new Ui::Principal) {
    ui->setupUi(this);
    connect(ui->actionLancamento,SIGNAL(triggered()),this,SLOT(cadastraLancamento()));
    connect(ui->actionTipo,SIGNAL(triggered()),this,SLOT(cadastraTipoLancamento()));
    connect(ui->tabWidgetMeses,SIGNAL(currentChanged(int)),this,SLOT(alimentaTabelas(int)));
    con = new Conexao();
    alimentaTabelas(ui->tabWidgetMeses->currentIndex());
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

void Principal::alimentaTabelas(int mes) {
    switch (mes) {
    case 0:
        atualizaTabela(ui->tableViewJaneiro,mes);
        break;
    case 1:
        atualizaTabela(ui->tableViewFevereiro,mes);
        break;
    case 2:
        atualizaTabela(ui->tableViewMarco,mes);
        break;
    case 3:
        atualizaTabela(ui->tableViewAbril,mes);
        break;
    case 4:
        atualizaTabela(ui->tableViewMaio,mes);
        break;
    case 5:
        atualizaTabela(ui->tableViewJunho,mes);
        break;
    case 6:
        atualizaTabela(ui->tableViewJulho,mes);
        break;
    case 7:
        atualizaTabela(ui->tableViewAgosto,mes);
        break;
    case 8:
        atualizaTabela(ui->tableViewSetembro,mes);
        break;
    case 9:
        atualizaTabela(ui->tableViewOutubro,mes);
        break;
    case 10:
        atualizaTabela(ui->tableViewNovembro,mes);
        break;
    case 11:
        atualizaTabela(ui->tableViewDezembro,mes);
        break;
    default:
        break;
    }
}

void Principal::atualizaTabela(QTableView *tableMes, int mesSelecionado) {
    con->getDataBase().open();
    mesSelecionado++;
    QDate DatRef = ui->dateEditAnoRef->date();
    QDate iniDatLan;
    iniDatLan.setDate(DatRef.year(),mesSelecionado,1);
    QDate fimDatLan;
    fimDatLan.setDate(iniDatLan.year(),iniDatLan.month(),iniDatLan.daysInMonth());
    QSqlQueryModel * model = new QSqlQueryModel();
    QString tmp = "SELECT TipLan.DesTip, TipLan.NatTip, LanMes.DatLan, LanMes.NumPar, LanMes.VlrPar, LanMes.ObsLan FROM LanMes,TipLan WHERE LanMes.DatLan BETWEEN '"+iniDatLan.toString("dd/MM/yyyy")+"' AND '"+fimDatLan.toString("dd/MM/yyyy")+"' AND LanMes.TipLan = TipLan.CodTip";
    model->setQuery(tmp);
    model->setHeaderData(0, Qt::Horizontal, tr("Descrição"));
    model->setHeaderData(1, Qt::Horizontal, tr("Natureza"));
    model->setHeaderData(2, Qt::Horizontal, tr("Data"));
    model->setHeaderData(3, Qt::Horizontal, tr("Parcela"));
    model->setHeaderData(4, Qt::Horizontal, tr("Valor"));
    model->setHeaderData(5, Qt::Horizontal, tr("Observação"));
    tableMes->setModel(model);
}
