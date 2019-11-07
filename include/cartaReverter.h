#ifndef CARTAREVERTER_H
#define CARTAREVERTER_H
#include "carta.h"

class CartaReverter: public Carta{ //carta especial muda o sentido de jogo
public:
	CartaReverter(int n, int c);
	~CartaReverter();
	std::string acao() override;
};
#endif