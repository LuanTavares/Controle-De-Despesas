#include "Principal.h"
#include "ui_Principal.h"

Principal::Principal(QWidget *parent) : QMainWindow(parent), ui(new Ui::Principal) {
    ui->setupUi(this);
    connect(ui->actionLancamento,SIGNAL(triggered()),this,SLOT(cadastraLancamento()));
    connect(ui->actionTipo,SIGNAL(triggered()),this,SLOT(cadastraTipoLancamento()));
    connect(ui->tabWidgetMeses,SIGNAL(currentChanged(int)),this,SLOT(alimentaTabelas(int)));
    connect(ui->actionGastos_com_Alimenta_o,SIGNAL(triggered()),this,SLOT(listaRelatorioAlimentacao()));
    programa = new QString("C://Luan//Programas//openrpt-3.3.0//RPTrender.exe");
    //programa = new QString("openrpt-3.3.0//RPTrender.exe");
    parametros = new QStringList;
    //parametros->append("-databaseURL=odbc:sqlserver://localhost");
    parametros->append("-databaseURL=odbc:mysql://127.0.0.1/controlededespesa:3306");
    parametros->append("-username=root");
    parametros->append("-passwd=luantavares");
    parametros->append("-PrintPreview");
    parametros->append("-close");
    parametros->append("C://Luan//Projetos//Controle-De-Despesas//C++//ControleDeDespesas//Relatorios//Alimentacao.xml");
    processo = new QProcess(this);

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
    mes++;
    switch (mes) {
    case 1:
        atualizaTabela(ui->tableViewJaneiro,ui->lineEditSaldoMesJaneiro,mes);
        break;
    case 2:
        atualizaTabela(ui->tableViewFevereiro,ui->lineEditSaldoMesFevereiro,mes);
        break;
    case 3:
        atualizaTabela(ui->tableViewMarco,ui->lineEditSaldoMesMarco,mes);
        break;
    case 4:
        atualizaTabela(ui->tableViewAbril,ui->lineEditSaldoMesAbril,mes);
        break;
    case 5:
        atualizaTabela(ui->tableViewMaio,ui->lineEditSaldoMesMaio,mes);
        break;
    case 6:
        atualizaTabela(ui->tableViewJunho,ui->lineEditSaldoMesJunho,mes);
        break;
    case 7:
        atualizaTabela(ui->tableViewJulho,ui->lineEditSaldoMesJulho,mes);
        break;
    case 8:
        atualizaTabela(ui->tableViewAgosto,ui->lineEditSaldoMesAgosto,mes);
        break;
    case 9:
        atualizaTabela(ui->tableViewSetembro,ui->lineEditSaldoMesSetembro,mes);
        break;
    case 10:
        atualizaTabela(ui->tableViewOutubro,ui->lineEditSaldoMesOutubro,mes);
        break;
    case 11:
        atualizaTabela(ui->tableViewNovembro,ui->lineEditSaldoMesNovembro,mes);
        break;
    case 12:
        atualizaTabela(ui->tableViewDezembro,ui->lineEditSaldoMesDezembro,mes);
        break;
    default:
        break;
    }
}

void Principal::atualizaTabela(QTableView *tableMes,QLineEdit *lineMes, int mesSelecionado) {
    QDate DatRef = ui->dateEditAnoRef->date();
    QDate iniDatLan;
    iniDatLan.setDate(DatRef.year(),mesSelecionado,1);
    QDate fimDatLan;
    fimDatLan.setDate(iniDatLan.year(),iniDatLan.month(),iniDatLan.daysInMonth());
    LancamentoDAO dialogDAO(con);
    lineMes->setText(QString::number((dialogDAO.getProventos(iniDatLan,fimDatLan))-(dialogDAO.getDespesas(iniDatLan,fimDatLan))));
    tableMes->setModel(dialogDAO.get(iniDatLan,fimDatLan));
    update();
}

void Principal::listaRelatorioAlimentacao() {
  /*  QSqlDatabase db;
    db = databaseFromURL( databaseURL );
    if (!db.isValid()){

    }*/
    processo->start(*programa, *parametros);
    /*if(!processo->waitForStarted())
        std::cout << "Não Abriu" << std::endl;*/
}
