#include <iostream>
#include "classe_carta.h"
#include "cartaCoringa.h"
#include "cartaPular.h"
#include "cartaReverter.h"
#include "comprar2.h"
#include "comprar4.h"
#include "baralho.h"

int main(){

	Carta teste0(3,5);
	std::cout<< teste0.get_cor() << std::endl;
	std::cout<< teste0.get_numero() << std::endl;


	CartaCoringa teste(3, 4);
	std::cout<< teste.get_cor() << std::endl;
	std::cout<< teste.get_numero() << std::endl;

	CartaPular teste1(3, 4);
	std::cout<< teste1.get_cor() << std::endl;
	std::cout<< teste1.get_numero() << std::endl;

	CartaReverter teste2(3, 4);
	std::cout<< teste2.get_cor() << std::endl;
	std::cout<< teste2.get_numero() << std::endl;

	Carta2 teste3(9, 9);
	std::cout<< teste3.get_cor() << std::endl;
	std::cout<< teste3.get_numero() << std::endl;

	Carta4 teste4(-1, -1);
	std::cout<< teste4.get_cor() << std::endl;
	std::cout<< teste4.get_numero() << std::endl;

	Baralho prova;
	prova.popular();
	for (int i = 0; i<40; i++){
		std::cout << prova.cartas[i].cor <<prova.cartas[i].numero<<std::endl;}

	prova.exibirConteudo();


	return 0;


}
