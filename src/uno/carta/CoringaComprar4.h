#ifndef CORINGACOMPRAR4_H
#define CORINGACOMPRAR4_H
#include <iostream>
#include <string>

#include "Carta.h"

namespace carta {

class CoringaComprar4 : public Carta {
 public:
  CoringaComprar4(int, Cor);
  std::string getAcao() override { return "coringacomprar4"; }
};
}  // namespace carta
#endif