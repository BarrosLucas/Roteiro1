/*
 * main.cpp
 *
 *  Created on: 18 de fev de 2019
 *      Author: lucas
 */
#include <iostream>
#include <vector>
#include "Despesa.h"
#include "ControleDeGastos.h"


using namespace std;

void setValues(double *valor, string *tipoDeDespesa);
void setValues(string *tipoDeDespesa);

int main(){
	vector<Despesa> despesas;

	int input = 1;

	double valor;
	string tipoDeDespesa;

	ControleDeGastos *controle = new ControleDeGastos();

	while(input == 1){
		cout << "==NOVA DESPESA=="<<endl;
		setValues(&valor,&tipoDeDespesa);

		Despesa *despesa = new Despesa(valor,tipoDeDespesa);
		despesas.push_back(*despesa);

		controle->setDespesas(despesas);
		cout << "Deseja continuar? \n1 - Sim\nOutra tecla - Não\nEscolha: ";
		cin >> input;

	}
	cout << "Total de Despesas: " << controle->calculaTotalDespesas() << endl;

	cout << "Deseja conferir algum tipo de despesa? \n1 - Sim\nOutra tecla - Não\nEscolha: ";
	cin >> input;

	if(input == 1){
		setValues(&tipoDeDespesa);
		cout << ((controle->existeDespesaDoTipo(tipoDeDespesa))? "Existe esse tipo de despesa": "Não existe esse tipo de despesa") << endl;

	}
	cout <<"==FIIMMMMMMMMMMMMMMM"<<endl;

}
void setValues(double *valor, string *tipoDeDespesa){
	cin.clear();
	fflush(stdin);

	cout << "Valor: R$ ";
	cin >> *valor;

	cin.clear();
	fflush(stdin);

	cout << "Tipo de Despesa: ";
	getline(cin,*tipoDeDespesa);

	cin.clear();
	fflush(stdin);
}
void setValues(string *tipoDeDespesa){
	cin.clear();
	fflush(stdin);

	cout << "Tipo de Despesa: ";
	getline(cin,*tipoDeDespesa);

	cin.clear();
	fflush(stdin);
}
