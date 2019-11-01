#ifndef BARALHO_H
#define BARALHO_H
#include "classe_carta.h"
#include <algorithm>    // std::random_shuffle
#include <vector>       // std::vector
#include <ctime>        // std::time
#include <cstdlib>      // std::rand, std::srand

class Baralho{
    
    private:
    std::vector<Carta*> cartas;

    public:

    Baralho();
    std::vector<Carta*> retornarCarta();
    void embaralhar ();
    void popular(); // cria as cartas do baralho
    void imprimir(); //exbie o baralho
    void inserir();
    void retirar_carta();

    //popular: criar 108 cartas e add ao baralho loops
};  //http://www.cplusplus.com/reference/algorithm/random_shuffle/
    //criar vetor vazio
      	        
#endif