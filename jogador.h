#ifndef JOGADOR_H
#define JOGADOR_H
#include "classe_carta.h"

#include <vector>

class Jogador{
	private:
		std::string nome;
		std::vector<Carta> cartas_mao;
		bool uno;

	public:
		Jogador(std::string _nome, std::vector<Carta> _cartas_mao, bool _uno);
		void imprimeMao();
		std::string get_nome();
		std::vector<Carta> get_mao();
		bool verificar_mao();
		void gritar_uno();
		//escolher_carta_mao();

};
#endif 