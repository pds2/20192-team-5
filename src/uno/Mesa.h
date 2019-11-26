#ifndef TABLE_H
#define TABLE_H

#include <iostream>
#include <map>
#include <string>
#include <vector>

// #include "../inventory/Stock.hpp"
// #include "../user/Person.hpp"
#include "carta/Carta.h"

// using namespace std;
// using namespace inventory;
using namespace carta;

namespace uno {
class Mesa {
 private:
  std::vector<Carta*> pilhaDeCompra = {};
  std::vector<Carta*> pilhaDeDescarte = {};

  void iniciar();
  void embaralhar();
 public:
  Mesa();
  Carta* ultimaCartaJogada();
  // remove a carta da pilha de "compra" e retorna um ponteiro para ela
  Carta* comprarCarta();
  void descartar(Carta* card);
  ~Mesa();
};
}
#endif
