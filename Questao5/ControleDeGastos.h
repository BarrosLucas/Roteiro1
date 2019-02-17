/*
 * ControleDeGastos.h
 *
 *  Created on: 17 de fev de 2019
 *      Author: lucas
 */
#include <vector>
#include "Despesa.h"

#ifndef CONTROLEDEGASTOS_H_
#define CONTROLEDEGASTOS_H_

class ControleDeGastos {
public:
	ControleDeGastos();

	ControleDeGastos getControleDeGastos();

	void setDespesas(std::vector<Despesa> despesas);
	double calculaTotalDespesas();
	bool existeDespesaDoTipo(string tipoDeGasto);
	std::vector<Despesa> getDespesas();
	static std::vector<Despesa> despesas;

	virtual ~ControleDeGastos();

private:

};
std::vector<Despesa> ControleDeGastos::despesas;
#endif /* CONTROLEDEGASTOS_H_ */
