/*
 * Despesa.h
 *
 *  Created on: 17 de fev de 2019
 *      Author: lucas
 */
#include <string>


#ifndef DESPESA_H_
#define DESPESA_H_


using std::string;
class Despesa {
public:
	Despesa(string tipoDeDespesa, double valor);

	string getTipoDeDespesa();
	double getValor();

	void setTipoDeDespesa(string tipoDeDespesa);
	void setValor(double valor);

	virtual ~Despesa();
private:
	string tipoDeDespesa;
	double valor;
};

#endif /* DESPESA_H_ */
