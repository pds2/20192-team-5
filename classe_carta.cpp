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

<<<<<<< HEAD
void Carta::acao(){}
=======
std::string Carta::acao(){
	return "proximo";
}
>>>>>>> fdd4caf4445d0ca96fc5b7f920c094c5b7a11fb5
    
