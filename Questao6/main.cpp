/*
 * main.cpp
 *
 *  Created on: 18 de fev de 2019
 *      Author: lucas
 */
#include <iostream>
#include <vector>
#include "Pagamente.h"
#include "ControleDePagamentos.h"


using namespace std;

void setValues(double *valor, string *tipoDeDespesa);
void setValues(string *tipoDeDespesa);

int main(){
	vector<Pagamente> despesas;

	int input = 1;

	double valor;
	string pessoa;

	ControleDePagamentos *controle = new ControleDePagamentos();

	while(input == 1){
		cout << "==NOVA DESPESA=="<<endl;
		setValues(&valor,&pessoa);

		Pagamente *despesa = new Pagamente(valor,pessoa);
		despesas.push_back(*despesa);

		controle->setPagamentos(despesas);
		cout << "Deseja continuar? \n1 - Sim\nOutra tecla - Não\nEscolha: ";
		cin >> input;

		delete despesa;

	}
	cout << "Total de Despesas: " << controle->calculaTotalDePagamentos() << endl;

	cout << "Deseja conferir alguma pessoa? \n1 - Sim\nOutra tecla - Não\nEscolha: ";
	cin >> input;

	if(input == 1){
		setValues(&pessoa);
		cout << ((controle->exitePagamentoParaFuncionario(pessoa))? "Existe pagamentos para essa pessoa": "Não existe pagamentos para essa pessoa") << endl;

	}

	cout <<"\nValor total: R$ "<<controle->calculaTotalDePagamentos()<<endl;


	delete controle;

	cout <<"==FIIMMMMMMMMMMMMMMM"<<endl;

}
void setValues(double *valor, string *tipoDeDespesa){
	cin.clear();
	fflush(stdin);

	cout << "Valor: R$ ";
	cin >> *valor;

	cin.clear();
	fflush(stdin);

	cout << "Nome da Pessoa: ";
	getline(cin,*tipoDeDespesa);

	cin.clear();
	fflush(stdin);
}
void setValues(string *tipoDeDespesa){
	cin.clear();
	fflush(stdin);

	cout << "Nome da Pessoa: ";
	getline(cin,*tipoDeDespesa);

	cin.clear();
	fflush(stdin);
}
