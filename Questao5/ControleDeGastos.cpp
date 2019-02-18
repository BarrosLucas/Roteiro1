/*
 * ControleDeGastos.cpp
 *
 *  Created on: 18 de fev de 2019
 *      Author: lucas
 */

#include "ControleDeGastos.h"
#include "Despesa.h"

ControleDeGastos::ControleDeGastos() {
	// TODO Auto-generated constructor stub

}

double ControleDeGastos::calculaTotalDespesas(){
	double total = 0;
	for(Despesa despesa: this->despesas){
		total += despesa.getValor();
	}
	return total;
}
void ControleDeGastos::setDespesas(std::vector<Despesa> despesas){
	this->despesas = despesas;
}
bool ControleDeGastos::existeDespesaDoTipo(string tipoDeDespesa){
	for(Despesa despesa: this->despesas){
		if(despesa.getTipoDeGasto()==tipoDeDespesa){
			return true;
		}
	}
	return false;
}

ControleDeGastos::~ControleDeGastos() {
	// TODO Auto-generated destructor stub
}

