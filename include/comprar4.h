#ifndef COMPRAR4_H
#define COMPRAR4_H
#include <iostream>
#include <string>
#include "carta.h"

class Comprar4 : public Carta{ // carta especial comprar 4
public:
	Comprar4(int n, int c);
	~Comprar4();
	std::string acao() override;
};
#endif