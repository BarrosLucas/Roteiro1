/*
 * Pagamente.h
 *
 *  Created on: 18 de fev de 2019
 *      Author: lucas
 */
#include <string>

#ifndef PAGAMENTE_H_
#define PAGAMENTE_H_

using std::string;

class Pagamente {
public:
	Pagamente(double valorPagamento, string nomeDoFuncionario);

	double getValorPagamento();
	string getNomeDoFuncionario();

	void setValorPagamento(double valorPagamento);
	void setNomeDoFuncionario(string nomeDoFuncionario);

	virtual ~Pagamente();

private:
	double valorPagamento;
	string nomeDoFuncionario;
};

#endif /* PAGAMENTE_H_ */
