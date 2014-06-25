#include "Lancamento.h"

Lancamento::Lancamento() {

}

Lancamento::Lancamento(int CodLan, TipoLancamento * TipLan,QDate * DatLan, int NumPar, QString ObsLan) {
    this->CodLan = CodLan;
    this->TipLan = TipLan;
    this->DatLan = DatLan;
    this->NumPar = NumPar;
    this->ObsLan = ObsLan;
}

Lancamento::~Lancamento() {
    delete TipLan;
    delete DatLan;
}

void Lancamento::setCodLan(int CodLan) {
    this->CodLan = CodLan;
}

void Lancamento::setTipLan(TipoLancamento * TipLan) {
    this->TipLan = TipLan;
}

void Lancamento::setDatLan(QDate * DatLan) {
    this->DatLan = DatLan;
}

void Lancamento::setNumPar(int NumPar) {
    this->NumPar = NumPar;
}

void Lancamento::setObsLan(QString ObsLan) {
    this->ObsLan = ObsLan;
}

int Lancamento::getCodLan() {
    return this->CodLan;
}

TipoLancamento * Lancamento::getTipLan() {
    return this->TipLan;
}

QDate * Lancamento::getDatLan() {
    return this->DatLan;
}

int Lancamento::getNumPar() {
    return this->NumPar;
}

QString Lancamento::getObsLan() {
    return this->ObsLan;
}
