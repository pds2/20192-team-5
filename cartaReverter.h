#ifndef CARTAREVERTER_H
#define CARTAREVERTER_H
#include "classe_carta.h"

class CartaReverter: public Carta{
    
    private:
        int cor;
        int numero;
    
    public:
        Carta(int _cor, int _numero);
        int get_cor();    
        int get_numero();
        virtual std::string acao();  // 
    
};
#endif