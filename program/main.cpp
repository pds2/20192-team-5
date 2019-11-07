#include <iostream>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include "baralho.h"
#include <vector>
#include "jogador.h"
#include <string>
#include "carta.h"

int main(){
	Baralho bar;
	bar.popular();
	bar.embaralhar();
	bar.imprimirCartas();
	Jogador Joao;
	Joao.set_name("Joao");
	std::cout << Joao.get_name() <<std::endl;

}
