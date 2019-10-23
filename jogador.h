#ifndef BARALHO_H
#define BARALHO_H

Class Jogador{
	private:
		std::string nome;
		std::vector<Carta> cartas_mao;
		bool uno;

	public:
		Jogador (string nome, Carta cartas_mao, boolean uno);
		std::string get_nome();
		std::vector<Carta> get_mao();
		bool verificar_mao();
		void gritar_uno();
		//escolher_carta_mao();

}
#endif 