#include <iostream>
#include "baralho.h"

Baralho::Baralho(){};

void Baralho::embaralhar (){
	std::random_shuffle(cartas.begin(), cartas.end());
    
 } 

void Baralho::popular(){
//
	for (int i = 0; i <= 9; i++){
		for(int j = 0; j < 4; j++){
			Carta aux(j,i);
			cartas.push_back(aux); 
		}
	}
    
 }
std::vector<Carta> Baralho::retornarCarta(){
	return this->cartas;
}


void Baralho::imprimir(){
 std::cout << "myvector contains:";
	for (std::vector<Carta>::iterator it=cartas.begin(); it!=cartas.end(); ++it)
		std::cout << ' ' << it->get_cor();

  std::cout << '\n';

}





    //popular: criar 108 cartas e add ao baralho loops
  //http://www.cplusplus.com/reference/algorithm/random_shuffle/
    //criar vetor vazio
      	
        
