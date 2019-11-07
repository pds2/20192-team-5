#include "cartaReverter.h"

CartaReverter::CartaReverter(int n, int c):Carta(n, c){
}

std::string CartaReverter::acao(){
	return "reverte a ordem";	//string que vai ser recebida na mesa. A mesa compara a string em um if ou switch case e executa a ação.   			
}
    
