/*
 * Pessoa.h
 *
 *  Created on: 17 de fev de 2019
 *      Author: lucas
 */
#include <string>

#ifndef PESSOA_H_
#define PESSOA_H_

using std::string;

class Pessoa {
public:
	Pessoa(string nome, int idade, string telefone);
	Pessoa(string nome);

	string getNome();
	int getIdade();
	string getTelefone();

	void setNome(string nome);
	void setIdade(int idade);
	void setTelefone(string telefone);

	virtual ~Pessoa();
private:
	string nome;
	int idade;
	string telefone;
};

#endif /* PESSOA_H_ */
