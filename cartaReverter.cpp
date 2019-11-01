#include "cartaReveter.h"

CartaReverter::CartaReverter(int _cor, int _numero){
    this->cor = _cor;
    this->numero = _numero;

}

int CartaReverter::get_cor(){
    	return this->cor;
    }   

int CartaReverter::get_numero(){
    	return this->numero;
    }

string CartaReverter::acao()override{
	return "reverte a ordem";	//string que vai ser recebida na mesa. A mesa compara a string em um if ou switch case e executa a ação.   			
}
    
