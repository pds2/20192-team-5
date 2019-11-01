#ifndef CARTA_H
#define CARTA_H
#include "classe_carta.h"

class Comprar2 : public Carta {
    
    private:
        int cor;
        int numero;
    
    public:
        Comprar2(int _cor, int _numero);
        int get_cor();    
        int get_numero();
        std::string acao() override;  
};

#endif