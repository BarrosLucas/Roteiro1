/*
 * ControleDePagamentos.cpp
 *
 *  Created on: 18 de fev de 2019
 *      Author: lucas
 */

#include "ControleDePagamentos.h"

ControleDePagamentos::ControleDePagamentos() {
	// TODO Auto-generated constructor stub

}

void ControleDePagamentos::setPagamentos(std::vector<Pagamente> pagamentos){
	this->pagamentos = pagamentos;
}
double ControleDePagamentos::calculaTotalDePagamentos(){
	double total = 0;
	for(Pagamente pagamento: this->pagamentos){
		total += pagamento.getValorPagamento();
	}
	return total;
}
bool ControleDePagamentos::exitePagamentoParaFuncionario(string funcionario){
	for(Pagamente pagamento: this->pagamentos){
		if(funcionario==pagamento.getNomeDoFuncionario()){
			return true;
		}
	}
	return false;
}

ControleDePagamentos::~ControleDePagamentos() {
	// TODO Auto-generated destructor stub
}

