#ifndef CORINGA_H
#define CORINGA_H
#include <iostream>
#include <string>

#include "Carta.h"

namespace carta {

class Coringa : public Carta {
 public:
  Coringa(int, Cor);
  const std::string getAcao() override { return "coringa"; }
};
}  // namespace carta
#endif