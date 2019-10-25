#include <iostream>
#include "jogador.h"

Jogador::Jogador(std::string _nome, std::vector<Carta> _cartas_mao, bool _uno){
	this->nome = _nome;
	this->cartas_mao = _cartas_mao;
	this->uno = _uno;
}

std::string Jogador::get_nome(){
	return this->nome;
}

std::vector<Carta> Jogador::get_mao(){
	return this->cartas_mao;
}

bool Jogador::verificar_mao(){
	if (cartas_mao.size() == 1){
		return true;
	}else{
		return false;
	}	
}

void Jogador::gritar_uno(){
	if (verificar_mao()){
		std::cout << "UNO!!!" << std::endl;
	}
}

void Jogador::imprimeMao(){
	for(int i = 0; i < cartas_mao.size(); i++){
		std::cout<<cartas_mao[i].get_numero()<<std::endl;
	}
}


