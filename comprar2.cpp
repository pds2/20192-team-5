#include "comprar2.h"

Comprar2::Comprar2(int _cor, int _numero){
    this->cor = _cor;
    this->numero = _numero;

}

int Comprar2::get_cor(){
    	return this->cor;
    }   

int Comprar2::get_numero(){
    	return this->numero;
    }

std::string Comprar2::acao(){
	return "comprar2";	//string que vai ser recebida na mesa. A mesa compara a string em um if ou switch case e executa a ação.   			
}
    
