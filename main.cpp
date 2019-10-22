#include "classe_carta.h"
#include "baralho.h"
#include <iostream>

int main () {

    Carta teste(0, 2);

    std::cout<< "minha cor é " << teste.get_cor() << std::endl
             << "meu número é " << teste.get_numero() << std::endl;

    Baralho testeBaralho;
    testeBaralho.popular();
    testeBaralho.embaralhar();
    



}