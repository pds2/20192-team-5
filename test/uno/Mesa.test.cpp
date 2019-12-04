#include "doctest.h"

#include <iostream>
#include <string>

#include "uno/Mesa.h"

using namespace uno;

TEST_CASE("Testando Mesa") {
  Mesa* m = new Mesa();
  CHECK_EQ(0, m->getAcaoAcumulado());

  m->setProximaCor(carta::AMARELO);
  CHECK_EQ(carta::AMARELO, m->getProximaCor());
}