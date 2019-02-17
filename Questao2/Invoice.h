/*
 * Invoice.h
 *
 *  Created on: 17 de fev de 2019
 *      Author: lucas
 */

#include <string>

#ifndef INVOICE_H_
#define INVOICE_H_

using std::string;

class Invoice {
public:
	Invoice(int numero,string descricao,int quantidade,double preco);

	int getNumero();
	string getDescricao();
	int getQuantidade();
	double getPreco();

	void setNumero(int numero);
	void setDescricao(string descricao);
	void setQuantidade(int quantidade);
	void setPreco(double preco);

	double getInvoiceAmount();

	virtual ~Invoice();
private:
	int numero;
	string descricao;
	int quantidade;
	double preco;
};

#endif /* INVOICE_H_ */
