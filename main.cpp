#include <iostream>
#include "jogador.h"
#include "baralho.h"

using namespace std;

int main(){
		
	Baralho baralho;
	baralho.popular();
	baralho.imprimir();
	baralho.embaralhar();
	baralho.imprimir();

	string name;
	bool tem_uma_carta;
	std::vector<Carta> hand, han;
	hand = baralho.retornarCarta();
		
	Jogador jogador("Joao", hand, 0);
	name = jogador.get_nome();
	han = jogador.get_mao();
	tem_uma_carta = jogador.verificar_mao();
	jogador.gritar_uno();

	
	std::cout<<name<<std::endl;
	std::cout<<tem_uma_carta<<std::endl;
	std::cout<<han.size()<<std::endl;
	jogador.imprimeMao();
	return 0;
} 