#ifndef COMPRAR2_H
#define COMPRAR2_H
#include <iostream>
#include <string>
#include "carta.h"

class Comprar2 : public Carta{ //carta especial comprar 2
public:
	Comprar2(int n, int c);
	std::string acao();
};

#endif