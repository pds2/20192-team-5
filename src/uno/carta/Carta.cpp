#include "Carta.h"

using namespace carta;

carta::Carta::Carta(int numero, Cor cor) {
  this->numero = numero;
  this->cor = cor;
};

Cor Carta::getCor() {
  return this->cor;
};

int Carta::getNumero() {
  return this->numero;
};
