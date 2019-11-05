#include "cartaPular.h"

CartaPular::CartaPular(int _cor, int _numero){
	this->cor = _cor;
	this->numero = _numero;

}

int CartaPular::get_cor(){
	return this-> cor;
}

int CartaPular::get_numero(){
	return this-> numero;
}

string CartaCoringa::acao()override{  
 	//string tem que ter um padrão para ser comparado. No caso, todos com letra minuscula
	return "pular jogador";	//string que vai ser recebida na mesa. A mesa compara a string em um if ou switch case e executa a ação.   			
} 
    

