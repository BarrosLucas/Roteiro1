/*
 * Despesa.cpp
 *
 *  Created on: 18 de fev de 2019
 *      Author: lucas
 */

#include "Despesa.h"

Despesa::Despesa(double valor, string tipoDeGasto) {
	// TODO Auto-generated constructor stub
	setValor(valor);
	setTipoDeGasto(tipoDeGasto);
}

double Despesa::getValor(){
	return this->valor;
}
void Despesa::setValor(double valor){
	this->valor = valor;
}

string Despesa::getTipoDeGasto(){
	return this->tipoDeGasto;
}
void Despesa::setTipoDeGasto(string tipoDeGasto){
	this->tipoDeGasto=tipoDeGasto;
}

Despesa::~Despesa() {
	// TODO Auto-generated destructor stub
}

