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

std::string carta::corParaString(carta::Cor c) {
  switch (c) {
    case carta::VERMELHO:
      return "Vermelha";
    case carta::AMARELO:
      return "Amarela";
    case carta::VERDE:
      return "Verde";
    case carta::AZUL:
      return "Azul";
    default:
      return "";
  }
}