#ifndef CARD_H
#define CARD_H
#include <iostream>
#include <string>

namespace carta {
enum Cor {
  CORINGA = 0,
  AMARELO = 1,
  VERMELHO = 2,
  VERDE = 3,
  AZUL = 4,
};

class Carta {
 protected:
  int numero;
  Cor cor;

 public:
  Carta(int numero, Cor cor);
  int getNumero();
  Cor getCor();
  virtual std::string getAcao() = 0;
  ~Carta();
};
}  // namespace carta
#endif