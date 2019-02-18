/*
 * ControleDeGastos.h
 *
 *  Created on: 18 de fev de 2019
 *      Author: lucas
 */
#include <vector>
#include "Despesa.h"


#ifndef CONTROLEDEGASTOS_H_
#define CONTROLEDEGASTOS_H_

using std::vector;

class ControleDeGastos {
public:
	ControleDeGastos();
	double calculaTotalDespesas();
	void setDespesas(std::vector<Despesa> despesas);
	bool existeDespesaDoTipo(string tipoDeDespesa);
	virtual ~ControleDeGastos();
private:
	std::vector<Despesa> despesas;
};

#endif /* CONTROLEDEGASTOS_H_ */
