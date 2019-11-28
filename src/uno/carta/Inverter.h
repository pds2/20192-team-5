#ifndef REVERTER_H
#define REVERTER_H
#include <iostream>
#include <string>

#include "Carta.h"

namespace carta {

class Inverter : public Carta {
 public:
  Inverter(int, Cor);
  std::string getAcao() override { return "inverter"; }
};
}  // namespace carta
#endif