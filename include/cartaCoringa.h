#include "carta.h"

class CartaCoringa : public Carta{ //carta especial coringa, trocar cor
public:
	CartaCoringa(int n, int c);
	std::string acao() override;
};