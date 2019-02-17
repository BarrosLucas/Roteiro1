/*
 * Empregado.h
 *
 *  Created on: 17 de fev de 2019
 *      Author: lucas
 */

#include <string>

#ifndef EMPREGADO_H_
#define EMPREGADO_H_


using std::string;

class Empregado {
public:
	Empregado(string nome, string sobrenome, double salario);

	string getNome();
	string getSobrenome();
	double getSalario();
	double getSalarioAnual();

	void setNome(string nome);
	void setSobrenome(string sobrenome);
	void setSalario(double salario);

	virtual ~Empregado();

private:
	string nome;
	string sobrenome;
	double salario;
};

#endif /* EMPREGADO_H_ */
