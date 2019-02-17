/*
 * Pessoa.cpp
 *
 *  Created on: 17 de fev de 2019
 *      Author: lucas
 */

#include "Pessoa.h"

Pessoa::Pessoa(string nome) {
	// TODO Auto-generated constructor stub
	Pessoa::setNome(nome);
	Pessoa::setIdade(0);
	Pessoa::setTelefone("Não informado");
}
Pessoa::Pessoa(string nome, int idade, string telefone){
	Pessoa::setIdade(idade);
	Pessoa::setNome(nome);
	Pessoa::setTelefone(telefone);
}

string Pessoa::getNome(){
	return this->nome;
}
int Pessoa::getIdade(){
	return this->idade;
}
string Pessoa::getTelefone(){
	return this->telefone;
}

void Pessoa::setNome(string nome){
	this->nome=nome;
}
void Pessoa::setIdade(int idade){
	this->idade=idade;
}
void Pessoa::setTelefone(string telefone){
	this->telefone=telefone;
}

Pessoa::~Pessoa() {
	// TODO Auto-generated destructor stub
}

