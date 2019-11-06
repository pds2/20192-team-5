#include <iostream>
#include "baralho.h"



Baralho::Baralho(){};

void Baralho::embaralhar (){
	
    
 }

void Baralho::popular(){
//cria as cartas normais ( 0 a 9 ) de todas as cores.
	for (int i = 0; i <= 9; i++){
		for(int j = 0; j < 4; j++){
			Carta aux(j,i);
			cartas.push_back(aux); 
		}
	}}

void Baralho::exibirConteudo(){
  	for (std::vector<Carta>::iterator it=cartas.begin(); it!=cartas.end(); ++it)
    std::cout << ' ' << it->cor << it->numero << std::endl;

  	std::cout << '\n';


}

  //http://www.cplusplus.com/reference/algorithm/random_shuffle/
    //criar vetor vazio
      	
        
