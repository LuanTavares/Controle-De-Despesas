/********************************************************************************
** Form generated from reading UI file 'CadastroLancamento.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTROLANCAMENTO_H
#define UI_CADASTROLANCAMENTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_CadastroLancamento
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *labelTipo;
    QLabel *labelData;
    QLabel *labelQtdParcelas;
    QLabel *labelVlrParcelas;
    QLabel *labelObs;
    QComboBox *comboBoxTipoDeLancamento;
    QDateEdit *dateEditDataLancamento;
    QDoubleSpinBox *doubleSpinBoxVlrParcela;
    QSpinBox *spinBoxQtdParcelas;
    QTextEdit *textEditObs;

    void setupUi(QDialog *CadastroLancamento)
    {
        if (CadastroLancamento->objectName().isEmpty())
            CadastroLancamento->setObjectName(QStringLiteral("CadastroLancamento"));
        CadastroLancamento->resize(240, 320);
        buttonBox = new QDialogButtonBox(CadastroLancamento);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(10, 270, 221, 41));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);
        buttonBox->setCenterButtons(true);
        labelTipo = new QLabel(CadastroLancamento);
        labelTipo->setObjectName(QStringLiteral("labelTipo"));
        labelTipo->setGeometry(QRect(10, 10, 91, 16));
        labelData = new QLabel(CadastroLancamento);
        labelData->setObjectName(QStringLiteral("labelData"));
        labelData->setGeometry(QRect(10, 40, 111, 16));
        labelQtdParcelas = new QLabel(CadastroLancamento);
        labelQtdParcelas->setObjectName(QStringLiteral("labelQtdParcelas"));
        labelQtdParcelas->setGeometry(QRect(10, 70, 121, 16));
        labelVlrParcelas = new QLabel(CadastroLancamento);
        labelVlrParcelas->setObjectName(QStringLiteral("labelVlrParcelas"));
        labelVlrParcelas->setGeometry(QRect(10, 100, 81, 16));
        labelObs = new QLabel(CadastroLancamento);
        labelObs->setObjectName(QStringLiteral("labelObs"));
        labelObs->setGeometry(QRect(10, 130, 61, 16));
        comboBoxTipoDeLancamento = new QComboBox(CadastroLancamento);
        comboBoxTipoDeLancamento->setObjectName(QStringLiteral("comboBoxTipoDeLancamento"));
        comboBoxTipoDeLancamento->setGeometry(QRect(100, 10, 131, 21));
        dateEditDataLancamento = new QDateEdit(CadastroLancamento);
        dateEditDataLancamento->setObjectName(QStringLiteral("dateEditDataLancamento"));
        dateEditDataLancamento->setGeometry(QRect(120, 40, 110, 22));
        doubleSpinBoxVlrParcela = new QDoubleSpinBox(CadastroLancamento);
        doubleSpinBoxVlrParcela->setObjectName(QStringLiteral("doubleSpinBoxVlrParcela"));
        doubleSpinBoxVlrParcela->setGeometry(QRect(100, 100, 62, 22));
        doubleSpinBoxVlrParcela->setDecimals(2);
        doubleSpinBoxVlrParcela->setMaximum(9999.99);
        doubleSpinBoxVlrParcela->setSingleStep(1);
        spinBoxQtdParcelas = new QSpinBox(CadastroLancamento);
        spinBoxQtdParcelas->setObjectName(QStringLiteral("spinBoxQtdParcelas"));
        spinBoxQtdParcelas->setGeometry(QRect(130, 70, 51, 22));
        textEditObs = new QTextEdit(CadastroLancamento);
        textEditObs->setObjectName(QStringLiteral("textEditObs"));
        textEditObs->setGeometry(QRect(10, 150, 221, 111));

        retranslateUi(CadastroLancamento);
        QObject::connect(buttonBox, SIGNAL(accepted()), CadastroLancamento, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CadastroLancamento, SLOT(reject()));

        QMetaObject::connectSlotsByName(CadastroLancamento);
    } // setupUi

    void retranslateUi(QDialog *CadastroLancamento)
    {
        CadastroLancamento->setWindowTitle(QApplication::translate("CadastroLancamento", "Dialog", 0));
        labelTipo->setText(QApplication::translate("CadastroLancamento", "Tipo Lancamento:", 0));
        labelData->setText(QApplication::translate("CadastroLancamento", "Data do Lancamento:", 0));
        labelQtdParcelas->setText(QApplication::translate("CadastroLancamento", "Quantidade De Parcelas:", 0));
        labelVlrParcelas->setText(QApplication::translate("CadastroLancamento", "Valor da Parcela:", 0));
        labelObs->setText(QApplication::translate("CadastroLancamento", "Observa\303\247\303\243o:", 0));
    } // retranslateUi

};

namespace Ui {
    class CadastroLancamento: public Ui_CadastroLancamento {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTROLANCAMENTO_H
