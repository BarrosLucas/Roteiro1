/*
 * Data.cpp
 *
 *  Created on: 5 de fev de 2019
 *      Author: lucas
 */

#include "Data.h"


Data::Data() {
	// TODO Auto-generated constructor stub

}

Data::Data(int dia, int mes, int ano){
	if(dia>0 && dia<32){
		Data::dia = dia;
	}else{
		Data::dia = 1;
	}

	if(mes>0 && mes<13){
		Data::mes = mes;
	}else{
		Data::mes = 1;
	}

	if(ano>0){
		Data::ano = ano;
	}else{
		Data::ano = 1;
	}
}

void Data::avancarDia(){
	Data::setDia(Data::getDia()+1);
}


void Data::setDia(int dia){
	if(dia > 27){
		//31 dias
		if(Data::getMes()==JANEIRO || Data::getMes()==MARCO || Data::getMes()==MAIO || Data::getMes()==JULHO || Data::getMes()==AGOSTO || Data::getMes()==OUTUBRO || Data::getMes()==DEZEMBRO){
			if(dia<=31){
				Data::dia=dia;
			}else{
				Data::dia=1;
				Data::setMes(Data::getMes()+1);
			}
		}
		//30 dias
		else if(Data::getMes()==ABRIL || Data::getMes()==JUNHO || Data::getMes()==SETEMBRO || Data::getMes()==NOVEMBRO){
			if(dia<=30){
				Data::dia=dia;
			}else{
				Data::dia=1;
				Data::setMes(Data::getMes()+1);
			}
		}
		//FEVEREIRO (28 ou 29 dias)
		else if(Data::getMes()==FEVEREIRO){
			if(Data::getAno()%4==0){
				//29 dias
				if((Data::getAno()%100)!=0){
					if(dia<=29){
						Data::dia=dia;
					}else{
						Data::dia=1;
						Data::setMes(Data::getMes()+1);
					}
				}
				//28 dias
				else{
					if(dia<=28){
						Data::dia=dia;
					}else{
						Data::dia=1;
						Data::setMes(Data::getMes()+1);
					}
				}
			}
			//Não é divisivel por 4
			else{
				//29 dias
				if((Data::getAno()%400)==0){
					if(dia<=29){
						Data::dia=dia;
					}else{
						Data::dia=1;
						Data::setMes(Data::getMes()+1);
					}
				}
				//28 dias
				else{
					if(dia<=28){
						Data::dia=dia;
					}else{
						Data::dia=1;
						Data::setMes(Data::getMes()+1);
					}
				}
			}
		}
	}else if(dia>0 && dia<=27){
		Data::dia=dia;
	}else{
		Data::dia=1;
	}

}


int  Data::getDia(){
	return Data::dia;
}


void Data::setMes(int mes){
	if(mes>0 && mes<=12){
		Data::mes = mes;
	}else{
		Data::mes = 1;
		Data::setAno(Data::getAno()+1);
	}
}


int  Data::getMes(){
	return Data::mes;
}


void Data::setAno(int ano){
	Data::ano=ano;
}


int  Data::getAno(){
	return Data::ano;
}

Data::~Data() {
	// TODO Auto-generated destructor stub
}


