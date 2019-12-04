#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include <vector>

#include "uno/Jogo.h"

int main() {
  std::cout << "Iniciando jogo...\n";
  uno::Jogo* jogo = new uno::Jogo();
  jogo->iniciar();
}
