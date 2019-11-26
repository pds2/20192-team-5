#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <map>
#include <string>
#include <vector>

// #include "../inventory/Stock.hpp"
// #include "../user/Person.hpp"
#include "Jogador.h"
#include "Mesa.h"
#include "carta/Carta.h"

// using namespace std;
// using namespace inventory;
using namespace carta;

namespace uno {
/**
 * Classe para controle do jogo
 *
 * Esta classe controla o *estado* do sistema. Nela ficam armazenados
 * ponteiros para cada jogador, para o baralho principal, para pilha de descarte
 */
class Jogo {
 private:
  std::vector<Jogador*> jogadores = {};
  // define quem será o próximo jogador; flag usada para inverter a ordem dos
  // jogadores quando a carta "inverter" é usada
  int direcao;
  // índice do jogador atual no vetor `jogadores`
  int jogadorAtualIndex;
  Mesa* mesa;
 public:
  Jogo();
  void iniciar();
  ~Jogo();
};
}  // namespace uno

#endif
