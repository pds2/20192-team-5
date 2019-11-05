#ifndef COMPRAR4_H
#define COMPRAR4_H
#include <iostream>
#include <classe_carta.h>

class Comprar4 : public Carta{
    
    private:
        int cor;
        int numero;8
    
    public:
        Comprar4(int _cor, int _numero);
        int get_cor();    
        int get_numero();
        virtual std::string acao();  
};
#endif