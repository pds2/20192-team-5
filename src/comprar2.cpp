#include "comprar2.h"

Comprar2::Comprar2(int n, int c):Carta(n, c){}

std::string Comprar2::acao(){
	return "comprar2";	//string que vai ser recebida na mesa. A mesa compara a string em um if ou switch case e executa a ação.   			
}
    
