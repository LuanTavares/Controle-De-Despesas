#include "TipoLancamentoDAO.h"

TipoLancamentoDAO::TipoLancamentoDAO(Conexao * conn) {
    db = conn->getDataBase();
}

TipoLancamentoDAO::~TipoLancamentoDAO() {

}

QList <TipoLancamento> TipoLancamentoDAO::getTiposLancamento(){
    QList <TipoLancamento> retorno;
    if(db.open()) {
        query = QSqlQuery(db);
        query.prepare("SELECT CodTip, DesTip, NatTip FROM TipLan ORDER BY DesTip");
        if(!query.exec()){
            std::cout << query.lastError().text().toStdString() << std::endl;
        } else {
            int i = 0;
            while (query.next()) {
                TipoLancamento dialog(query.value(0).toInt(),query.value(1).toString(),query.value(2).toString());
                retorno.insert(i,dialog);
                i++;
            }
        }
        db.close();
    } else {
        std::cout << db.lastError().text().toStdString() << std::endl;
    }
    return retorno;
}

bool TipoLancamentoDAO::insereTipoLancamento(TipoLancamento tipo) {
    if(db.open()) {
        query = QSqlQuery(db);
        query.prepare("INSERT INTO TipLan (DesTip,NatTip) VALUES (?,?)");
        query.addBindValue(tipo.getDesTip());
        query.addBindValue(tipo.getNatTip());
        if(!query.exec()){
            std::cout << query.lastError().text().toStdString() << std::endl;
        }
        db.close();
        return true;
    } else {
        std::cout << db.lastError().text().toStdString() << std::endl;
        return false;
    }
}

bool TipoLancamentoDAO::atualizaTipoLancamento(TipoLancamento tipo) {
    if(db.open()) {
        query = QSqlQuery(db);
        query.prepare("UPDATE TipLan SET DesTip = ?, NatTip = ? WHERE CodTip = ?");
        query.addBindValue(tipo.getDesTip());
        query.addBindValue(tipo.getNatTip());
        query.addBindValue(tipo.getCodTip());
        if(!query.exec()){
            std::cout << query.lastError().text().toStdString() << std::endl;
        }
        db.close();
        return true;
    } else {
        std::cout << db.lastError().text().toStdString() << std::endl;
        return false;
    }
}

bool TipoLancamentoDAO::deletaTipoLancamento(TipoLancamento tipo) {
    if(db.open()) {
        query = QSqlQuery(db);
        query.prepare("DELETE FROM TipLan WHERE CodTip = ?");
        query.addBindValue(tipo.getCodTip());
        if(!query.exec()){
            std::cout << query.lastError().text().toStdString() << std::endl;
        }
        db.close();
        return true;
    } else {
        std::cout << db.lastError().text().toStdString() << std::endl;
        return false;
    }
}
