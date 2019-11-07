#ifndef JOGO_H
#define JOGO_H
#include "baralho.h"
#include <vector>
#include "jogador.h"

class Jogo {
private:
	std::vector<Jogador*> = {};
	Baralho Principal;
	Baralho Descarte; 
	Carta Topo;

public:
	void inicia_jogo();

	// popula principal
	// embaralha principal
	// cria jogadores (a ordem o vetor é a orderm das jogados)
	// transferir cartas do Baralho Principal para jogadores
	// transfere carta do topo do Baralho Principal para descarte e exibe, atualiza carta topo

	void jogo();
	// loop que passa pelos jogadores e recomeça quando chega no 3 
	// uno = false para todos
	// #3 exibir cartas para jogador , ele escolherá uma opcao (j jogar, d compra)
	// se d , transfere carta do Baralho Prinpipal para mao
	// se j, input jogador qual carta jogar  
	// escolher numero carta da mao e verificar se jogada eh legal olhando carta topo, se nao, volta passo #3 
	// se legal, transferir carta da mao para o Baralho Descarte e atualiza carta topo; pergunta se quer gritar uno
	// se mao.size == 1 e uno false, transfiro 2 do Baralho Principal para Mao do Jogador
	// verifico se mao.size == 0 , if yes gg
	// executo carta.acao (poliformismo)
	// se carta normal, continuar loop
	// se carta curinga, input cor, mudo cor carta topo, transfere carta para descarte, continua loop
	// se carta compra 4, input cor, mudo cor carta topo, verifica se proximo tem compra 4
	// #x se nao, transfere 4 do baralho principal pro proximo e pula a vez do proximo
	// se sim, transfiro a carta do proximo para o descarte e verifico se o proximo proximo tem compra 4 até alguem nao ter e rodo #x.
	// se carta compra 2, mesma coisa do compra 4, sem input de cor
	// se pular , pular alterando posicao do iterador
	// se inverter, inverte o vetor 
	// if loop chegou no ultimo jogador , recomeçar
	// if baralho Principal.size() == 0 , transferir descarte para principal e embaralhar

	void executarAcao(std::string acao/*receber tipo especifico de carta, fazer uma para cada subclasse de carta */) {
			// conforme o tipo de carta recebido, exectuar funcao diferente, conforme comentarios acima
	}


}

#endif