#include "comprar4.h"

Comprar4::Comprar4(int n, int c):Carta(n, c){
};
std::string Comprar4::acao(){
	return "comprar4";	//string que vai ser recebida na mesa. A mesa compara a string em um if ou switch case e executa a ação.   			
}
    
