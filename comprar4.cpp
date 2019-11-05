#include "comprar4.h"

Comprar4::comprar4(int _cor, int _numero){
    this->cor = _cor;
    this->numero = _numero;

}

int Comprar4::get_cor(){
    	return this->cor;
    }   

int Comprar4::get_numero(){
    	return this->numero;
    }

string Comprar4::acao()override{
	return "comprar4";	//string que vai ser recebida na mesa. A mesa compara a string em um if ou switch case e executa a ação.   			
}
    
