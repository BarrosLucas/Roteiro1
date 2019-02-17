/*
 * Data.h
 *
 *  Created on: 5 de fev de 2019
 *      Author: lucas
 */

#ifndef DATA_H_
#define DATA_H_


#define JANEIRO   1
#define FEVEREIRO 2
#define MARCO     3
#define ABRIL     4
#define MAIO      5
#define JUNHO     6
#define JULHO     7
#define AGOSTO    8
#define SETEMBRO  9
#define OUTUBRO   10
#define NOVEMBRO  11
#define DEZEMBRO  12

class Data {
public:
	Data();
	Data(int dia, int mes, int ano);

	void avancarDia();

	void setDia(int dia);
	int getDia();
	void setMes(int mes);
	int getMes();
	void setAno(int ano);
	int getAno();

	virtual ~Data();


private:
	int dia;
	int mes;
	int ano;

};



#endif /* DATA_H_ */
