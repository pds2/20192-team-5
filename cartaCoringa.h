#ifndef CARTACORINGA_H
#define CARTACORINGA_H
#include "classe_carta.h"

class CartaCoringa: public Carta{ //declaração de herança. Classe cartaCoringa recebe os atributos da classe carta
    
    private:
        int cor;
        int numero;
    
    public:
        CartaCoringa(int _cor, int _numero);
        int get_cor();    
        int get_numero();
        std::string acao() override;  // sobrescrever a funcao ação da classe Carta
    
};
#endif