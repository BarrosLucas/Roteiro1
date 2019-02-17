/*
 * main.cpp
 *
 *  Created on: 17 de fev de 2019
 *      Author: lucas
 */
#include <iostream>
#include "Invoice.h"
using namespace std;
int main(int argc, char *argv[]){

	int numero;
	string descricao;
	int quantidade;
	double preco;

	cout << "Numero: ";
	cin >> numero;

	cin.clear();
	fflush(stdin);

	cout << "Descricao: ";
	getline(cin,descricao);

	cout << "Quantidade: ";
	cin >> quantidade;

	cout << "Preço: ";
	cin >> preco;

	Invoice *invoice = new Invoice(numero,descricao,quantidade,preco);

	cout << "\nProduto: " << invoice->getDescricao() << "\nUnidade: R$ " << invoice->getPreco() << "\nQuantidade: "<<invoice->getQuantidade() << "\nTotal: R$ " << invoice->getInvoiceAmount() << endl;



	return 0;
}
