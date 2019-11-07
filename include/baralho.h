#ifndef BARALHO_H
#define BARALHO_H
#include "carta.h"
#include <algorithm>    // std::random_shuffle
#include <vector>       // std::vector
#include <ctime>        // std::time
#include <cstdlib>      // std::rand, std::srand
#include "cartaCoringa.h"
#include "comprar4.h"
#include "comprar2.h"
#include "cartaPular.h"
#include "cartaReverter.h"

class Baralho{
private:
    std::vector<Carta*> cartas = {};
public:
    //Baralho(){};
    std::vector<Carta*> retornarCartas();
    void imprimirCartas();
    void embaralhar();
    void popular();
};
    //criar vetor vazio
      	        
#endif