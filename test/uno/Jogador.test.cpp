#include <iostream>
#include <string>

#include "doctest.h"
#include "uno/Jogador.h"
#include "uno/Mesa.h"

using namespace uno;

TEST_CASE("Testando inicialização do Jogador") {
  Mesa* m = new Mesa();
  Jogador* j = new Jogador("Jogador de Teste", m);

  CHECK_EQ("Jogador de Teste", j->getNome());
  CHECK_EQ(false, j->getGritouUno());
}

TEST_CASE("Testando corParaString") {
  CHECK_EQ("Vermelha", corParaString(carta::VERMELHO));
  CHECK_EQ("Amarela", corParaString(carta::AMARELO));
  CHECK_EQ("Verde", corParaString(carta::VERDE));
  CHECK_EQ("Azul", corParaString(carta::AZUL));
}