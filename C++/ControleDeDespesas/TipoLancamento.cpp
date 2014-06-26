#include "TipoLancamento.h"

TipoLancamento::TipoLancamento() {

}

TipoLancamento::TipoLancamento(int CodTip, QString DesTip, QString NatTip) {
    this->DesTip = DesTip;
    this->NatTip = NatTip;
    this->CodTip = CodTip;
}

TipoLancamento::~TipoLancamento() {

}

void TipoLancamento::setDesTip(QString DesTip) {
    this->DesTip = DesTip;
}

void TipoLancamento::setNatTip(QString NatTip) {
    this->NatTip = NatTip;
}

void TipoLancamento::setCodTip(int CodTip) {
    this->CodTip = CodTip;
}

QString TipoLancamento::getDesTip() {
    return this->DesTip;
}

QString TipoLancamento::getNatTip() {
    return this->NatTip;
}

int TipoLancamento::getCodTip() {
    return this->CodTip;
}
