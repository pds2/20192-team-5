#include "carta.h"

Carta::Carta(int n, int c){ //classe base
		this->numero = n;
		this->cor = c;
};

int Carta::retornarCor(){
		return this->cor;
};

int Carta::retornarNumero(){
		return this->numero;
};

std::string Carta::acao(){
	return "proximo";
};
    
