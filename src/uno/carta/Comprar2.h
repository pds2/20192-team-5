#ifndef COMPRAR2_H
#define COMPRAR2_H
#include <iostream>
#include <string>

#include "Carta.h"

namespace carta {

class Comprar2 : public Carta {
 public:
  Comprar2(int, Cor);
  const std::string getAcao() override { return "comprar2"; }
};
}  // namespace carta
#endif