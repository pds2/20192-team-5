#ifndef JOGADOR_H
#define JOGADOR_H
#include "carta.h"

#include <vector>

class Jogador{
private:
	std::string nome;
	std::vector<Carta*> mao;
public:
	Jogador(std::string _nome, std::vector<Carta*> _cartasMao);
	void imprimeMao();
	std::string retornarNome();
	std::vector<Carta*> retornarMao();
};

#endif 