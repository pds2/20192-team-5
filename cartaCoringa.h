#ifndef CARTACORINGA_H
#define CARTACORINGA_H

#include "classe_carta.h"

class CartaCoringa : public Carta{
    
        public:
                CartaCoringa(int _cor, int _numero);
                void acao();


};
#endif