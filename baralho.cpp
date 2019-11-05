#include <iostream>
#include "baralho.h"

Baralho::Baralho(){};

void Baralho::embaralhar (){
	std::random_shuffle(cartas.begin(), cartas.end());
    
 }

void Baralho::popular(){
//cria as cartas normais ( 0 a 9 ) de todas as cores.
	for (int i = 0; i <= 9; i++){
		for(int j = 0; j < 4; j++){
			Carta aux(j,i);
			cartas.push_back(&aux); 
		}
	}
	//cria a segunda levada de  cartas de 1 a 9 
	//esse loop  criar o restante das cartas. Existem 2 cartas de cada cor, tirando as cartas de numero zero.
	//por isso o i aqui começa em 1.  
	for (int i = 1; i <= 9; i++){
		for(int j = 0; j < 4; j++){
			Carta aux(i,j);
			cartas.push_back(&aux);
		}
	}
	for (int i = 0; i < 4; i++){
		CartaCoringa *aux = new aux(-1,-1);
		cartas.push_back(aux);
	}
    
 }
<<<<<<< HEAD
std::vector<Carta> Baralho::retornarCarta(){
	return this->cartas;
}

=======
 
 //criando as cartas especiais
>>>>>>> fdd4caf4445d0ca96fc5b7f920c094c5b7a11fb5

std::vector<Carta*> Baralho::retornarCarta(){
	return this->cartas;
}


void Baralho::imprimir(){
	std::cout << "myvector contains:" <<std::endl;
}





    //popular: criar 108 cartas e add ao baralho loops
  //http://www.cplusplus.com/reference/algorithm/random_shuffle/
    //criar vetor vazio
      	
        
