#include "cartaCoringa.h"

CartaCoringa::CartaCoringa(int n, int c):Carta(n, c){}

std::string CartaCoringa::acao(){
	return "trocar cor";
};