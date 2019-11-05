#include "cartaCoringa.h"

CartaCoringa::CartaCoringa(int _cor, int _numero){
    this->cor = _cor;
    this->numero = _numero;

}

int CartaCoringa::get_cor(){
    	return this->cor;
    }   

int CartaCoringa::get_numero(){
    	return this->numero;
    }

string CartaCoringa::acao()override{
	return "trocar cor";	//string que vai ser recebida na mesa. A mesa compara a string em um if ou switch case e executa a ação.   			
}
    
