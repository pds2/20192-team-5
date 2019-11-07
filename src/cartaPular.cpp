#include "cartaPular.h"

CartaPular::CartaPular(int n, int c):Carta(n, c){
};

std::string CartaPular::acao(){  
 	//string tem que ter um padrão para ser comparado. No caso, todos com letra minuscula
	return "pular";	//string que vai ser recebida na mesa. A mesa compara a string em um if ou switch case e executa a ação.   			
} 
    

