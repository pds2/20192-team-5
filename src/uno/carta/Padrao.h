#ifndef PADRAO_H
#define PADRAO_H
#include <iostream>
#include <string>

#include "Carta.h"

namespace carta {

class Padrao : public Carta {
 public:
  Padrao(int, Cor);
  std::string getAcao() override { return ""; }
};
}  // namespace carta
#endif