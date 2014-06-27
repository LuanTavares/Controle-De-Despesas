#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include <QMainWindow>
#include <QTableWidget>
#include <QStringList>
#include <QSqlTableModel>
#include "Conexao.h"

namespace Ui {
class Principal;
}

class Principal : public QMainWindow {
    Q_OBJECT
    
public:
    explicit Principal(QWidget *parent = 0);
    ~Principal();
    
private:
    Ui::Principal *ui;
    Conexao * con;

public slots:
    void teste();
};

#endif // PRINCIPAL_H
