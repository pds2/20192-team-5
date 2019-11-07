#ifndef JOGADOR_H
#define JOGADOR_H
#include "carta.h"

#include <vector>

class Jogador{
private:
	std::string nome;
	std::vector<Carta*> mao = {};
	bool Uno = false;
public:
	void set_name(std::string _nome);
	std::string get_name();
	void imprimirMao();
	void Uno();

};

#endif 