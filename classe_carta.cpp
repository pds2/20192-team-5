#include "classe_carta.h"

Carta::Carta(int _cor, int _numero){
    this->cor = _cor;
    this->numero = _numero;

}

int Carta::get_cor(){
    return this->cor;
}


int Carta::get_numero(){
    return this->numero;
}

void Carta::acao(){}