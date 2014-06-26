#include <QtWidgets>
#include "TipoLancamentoDAO.h"
#include "LancamentoDAO.h"

int main(int argc,char* argv[]) {

    QApplication * app = new QApplication(argc,argv);
    Conexao * con = new Conexao();
    TipoLancamentoDAO * teste = new TipoLancamentoDAO(con);
    TipoLancamento * lan = new TipoLancamento(13,"Despesa","Alimentação");
        QDate dat(2014,6,26);
        Lancamento * lanc = new Lancamento(1,lan,dat,1,10,"Almoço");
        LancamentoDAO * landao = new LancamentoDAO(con);
        if (landao->insereLancamento(*lanc)){
            std::cout << "teste" << std::endl;
        }

    //teste->atualizaTipoLancamento(*lan);
    //teste->deletaTipoLancamento(*lan);
    /*
    QList <TipoLancamento> lista = teste->getTiposLancamento();
    for (int i = 0; i < lista.size(); ++i) {
        TipoLancamento lan  = lista.at(i);
        std::cout << lan.getCodTip() << " " << lan.getDesTip().toStdString() << " " << lan.getNatTip().toStdString() << std::endl;
    }
    */

    app->exec();
}
