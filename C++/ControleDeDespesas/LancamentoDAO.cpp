#include "LancamentoDAO.h"

LancamentoDAO::LancamentoDAO(Conexao * conn) {
    db = conn->getDataBase();
}

LancamentoDAO::~LancamentoDAO() {

}

QList <Lancamento> LancamentoDAO::getLancamentos() {
    QList <Lancamento> retorno;
    if(db.open()) {
        query = QSqlQuery(db);
        query.prepare("SELECT LanMes.CodLan, TipLan.CodTip, TipLan.DesTip, TipLan.NatTip, "
                      "LanMes.DatLan, LanMes.NumPar, LanMes.VlrPar, LanMes.ObsLan FROM LanMes, TipLan "
                      "WHERE LanMes.TipLan = TipLan.CodTip");
        if(!query.exec()){
            std::cout << query.lastError().text().toStdString() << std::endl;
        } else {
            int i = 0;
            while (query.next()) {
                TipoLancamento dialogTipoLancamento(query.value(1).toInt(), query.value(2).toString(), query.value(3).toString());

                Lancamento dialogLancamento(query.value(0).toInt(), &dialogTipoLancamento, query.value(4).toDate(), query.value(5).toInt(), query.value(6).toDouble(), query.value(7).toString());
                retorno.insert(i,dialogLancamento);
                i++;
            }
        }
        db.close();
    } else {
        std::cout << db.lastError().text().toStdString() << std::endl;
    }
    return retorno;
}

double LancamentoDAO::getDespesas(QDate dataInicio, QDate dataFim) {
    double retorno = 0;
    if(db.open()) {
        query = QSqlQuery(db);
        query.prepare("SELECT SUM(LanMes.VlrPar) SumVlr FROM LanMes, TipLan "
                      "WHERE LanMes.DatLan BETWEEN '"+dataInicio.toString("yyyy/MM/dd")+
                      "' AND '"+dataFim.toString("yyyy/MM/dd")+"' AND TipLan.CodTip = LanMes.TipLan "
                      "AND TipLan.NatTip = 'Despesa'");
        if(!query.exec()){
            std::cout << query.lastError().text().toStdString() << std::endl;
        } else {
            if(query.next())
                retorno = query.value(0).toDouble();
        }
        db.close();
    } else {
        std::cout << db.lastError().text().toStdString() << std::endl;
    }
    return retorno;
}

double LancamentoDAO::getProventos(QDate dataInicio, QDate dataFim) {
    double retorno = 0;
    if(db.open()) {
        query = QSqlQuery(db);
        query.prepare("SELECT SUM(LanMes.VlrPar) SumVlr FROM LanMes, TipLan "
                      "WHERE LanMes.DatLan BETWEEN '"+dataInicio.toString("yyyy/MM/dd")+
                      "' AND '"+dataFim.toString("yyyy/MM/dd")+"' AND TipLan.CodTip = LanMes.TipLan "
                      "AND TipLan.NatTip = 'Provento'");
        if(!query.exec()){
            std::cout << query.lastError().text().toStdString() << std::endl;
        } else {
            if(query.next())
                retorno = query.value(0).toDouble();
        }
        db.close();
    } else {
        std::cout << db.lastError().text().toStdString() << std::endl;
    }
    return retorno;
}

QSqlQueryModel * LancamentoDAO::get(QDate dataInicio, QDate dataFim){
    QSqlQueryModel * model = new QSqlQueryModel();
    if(db.open()) {
        QString tmp = "SELECT TipLan.DesTip, TipLan.NatTip, LanMes.DatLan, LanMes.NumPar, LanMes.VlrPar, LanMes.ObsLan FROM LanMes,TipLan WHERE LanMes.DatLan BETWEEN '"+dataInicio.toString("yyyy/MM/dd")+"' AND '"+dataFim.toString("yyyy/MM/dd")+"' AND LanMes.TipLan = TipLan.CodTip ORDER BY LanMes.DatLan";
        model->setQuery(tmp);
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("Descrição"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("Natureza"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("Data"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("Parcela"));
        model->setHeaderData(4, Qt::Horizontal, QObject::tr("Valor"));
        model->setHeaderData(5, Qt::Horizontal, QObject::tr("Observação"));
    } else {
        std::cout << db.lastError().text().toStdString() << std::endl;
        model = NULL;
    }
    return model;
}

bool LancamentoDAO::insereLancamento(Lancamento lan) {
    if(db.open()) {
        query = QSqlQuery(db);
        query.prepare("INSERT INTO LanMes (TipLan, DatLan, NumPar, VlrPar, ObsLan) VALUES (?,?,?,?,?)");
        query.addBindValue(lan.getTipLan()->getCodTip());
        query.addBindValue(lan.getDatLan());
        query.addBindValue(lan.getNumPar());
        query.addBindValue(lan.getVlrPar());
        query.addBindValue(lan.getObsLan());
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

bool LancamentoDAO::atualizaLancamento(Lancamento lan) {
    if(db.open()) {
        query = QSqlQuery(db);
        query.prepare("UPDATE LanMes SET VlrPar = ?, ObsLan = ? WHERE CodLan = ? AND TipLan = ? AND DatLan = ? AND NumPar = ?");
        query.addBindValue(lan.getVlrPar());
        query.addBindValue(lan.getObsLan());
        query.addBindValue(lan.getCodLan());
        query.addBindValue(lan.getTipLan()->getCodTip());
        query.addBindValue(lan.getDatLan());
        query.addBindValue(lan.getNumPar());
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

bool LancamentoDAO::deletaLancamento(Lancamento lan) {
    if(db.open()) {
        query = QSqlQuery(db);
        query.prepare("DELETE FROM LanMes WHERE CodLan = ? AND TipLan = ? AND DatLan = ? AND NumPar = ?");
        query.addBindValue(lan.getCodLan());
        query.addBindValue(lan.getTipLan()->getCodTip());
        query.addBindValue(lan.getDatLan());
        query.addBindValue(lan.getNumPar());
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
