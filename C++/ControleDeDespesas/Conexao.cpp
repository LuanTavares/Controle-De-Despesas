#include "Conexao.h"
#include <QSqlDriver>

Conexao::Conexao() {
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setDatabaseName("controlededespesa");
    db.setHostName("localhost");
    db.setPort(3306);
    db.setUserName("root");
    db.setPassword("luantavares");
}

QSqlDatabase Conexao::getDataBase(){
    return db;
}
