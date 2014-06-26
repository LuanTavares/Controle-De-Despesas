#include "Conexao.h"

Conexao::Conexao() {
    db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("controlededespesa");
    db.setUserName("sa");
    db.setPassword("C4nn184l@");
}

QSqlDatabase Conexao::getDataBase(){
    return db;
}
