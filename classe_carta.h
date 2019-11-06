#ifndef CARTA_H
#define CARTA_H
#include <iostream>
#include <string>

class Carta{


    
    public:
        int cor;
        int numero;
        Carta(int _cor, int _numero);
        int get_cor();
        int get_numero();
        virtual void acao();
};
#endif