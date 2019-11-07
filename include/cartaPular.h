#ifndef CARTAPULAR_H
#define CARTAPULAR_H
#include "carta.h"

class CartaPular: public Carta{ //pula o proximo jogador
public:
	CartaPular(int n, int c);
	~CartaPular();
	std::string acao() override;
};
#endif