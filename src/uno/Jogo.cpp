
#include "Jogo.h"

#include <iostream>
using namespace uno;
Jogo::Jogo() {
  this->direcao = 1;
  this->jogadorAtualIndex = 0;
  this->mesa = new Mesa();
}

void Jogo::iniciar() {
    std::cout << "Iniciando jogo!";
}