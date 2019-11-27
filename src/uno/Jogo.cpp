
#include "Jogo.h"

#include <iostream>
using namespace uno;
Jogo::Jogo() {
  this->direcao = 1;
  this->jogadorAtualIndex = 0;
  this->mesa = new Mesa();
}

void Jogo::iniciar() {
    std::cout << "Iniciando jogo!\n";
    this->adicionarJogador();
    this->adicionarJogador();
}

void Jogo::adicionarJogador() {
    std::string nome;
    std::cout << "Digite o nome do jogador: \n";
    std::cin >> nome;

    this->jogadores.push_back(new Jogador(nome, this->mesa));

    this->jogadores.back()->imprimirMao();
}