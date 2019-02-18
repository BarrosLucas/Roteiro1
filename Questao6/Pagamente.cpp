/*
 * Pagamente.cpp
 *
 *  Created on: 18 de fev de 2019
 *      Author: lucas
 */

#include "Pagamente.h"

Pagamente::Pagamente(double valorPagamento, string nomeDoFuncionario) {
	// TODO Auto-generated constructor stub

	setValorPagamento(valorPagamento);
	setNomeDoFuncionario(nomeDoFuncionario);
}


double Pagamente::getValorPagamento(){
	return this->valorPagamento;
}
string Pagamente::getNomeDoFuncionario(){
	return this->nomeDoFuncionario;
}

void Pagamente::setValorPagamento(double valorPagamento){
	this->valorPagamento = valorPagamento;
}
void Pagamente::setNomeDoFuncionario(string nomeDoFuncionario){
	this->nomeDoFuncionario = nomeDoFuncionario;
}

Pagamente::~Pagamente() {
	// TODO Auto-generated destructor stub
}

