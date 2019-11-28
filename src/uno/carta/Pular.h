#ifndef PULAR_H
#define PULAR_H
#include <iostream>
#include <string>

#include "Carta.h"

namespace carta {

class Pular : public Carta {
 public:
  Pular(int, Cor);
  std::string getAcao() override { return "pular"; }
};
}  // namespace carta
#endif