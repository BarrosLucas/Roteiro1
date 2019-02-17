/*
 * Empregado.cpp
 *
 *  Created on: 17 de fev de 2019
 *      Author: lucas
 */

#include "Empregado.h"

Empregado::Empregado(string nome, string sobrenome, double salario) {
	// TODO Auto-generated constructor stub
	setNome(nome);
	setSobrenome(sobrenome);
	setSalario(salario);
}

string Empregado::getNome(){
	return this-> nome;
}
string Empregado::getSobrenome(){
	return this-> sobrenome;
}
double Empregado::getSalario(){
	return this-> salario;
}

void Empregado::setNome(string nome){
	this-> nome = nome;
}
void Empregado::setSobrenome(string sobrenome){
	this-> sobrenome = sobrenome;
}
void Empregado::setSalario(double salario){
	if(salario>0){
		this-> salario = salario;
	}else{
		this-> salario = 0;
	}

}
double Empregado::getSalarioAnual(){
	return this->salario*12;
}

Empregado::~Empregado() {
	// TODO Auto-generated destructor stub
}

