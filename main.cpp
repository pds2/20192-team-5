#include "classe_carta.h"
#include <iostream>

int main () {

    Carta teste(0, 2);

    std::cout<< "minha cor é " << teste.get_cor() << std::endl
             << "meu número é " << teste.get_numero() << std::endl;


}