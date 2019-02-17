#include <iostream>
#include <time.h>
#include <ctime>
#include "Data.h"

using namespace std;
int main (int argc, char *argv[]){

	int dia,mes,ano;


	time_t t = std::time(0);   // get time now
	tm* now = std::localtime(&t);

	dia = now->tm_mday;
	mes = now->tm_mon+1;
	ano = now->tm_year+1900;

	Data *data = new Data(dia,mes,ano);

	cout << "Neste mundo o tempo passa rápido..." << endl;

	cout << "Data: " << data->getDia() << "/" << data->getMes() << "/" << data->getAno()<<endl;

	int tempo = clock();

	while(1){
		while(clock() - tempo < 1000){}
		data->avancarDia();
		cout << "Data: " << data->getDia()<<"/"<<data->getMes()<<"/"<<data->getAno() << endl;
		tempo = clock();
	}
	return 0;
}
