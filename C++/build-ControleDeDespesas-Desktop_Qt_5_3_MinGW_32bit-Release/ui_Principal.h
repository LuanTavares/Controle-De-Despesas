/********************************************************************************
** Form generated from reading UI file 'Principal.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINCIPAL_H
#define UI_PRINCIPAL_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Principal
{
public:
    QAction *actionTipo;
    QAction *actionLancamento;
    QAction *actionGastos_com_Alimenta_o;
    QWidget *centralwidget;
    QTabWidget *tabWidgetMeses;
    QWidget *tabJaneiro;
    QTableView *tableViewJaneiro;
    QLabel *labelSaldoMesJaneiro;
    QLineEdit *lineEditSaldoMesJaneiro;
    QWidget *tabFevereiro;
    QTableView *tableViewFevereiro;
    QLabel *labelSaldoMesFevereiro;
    QLineEdit *lineEditSaldoMesFevereiro;
    QWidget *tabMarco;
    QTableView *tableViewMarco;
    QLabel *labelSaldoMesMarco;
    QLineEdit *lineEditSaldoMesMarco;
    QWidget *tabAbril;
    QTableView *tableViewAbril;
    QLabel *labelSaldoMesAbril;
    QLineEdit *lineEditSaldoMesAbril;
    QWidget *tabMaio;
    QTableView *tableViewMaio;
    QLabel *labelSaldoMesMaio;
    QLineEdit *lineEditSaldoMesMaio;
    QWidget *tabJunho;
    QTableView *tableViewJunho;
    QLabel *labelSaldoMesJunho;
    QLineEdit *lineEditSaldoMesJunho;
    QWidget *tabJulho;
    QTableView *tableViewJulho;
    QLabel *labelSaldoMesJulho;
    QLineEdit *lineEditSaldoMesJulho;
    QWidget *tabAgosto;
    QTableView *tableViewAgosto;
    QLabel *labelSaldoMesAgosto;
    QLineEdit *lineEditSaldoMesAgosto;
    QWidget *tabSetembro;
    QTableView *tableViewSetembro;
    QLabel *labelSaldoMesSetembro;
    QLineEdit *lineEditSaldoMesSetembro;
    QWidget *tabOutubro;
    QTableView *tableViewOutubro;
    QLabel *labelSaldoMesOutubro;
    QLineEdit *lineEditSaldoMesOutubro;
    QWidget *tabNovembro;
    QTableView *tableViewNovembro;
    QLabel *labelSaldoMesNovembro;
    QLineEdit *lineEditSaldoMesNovembro;
    QWidget *tabDezembro;
    QTableView *tableViewDezembro;
    QLabel *labelSaldoMesDezembro;
    QLineEdit *lineEditSaldoMesDezembro;
    QLabel *labelAnoRef;
    QDateEdit *dateEditAnoRef;
    QMenuBar *menubar;
    QMenu *menuCadastro;
    QMenu *menuLancamento;
    QMenu *menuRelat_rios;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Principal)
    {
        if (Principal->objectName().isEmpty())
            Principal->setObjectName(QStringLiteral("Principal"));
        Principal->resize(800, 622);
        actionTipo = new QAction(Principal);
        actionTipo->setObjectName(QStringLiteral("actionTipo"));
        actionLancamento = new QAction(Principal);
        actionLancamento->setObjectName(QStringLiteral("actionLancamento"));
        actionGastos_com_Alimenta_o = new QAction(Principal);
        actionGastos_com_Alimenta_o->setObjectName(QStringLiteral("actionGastos_com_Alimenta_o"));
        centralwidget = new QWidget(Principal);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidgetMeses = new QTabWidget(centralwidget);
        tabWidgetMeses->setObjectName(QStringLiteral("tabWidgetMeses"));
        tabWidgetMeses->setGeometry(QRect(0, 20, 791, 561));
        tabJaneiro = new QWidget();
        tabJaneiro->setObjectName(QStringLiteral("tabJaneiro"));
        tableViewJaneiro = new QTableView(tabJaneiro);
        tableViewJaneiro->setObjectName(QStringLiteral("tableViewJaneiro"));
        tableViewJaneiro->setGeometry(QRect(10, 10, 761, 491));
        labelSaldoMesJaneiro = new QLabel(tabJaneiro);
        labelSaldoMesJaneiro->setObjectName(QStringLiteral("labelSaldoMesJaneiro"));
        labelSaldoMesJaneiro->setGeometry(QRect(20, 510, 101, 16));
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(12);
        labelSaldoMesJaneiro->setFont(font);
        lineEditSaldoMesJaneiro = new QLineEdit(tabJaneiro);
        lineEditSaldoMesJaneiro->setObjectName(QStringLiteral("lineEditSaldoMesJaneiro"));
        lineEditSaldoMesJaneiro->setEnabled(false);
        lineEditSaldoMesJaneiro->setGeometry(QRect(120, 510, 61, 20));
        tabWidgetMeses->addTab(tabJaneiro, QString());
        tabFevereiro = new QWidget();
        tabFevereiro->setObjectName(QStringLiteral("tabFevereiro"));
        tableViewFevereiro = new QTableView(tabFevereiro);
        tableViewFevereiro->setObjectName(QStringLiteral("tableViewFevereiro"));
        tableViewFevereiro->setGeometry(QRect(10, 10, 761, 491));
        labelSaldoMesFevereiro = new QLabel(tabFevereiro);
        labelSaldoMesFevereiro->setObjectName(QStringLiteral("labelSaldoMesFevereiro"));
        labelSaldoMesFevereiro->setGeometry(QRect(20, 510, 101, 16));
        labelSaldoMesFevereiro->setFont(font);
        lineEditSaldoMesFevereiro = new QLineEdit(tabFevereiro);
        lineEditSaldoMesFevereiro->setObjectName(QStringLiteral("lineEditSaldoMesFevereiro"));
        lineEditSaldoMesFevereiro->setEnabled(false);
        lineEditSaldoMesFevereiro->setGeometry(QRect(120, 510, 61, 20));
        tabWidgetMeses->addTab(tabFevereiro, QString());
        tabMarco = new QWidget();
        tabMarco->setObjectName(QStringLiteral("tabMarco"));
        tableViewMarco = new QTableView(tabMarco);
        tableViewMarco->setObjectName(QStringLiteral("tableViewMarco"));
        tableViewMarco->setGeometry(QRect(10, 10, 761, 491));
        labelSaldoMesMarco = new QLabel(tabMarco);
        labelSaldoMesMarco->setObjectName(QStringLiteral("labelSaldoMesMarco"));
        labelSaldoMesMarco->setGeometry(QRect(20, 510, 101, 16));
        labelSaldoMesMarco->setFont(font);
        lineEditSaldoMesMarco = new QLineEdit(tabMarco);
        lineEditSaldoMesMarco->setObjectName(QStringLiteral("lineEditSaldoMesMarco"));
        lineEditSaldoMesMarco->setEnabled(false);
        lineEditSaldoMesMarco->setGeometry(QRect(120, 510, 61, 20));
        tabWidgetMeses->addTab(tabMarco, QString());
        tabAbril = new QWidget();
        tabAbril->setObjectName(QStringLiteral("tabAbril"));
        tableViewAbril = new QTableView(tabAbril);
        tableViewAbril->setObjectName(QStringLiteral("tableViewAbril"));
        tableViewAbril->setGeometry(QRect(10, 10, 761, 491));
        labelSaldoMesAbril = new QLabel(tabAbril);
        labelSaldoMesAbril->setObjectName(QStringLiteral("labelSaldoMesAbril"));
        labelSaldoMesAbril->setGeometry(QRect(20, 510, 101, 16));
        labelSaldoMesAbril->setFont(font);
        lineEditSaldoMesAbril = new QLineEdit(tabAbril);
        lineEditSaldoMesAbril->setObjectName(QStringLiteral("lineEditSaldoMesAbril"));
        lineEditSaldoMesAbril->setEnabled(false);
        lineEditSaldoMesAbril->setGeometry(QRect(120, 510, 61, 20));
        tabWidgetMeses->addTab(tabAbril, QString());
        tabMaio = new QWidget();
        tabMaio->setObjectName(QStringLiteral("tabMaio"));
        tableViewMaio = new QTableView(tabMaio);
        tableViewMaio->setObjectName(QStringLiteral("tableViewMaio"));
        tableViewMaio->setGeometry(QRect(10, 10, 761, 491));
        labelSaldoMesMaio = new QLabel(tabMaio);
        labelSaldoMesMaio->setObjectName(QStringLiteral("labelSaldoMesMaio"));
        labelSaldoMesMaio->setGeometry(QRect(20, 510, 101, 16));
        labelSaldoMesMaio->setFont(font);
        lineEditSaldoMesMaio = new QLineEdit(tabMaio);
        lineEditSaldoMesMaio->setObjectName(QStringLiteral("lineEditSaldoMesMaio"));
        lineEditSaldoMesMaio->setEnabled(false);
        lineEditSaldoMesMaio->setGeometry(QRect(120, 510, 61, 20));
        tabWidgetMeses->addTab(tabMaio, QString());
        tabJunho = new QWidget();
        tabJunho->setObjectName(QStringLiteral("tabJunho"));
        tableViewJunho = new QTableView(tabJunho);
        tableViewJunho->setObjectName(QStringLiteral("tableViewJunho"));
        tableViewJunho->setGeometry(QRect(10, 10, 761, 491));
        labelSaldoMesJunho = new QLabel(tabJunho);
        labelSaldoMesJunho->setObjectName(QStringLiteral("labelSaldoMesJunho"));
        labelSaldoMesJunho->setGeometry(QRect(20, 510, 101, 16));
        labelSaldoMesJunho->setFont(font);
        lineEditSaldoMesJunho = new QLineEdit(tabJunho);
        lineEditSaldoMesJunho->setObjectName(QStringLiteral("lineEditSaldoMesJunho"));
        lineEditSaldoMesJunho->setEnabled(false);
        lineEditSaldoMesJunho->setGeometry(QRect(120, 510, 61, 20));
        tabWidgetMeses->addTab(tabJunho, QString());
        tabJulho = new QWidget();
        tabJulho->setObjectName(QStringLiteral("tabJulho"));
        tableViewJulho = new QTableView(tabJulho);
        tableViewJulho->setObjectName(QStringLiteral("tableViewJulho"));
        tableViewJulho->setGeometry(QRect(10, 10, 761, 491));
        labelSaldoMesJulho = new QLabel(tabJulho);
        labelSaldoMesJulho->setObjectName(QStringLiteral("labelSaldoMesJulho"));
        labelSaldoMesJulho->setGeometry(QRect(20, 510, 101, 16));
        labelSaldoMesJulho->setFont(font);
        lineEditSaldoMesJulho = new QLineEdit(tabJulho);
        lineEditSaldoMesJulho->setObjectName(QStringLiteral("lineEditSaldoMesJulho"));
        lineEditSaldoMesJulho->setEnabled(false);
        lineEditSaldoMesJulho->setGeometry(QRect(120, 510, 61, 20));
        tabWidgetMeses->addTab(tabJulho, QString());
        tabAgosto = new QWidget();
        tabAgosto->setObjectName(QStringLiteral("tabAgosto"));
        tableViewAgosto = new QTableView(tabAgosto);
        tableViewAgosto->setObjectName(QStringLiteral("tableViewAgosto"));
        tableViewAgosto->setGeometry(QRect(10, 10, 761, 491));
        labelSaldoMesAgosto = new QLabel(tabAgosto);
        labelSaldoMesAgosto->setObjectName(QStringLiteral("labelSaldoMesAgosto"));
        labelSaldoMesAgosto->setGeometry(QRect(20, 510, 101, 16));
        labelSaldoMesAgosto->setFont(font);
        lineEditSaldoMesAgosto = new QLineEdit(tabAgosto);
        lineEditSaldoMesAgosto->setObjectName(QStringLiteral("lineEditSaldoMesAgosto"));
        lineEditSaldoMesAgosto->setEnabled(false);
        lineEditSaldoMesAgosto->setGeometry(QRect(120, 510, 61, 20));
        tabWidgetMeses->addTab(tabAgosto, QString());
        tabSetembro = new QWidget();
        tabSetembro->setObjectName(QStringLiteral("tabSetembro"));
        tableViewSetembro = new QTableView(tabSetembro);
        tableViewSetembro->setObjectName(QStringLiteral("tableViewSetembro"));
        tableViewSetembro->setGeometry(QRect(10, 10, 761, 491));
        labelSaldoMesSetembro = new QLabel(tabSetembro);
        labelSaldoMesSetembro->setObjectName(QStringLiteral("labelSaldoMesSetembro"));
        labelSaldoMesSetembro->setGeometry(QRect(20, 510, 101, 16));
        labelSaldoMesSetembro->setFont(font);
        lineEditSaldoMesSetembro = new QLineEdit(tabSetembro);
        lineEditSaldoMesSetembro->setObjectName(QStringLiteral("lineEditSaldoMesSetembro"));
        lineEditSaldoMesSetembro->setEnabled(false);
        lineEditSaldoMesSetembro->setGeometry(QRect(120, 510, 61, 20));
        tabWidgetMeses->addTab(tabSetembro, QString());
        tabOutubro = new QWidget();
        tabOutubro->setObjectName(QStringLiteral("tabOutubro"));
        tableViewOutubro = new QTableView(tabOutubro);
        tableViewOutubro->setObjectName(QStringLiteral("tableViewOutubro"));
        tableViewOutubro->setGeometry(QRect(10, 10, 761, 491));
        labelSaldoMesOutubro = new QLabel(tabOutubro);
        labelSaldoMesOutubro->setObjectName(QStringLiteral("labelSaldoMesOutubro"));
        labelSaldoMesOutubro->setGeometry(QRect(20, 510, 101, 16));
        labelSaldoMesOutubro->setFont(font);
        lineEditSaldoMesOutubro = new QLineEdit(tabOutubro);
        lineEditSaldoMesOutubro->setObjectName(QStringLiteral("lineEditSaldoMesOutubro"));
        lineEditSaldoMesOutubro->setEnabled(false);
        lineEditSaldoMesOutubro->setGeometry(QRect(120, 510, 61, 20));
        tabWidgetMeses->addTab(tabOutubro, QString());
        tabNovembro = new QWidget();
        tabNovembro->setObjectName(QStringLiteral("tabNovembro"));
        tableViewNovembro = new QTableView(tabNovembro);
        tableViewNovembro->setObjectName(QStringLiteral("tableViewNovembro"));
        tableViewNovembro->setGeometry(QRect(10, 10, 761, 491));
        labelSaldoMesNovembro = new QLabel(tabNovembro);
        labelSaldoMesNovembro->setObjectName(QStringLiteral("labelSaldoMesNovembro"));
        labelSaldoMesNovembro->setGeometry(QRect(20, 510, 101, 16));
        labelSaldoMesNovembro->setFont(font);
        lineEditSaldoMesNovembro = new QLineEdit(tabNovembro);
        lineEditSaldoMesNovembro->setObjectName(QStringLiteral("lineEditSaldoMesNovembro"));
        lineEditSaldoMesNovembro->setEnabled(false);
        lineEditSaldoMesNovembro->setGeometry(QRect(120, 510, 61, 20));
        tabWidgetMeses->addTab(tabNovembro, QString());
        tabDezembro = new QWidget();
        tabDezembro->setObjectName(QStringLiteral("tabDezembro"));
        tableViewDezembro = new QTableView(tabDezembro);
        tableViewDezembro->setObjectName(QStringLiteral("tableViewDezembro"));
        tableViewDezembro->setGeometry(QRect(10, 10, 761, 491));
        labelSaldoMesDezembro = new QLabel(tabDezembro);
        labelSaldoMesDezembro->setObjectName(QStringLiteral("labelSaldoMesDezembro"));
        labelSaldoMesDezembro->setGeometry(QRect(20, 510, 101, 16));
        labelSaldoMesDezembro->setFont(font);
        lineEditSaldoMesDezembro = new QLineEdit(tabDezembro);
        lineEditSaldoMesDezembro->setObjectName(QStringLiteral("lineEditSaldoMesDezembro"));
        lineEditSaldoMesDezembro->setEnabled(false);
        lineEditSaldoMesDezembro->setGeometry(QRect(120, 510, 61, 20));
        tabWidgetMeses->addTab(tabDezembro, QString());
        labelAnoRef = new QLabel(centralwidget);
        labelAnoRef->setObjectName(QStringLiteral("labelAnoRef"));
        labelAnoRef->setGeometry(QRect(10, 0, 61, 21));
        labelAnoRef->setFont(font);
        dateEditAnoRef = new QDateEdit(centralwidget);
        dateEditAnoRef->setObjectName(QStringLiteral("dateEditAnoRef"));
        dateEditAnoRef->setGeometry(QRect(45, 0, 61, 20));
        QFont font1;
        font1.setFamily(QStringLiteral("Times New Roman"));
        font1.setPointSize(10);
        dateEditAnoRef->setFont(font1);
        dateEditAnoRef->setDate(QDate(2015, 1, 1));
        Principal->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Principal);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuCadastro = new QMenu(menubar);
        menuCadastro->setObjectName(QStringLiteral("menuCadastro"));
        menuLancamento = new QMenu(menubar);
        menuLancamento->setObjectName(QStringLiteral("menuLancamento"));
        menuRelat_rios = new QMenu(menubar);
        menuRelat_rios->setObjectName(QStringLiteral("menuRelat_rios"));
        Principal->setMenuBar(menubar);
        statusbar = new QStatusBar(Principal);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Principal->setStatusBar(statusbar);

        menubar->addAction(menuCadastro->menuAction());
        menubar->addAction(menuLancamento->menuAction());
        menubar->addAction(menuRelat_rios->menuAction());
        menuCadastro->addAction(actionTipo);
        menuLancamento->addAction(actionLancamento);
        menuRelat_rios->addAction(actionGastos_com_Alimenta_o);

        retranslateUi(Principal);

        tabWidgetMeses->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Principal);
    } // setupUi

    void retranslateUi(QMainWindow *Principal)
    {
        Principal->setWindowTitle(QApplication::translate("Principal", "Controle de Despesas", 0));
        actionTipo->setText(QApplication::translate("Principal", "Tipo", 0));
        actionLancamento->setText(QApplication::translate("Principal", "Lancamento", 0));
        actionGastos_com_Alimenta_o->setText(QApplication::translate("Principal", "Gastos com Alimenta\303\247\303\243o", 0));
        labelSaldoMesJaneiro->setText(QApplication::translate("Principal", "Saldo do Mes:", 0));
        tabWidgetMeses->setTabText(tabWidgetMeses->indexOf(tabJaneiro), QApplication::translate("Principal", "Janeiro", 0));
        labelSaldoMesFevereiro->setText(QApplication::translate("Principal", "Saldo do Mes:", 0));
        tabWidgetMeses->setTabText(tabWidgetMeses->indexOf(tabFevereiro), QApplication::translate("Principal", "Fevereiro", 0));
        labelSaldoMesMarco->setText(QApplication::translate("Principal", "Saldo do Mes:", 0));
        tabWidgetMeses->setTabText(tabWidgetMeses->indexOf(tabMarco), QApplication::translate("Principal", "Mar\303\247o", 0));
        labelSaldoMesAbril->setText(QApplication::translate("Principal", "Saldo do Mes:", 0));
        tabWidgetMeses->setTabText(tabWidgetMeses->indexOf(tabAbril), QApplication::translate("Principal", "Abril", 0));
        labelSaldoMesMaio->setText(QApplication::translate("Principal", "Saldo do Mes:", 0));
        tabWidgetMeses->setTabText(tabWidgetMeses->indexOf(tabMaio), QApplication::translate("Principal", "Maio", 0));
        labelSaldoMesJunho->setText(QApplication::translate("Principal", "Saldo do Mes:", 0));
        tabWidgetMeses->setTabText(tabWidgetMeses->indexOf(tabJunho), QApplication::translate("Principal", "Junho", 0));
        labelSaldoMesJulho->setText(QApplication::translate("Principal", "Saldo do Mes:", 0));
        tabWidgetMeses->setTabText(tabWidgetMeses->indexOf(tabJulho), QApplication::translate("Principal", "Julho", 0));
        labelSaldoMesAgosto->setText(QApplication::translate("Principal", "Saldo do Mes:", 0));
        tabWidgetMeses->setTabText(tabWidgetMeses->indexOf(tabAgosto), QApplication::translate("Principal", "Agosto", 0));
        labelSaldoMesSetembro->setText(QApplication::translate("Principal", "Saldo do Mes:", 0));
        tabWidgetMeses->setTabText(tabWidgetMeses->indexOf(tabSetembro), QApplication::translate("Principal", "Setembro", 0));
        labelSaldoMesOutubro->setText(QApplication::translate("Principal", "Saldo do Mes:", 0));
        tabWidgetMeses->setTabText(tabWidgetMeses->indexOf(tabOutubro), QApplication::translate("Principal", "Outubro", 0));
        labelSaldoMesNovembro->setText(QApplication::translate("Principal", "Saldo do Mes:", 0));
        tabWidgetMeses->setTabText(tabWidgetMeses->indexOf(tabNovembro), QApplication::translate("Principal", "Novembro", 0));
        labelSaldoMesDezembro->setText(QApplication::translate("Principal", "Saldo do Mes:", 0));
        tabWidgetMeses->setTabText(tabWidgetMeses->indexOf(tabDezembro), QApplication::translate("Principal", "Dezembro", 0));
        labelAnoRef->setText(QApplication::translate("Principal", "Ano:", 0));
        dateEditAnoRef->setDisplayFormat(QApplication::translate("Principal", "yyyy", 0));
        menuCadastro->setTitle(QApplication::translate("Principal", "Cadastro", 0));
        menuLancamento->setTitle(QApplication::translate("Principal", "Lancamento", 0));
        menuRelat_rios->setTitle(QApplication::translate("Principal", "Relat\303\263rios", 0));
    } // retranslateUi

};

namespace Ui {
    class Principal: public Ui_Principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINCIPAL_H
