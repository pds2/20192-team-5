#ifndef CARTAREVERTER_H
#define CARTAREVERTER_H
#include "classe_carta.h"

class CartaReverter : public Carta{
    
        public:
                CartaReverter(int _cor, int _numero);
                void acao();


};
#endif