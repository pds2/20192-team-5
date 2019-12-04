
#include "Jogo.h"

#include <iostream>
using namespace uno;
Jogo::Jogo() {
  this->direcao = 1;
  this->jogadorAtualIndex = 0;
  this->mesa = new Mesa();
  this->alguemGanhou = false;
}

void Jogo::iniciar() {
  std::string nome;
  std::cout << "Digite o nome do jogador 1: \n";
  std::getline(std::cin >> std::ws, nome);
  this->adicionarJogador(nome);
  std::cout << "Digite o nome do jogador 2: \n";
  std::getline(std::cin >> std::ws, nome);
  this->adicionarJogador(nome);

  while (this->alguemGanhou != true) {
      this->iniciarRodada();
  }
}

void Jogo::iniciarRodada() {
  Jogador *jAtual = this->jogadores[this->jogadorAtualIndex];
  Carta *jogada = jAtual->proximoMovimento(this->mesa);

  if (jogada != nullptr) {
      if (jogada->getAcao() == "inverter") {
        this->direcao = this->direcao * (-1);
        this->mesa->resetAcaoAcumulada();
    } else if (jogada->getAcao() == "coringa" || jogada->getAcao() == "coringacomprar4") {
        this->mesa->setProximaCor(jAtual->perguntarCor());
        this->mesa->resetAcaoAcumulada();
    } else if (jogada->getAcao() == "pular") {
        this->jogadorAtualIndex = this->getProximoJogadorIndex();
        this->mesa->resetAcaoAcumulada();
    }
  }
  this->jogadorAtualIndex = this->getProximoJogadorIndex();
}

int Jogo::getProximoJogadorIndex() {
  int iProximoJogador = this->jogadorAtualIndex + this->direcao;
  int nJogadores = (int)this->jogadores.size();

  if (iProximoJogador >= nJogadores) {
    return 0;
  } else if (iProximoJogador < 0) {
    return nJogadores - 1;
  }
  return iProximoJogador;
}

void Jogo::adicionarJogador(std::string nome) {
  this->jogadores.push_back(new Jogador(nome, this->mesa));
}