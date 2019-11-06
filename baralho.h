#ifndef BARALHO_H
#define BARALHO_H
#include "classe_carta.h"
#include <algorithm>    // std::random_shuffle
#include <vector>       // std::vector
#include <ctime>        // std::time
#include <cstdlib>      // std::rand, std::srand



class Baralho{
    
    public:
    std::vector<Carta> cartas;
    Baralho();
    std::vector<Carta> retornarCarta();

    void embaralhar ();
    void popular(); // cria as cartas do baralho
    void exibirConteudo();

 
    //popular: criar 108 cartas e add ao baralho loops
};  //http://www.cplusplus.com/reference/algorithm/random_shuffle/
    //criar vetor vazio
      	        
#endif