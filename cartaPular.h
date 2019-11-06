#ifndef CARTAPULAR_H
#define CARTAPULAR_H
#include "classe_carta.h"

class CartaPular : public Carta{
    
        public:
                CartaPular(int _cor, int _numero);
                void acao();


};
#endif