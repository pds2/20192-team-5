#ifndef CARTA_H
#define CARTA_H
#include <iostream>

class Carta{
protected:
	int numero;
	int cor;
public:
	Carta(int n, int c);
	~Carta();
	int retornarCor();
	virtual std::string acao();
	int retornarNumero();
};

#endif