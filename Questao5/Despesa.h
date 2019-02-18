/*
 * Despesa.h
 *
 *  Created on: 18 de fev de 2019
 *      Author: lucas
 */
#include <string>


#ifndef DESPESA_H_
#define DESPESA_H_

using std::string;

class Despesa {
public:
	Despesa(double valor, string tipoDeGasto);

	double getValor();
	void setValor(double valor);

	string getTipoDeGasto();
	void setTipoDeGasto(string tipoDeGasto);

	virtual ~Despesa();

private:
	double valor;
	string tipoDeGasto;
};

#endif /* DESPESA_H_ */
