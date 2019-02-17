/*
 * Invoice.cpp
 *
 *  Created on: 17 de fev de 2019
 *      Author: lucas
 */

#include "Invoice.h"

Invoice::Invoice(int numero,string descricao,int quantidade, double preco) {
	// TODO Auto-generated constructor stub
	Invoice::setNumero(numero);
	Invoice::setDescricao(descricao);
	Invoice::setQuantidade(quantidade);
	Invoice::setPreco(preco);
}


int Invoice::getNumero(){
	return Invoice::numero;
}
string Invoice::getDescricao(){
	return Invoice::descricao;
}
int Invoice::getQuantidade(){
	return Invoice::quantidade;
}
double Invoice::getPreco(){
	return Invoice::preco;
}

void Invoice::setNumero(int numero){
	Invoice::numero = numero;
}
void Invoice::setDescricao(string descricao){
	Invoice::descricao = descricao;
}
void Invoice::setQuantidade(int quantidade){
	if(quantidade < 0){
		quantidade = 0;
	}
	Invoice::quantidade = quantidade;
}
void Invoice::setPreco(double preco){
	if(preco<0){
		preco = 0.0;
	}
	Invoice::preco=preco;
}

double Invoice::getInvoiceAmount(){
	return Invoice::getPreco()*Invoice::getQuantidade();
}

Invoice::~Invoice() {
	// TODO Auto-generated destructor stub
}

