/*
 * ControleDePagamentos.h
 *
 *  Created on: 18 de fev de 2019
 *      Author: lucas
 */
#include <vector>
#include "Pagamente.h"

using std::vector;


#ifndef CONTROLEDEPAGAMENTOS_H_
#define CONTROLEDEPAGAMENTOS_H_

class ControleDePagamentos {
public:
	ControleDePagamentos();

	void setPagamentos(std::vector<Pagamente> pagamentos);
	double calculaTotalDePagamentos();
	bool exitePagamentoParaFuncionario(string funcionario);

	virtual ~ControleDePagamentos();

private:
	vector<Pagamente> pagamentos;
};

#endif /* CONTROLEDEPAGAMENTOS_H_ */
