/*
 * ControleDeGastos.cpp
 *
 *  Created on: 17 de fev de 2019
 *      Author: lucas
 */

#include "ControleDeGastos.h"

ControleDeGastos::ControleDeGastos() {
	// TODO Auto-generated constructor stub

}



void ControleDeGastos::setDespesas(std::vector<Despesa> despesas){
	this->despesas=despesas;
}

double ControleDeGastos::calculaTotalDespesas(){
	double total = 0;
	for(Despesa despesa: despesas){
		total += despesa.getValor();
	}
	return total;
}

bool ControleDeGastos::existeDespesaDoTipo(string tipoDeGasto){
	for(Despesa despesa: despesas){
		if(despesa.getTipoDeDespesa() == tipoDeGasto){
			return true;
		}
	}
	return false;
}

ControleDeGastos::~ControleDeGastos() {
	// TODO Auto-generated destructor stub
}

