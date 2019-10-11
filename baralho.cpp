#include <iostream>

void criar_baralho(int *cartas){ //essa função cria um vetor de numeros aleatorios e depois deixa todos diferentes entre si
    int i, j;
	for(i=0; i<108; i++){
		cartas[i] = rand()%108;
	}
	for(i=0; i<108; i++){
		for(j=0; j<108; j++){
			if(cartas[i]==cartas[j] && i!=j){
				cartas[i] = rand()%108;
				j = 0;
				continue;
			}	
		}
	}
	for(i=0; i<108; i++){
		std::cout << cartas[i] << " ";
	}
}

// dar_cartas(){

// }

int main() {
    int cartas[108];
	criar_baralho(cartas);
}