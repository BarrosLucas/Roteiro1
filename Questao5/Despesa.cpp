/*
 * Despesa.cpp
 *
 *  Created on: 17 de fev de 2019
 *      Author: lucas
 */

#include "Despesa.h"
#include "ControleDeGastos.h"

Despesa::Despesa(string tipoDeDespesa, double valor) {
	// TODO Auto-generated constructor stub
	Despesa::setTipoDeDespesa(tipoDeDespesa);
	Despesa::setValor(valor);
	ControleDeGastos::despesas.push_back(*this);
}


string Despesa::getTipoDeDespesa(){
	return this->tipoDeDespesa;
}
double Despesa::getValor(){
	return this->valor;
}

void Despesa::setTipoDeDespesa(string tipoDeDespesa){
	this->tipoDeDespesa = tipoDeDespesa;
}
void Despesa::setValor(double valor){
	this->valor = valor;
}

Despesa::~Despesa() {
	// TODO Auto-generated destructor stub
}

