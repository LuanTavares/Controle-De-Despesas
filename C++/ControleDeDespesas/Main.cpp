#include <QtWidgets>
#include "TipoLancamentoDAO.h"

int main(int argc,char* argv[]) {

    QApplication * app = new QApplication(argc,argv);

    TipoLancamentoDAO * teste = new TipoLancamentoDAO();
    //TipoLancamento * lan = new TipoLancamento("DesTeste2","NatTeste2",3);
    //teste->insereTipoLancamento(*lan);
    //teste->atualizaTipoLancamento(*lan);
    //teste->deletaTipoLancamento(*lan);
    QList <TipoLancamento> lista = teste->getTiposLancamento();
    for (int i = 0; i < lista.size(); ++i) {
        TipoLancamento lan  = lista.at(i);
        std::cout << lan.getCodTip() << " " << lan.getDesTip().toStdString() << " " << lan.getNatTip().toStdString() << std::endl;
    }
    app->exec();
}
