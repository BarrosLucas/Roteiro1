#include <iostream>
#include <string>
#include "Pessoa.h"
/*
 * main.cpp
 *
 *  Created on: 17 de fev de 2019
 *      Author: lucas
 */
using namespace std;

void setValues(string *nome);
void setValues(string *nome, int *idade, string *telefone);
int main(){
	//Pessoa *pessoa = new Pessoa
	string nome,telefone;
	int idade;

	cout << "Pessoa 1:" <<endl;
	setValues(&nome,&idade,&telefone);
	Pessoa *pessoa1 = new Pessoa(nome,idade,telefone);

	cout << "\n\nPessoa 2:" <<endl;
	setValues(&nome);
	Pessoa *pessoa2 = new Pessoa(nome);

	cout << "\n\nDados de Pessoa 1:"<<endl;
	cout << "Nome: " << pessoa1->getNome() << endl;
	cout << "Idade: " << pessoa1->getIdade() << endl;
	cout << "Telefone: " << pessoa1->getTelefone() << endl;

	cout << "\n\nDados de Pessoa 2:"<<endl;
	cout << "Nome: " << pessoa2->getNome() << endl;
	cout << "Idade: " << pessoa2->getIdade() << endl;
	cout << "Telefone: " << pessoa2->getTelefone() << endl;

	return 0;
}
void setValues(string *nome){
	cin.clear();
	fflush(stdin);

	cout << "\nNome: ";
	getline(cin,*nome);
}
void setValues(string *nome, int *idade, string *telefone){
	cin.clear();
	fflush(stdin);

	cout << "\nNome: ";
	getline(cin,*nome);

	cin.clear();
	fflush(stdin);

	cout << "Idade: ";
	cin >> *idade;

	cin.clear();
	fflush(stdin);

	cout << "Telefone: ";
	getline(cin,*telefone);
}
