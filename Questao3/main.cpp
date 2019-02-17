#include <iostream>
#include <time.h>
#include "Empregado.h"

using namespace std;

void setValues(string *nome, string *sobrenome, double *salario);

int main(){
	string nome, sobrenome;
	double salario;

	cout << "Funcionario 1: " << endl;
	setValues(&nome,&sobrenome,&salario);
	Empregado *empregado1 = new Empregado(nome, sobrenome, salario);


	cout << "\n\nFuncionario 2: " << endl;
	setValues(&nome,&sobrenome,&salario);
	Empregado *empregado2 = new Empregado(nome,sobrenome,salario);



	cout << "\n\nSalario Anual de " << empregado1->getNome() << " " << empregado1->getSobrenome()
			<< ": R$ " << empregado1->getSalario() << "\nAumentando 10% do salario...";


	cout << "\n";

	long time = clock();
	int total = 0;
	while (total < 5){
		while((clock()-time)<1000){}
		time = clock();
		total++;
	}

	empregado1->setSalario(empregado1->getSalario()*1.1);
	cout << "\nNovo Salario Anual de " << empregado1->getNome() << " " << empregado1->getSobrenome()
				<< ": R$ " << empregado1->getSalario()<<endl;

	cout << "\n";
	time = clock();
	total = 0;
	while (total < 5){
		while((clock()-time)<1000){}
		time = clock();
		total++;
	}


	cout << "Salario Anual de " << empregado2->getNome() << " " << empregado2->getSobrenome()
				<< ": R$ " << empregado2->getSalario()<< "\nAumentando 10% do salario...";


	cout << "\n";
	time = clock();
	total = 0;
	while (total < 5){
		while((clock()-time)<1000){}
		time = clock();
		total++;
	}

	empregado2->setSalario(empregado2->getSalario()*1.1);
	cout << "\nNovo Salario Anual de " << empregado2->getNome() << " " << empregado2->getSobrenome()
				<< ": R$ " << empregado2->getSalario()<<endl;


	return 0;

}

void setValues(string *nome, string *sobrenome, double *salario){
	cin.clear();
	fflush(stdin);

	cout << "Nome: ";
	getline(cin,*nome);

	cin.clear();
	fflush(stdin);

	cout << "Sobrenome: ";
	getline(cin,*sobrenome);

	cin.clear();
	fflush(stdin);

	cout << "Salario: R$";
	cin >> *salario;
}
