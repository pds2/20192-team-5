#include <iostream>
#include "jogador.h"

Jogador::jogador(string _nome, Carta _cartas_mao, bool _uno){
	this->nome = _nome;
	this->cartas_mao = _cartas_mao;
	this->uno = _uno;
}

std::string  get_nome(){
	return this->nome;
}

std::vector<Carta> get_mao(){
	return this->cartas_mao;
}

bool verificar_mao(){
	if (cartas_mao.size() == 1){
		return true;
	}else{
		return false;
	}	
}

void gritar_uno(){
	if (verificar_mao){
		std::cout << "UNO!!!" << std::endl;
	}
}


