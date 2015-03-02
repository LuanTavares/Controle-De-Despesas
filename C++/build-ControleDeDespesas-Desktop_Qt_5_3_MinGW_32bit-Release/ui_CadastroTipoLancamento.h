/********************************************************************************
** Form generated from reading UI file 'CadastroTipoLancamento.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTROTIPOLANCAMENTO_H
#define UI_CADASTROTIPOLANCAMENTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_CadastroTipoLancamento
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *labelDescricao;
    QLineEdit *lineEditDescricao;
    QLabel *labelNatureza;
    QLineEdit *lineEditNatureza;

    void setupUi(QDialog *CadastroTipoLancamento)
    {
        if (CadastroTipoLancamento->objectName().isEmpty())
            CadastroTipoLancamento->setObjectName(QStringLiteral("CadastroTipoLancamento"));
        CadastroTipoLancamento->resize(240, 209);
        buttonBox = new QDialogButtonBox(CadastroTipoLancamento);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(10, 130, 221, 41));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);
        buttonBox->setCenterButtons(true);
        labelDescricao = new QLabel(CadastroTipoLancamento);
        labelDescricao->setObjectName(QStringLiteral("labelDescricao"));
        labelDescricao->setGeometry(QRect(10, 20, 51, 16));
        lineEditDescricao = new QLineEdit(CadastroTipoLancamento);
        lineEditDescricao->setObjectName(QStringLiteral("lineEditDescricao"));
        lineEditDescricao->setGeometry(QRect(60, 20, 161, 20));
        labelNatureza = new QLabel(CadastroTipoLancamento);
        labelNatureza->setObjectName(QStringLiteral("labelNatureza"));
        labelNatureza->setGeometry(QRect(10, 70, 51, 16));
        lineEditNatureza = new QLineEdit(CadastroTipoLancamento);
        lineEditNatureza->setObjectName(QStringLiteral("lineEditNatureza"));
        lineEditNatureza->setGeometry(QRect(60, 70, 161, 20));

        retranslateUi(CadastroTipoLancamento);
        QObject::connect(buttonBox, SIGNAL(accepted()), CadastroTipoLancamento, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CadastroTipoLancamento, SLOT(reject()));

        QMetaObject::connectSlotsByName(CadastroTipoLancamento);
    } // setupUi

    void retranslateUi(QDialog *CadastroTipoLancamento)
    {
        CadastroTipoLancamento->setWindowTitle(QApplication::translate("CadastroTipoLancamento", "Dialog", 0));
        labelDescricao->setText(QApplication::translate("CadastroTipoLancamento", "Descri\303\247\303\243o: ", 0));
        labelNatureza->setText(QApplication::translate("CadastroTipoLancamento", "Natureza: ", 0));
    } // retranslateUi

};

namespace Ui {
    class CadastroTipoLancamento: public Ui_CadastroTipoLancamento {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTROTIPOLANCAMENTO_H
