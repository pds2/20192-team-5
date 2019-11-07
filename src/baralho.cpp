#include <iostream>
#include "baralho.h"

std::vector<Carta*> Baralho::retornarCartas(){
        return this->cartas;
 };

void Baralho::imprimirCartas(){ //imprimir cartas
    for(int i = 0; i < cartas.size(); i++){
        std::cout<<"--------------------------------------"<<std::endl;
        std::cout<<cartas[i]->acao()<<std::endl;
        if(cartas[i]->retornarNumero() != -1)
            std::cout<<cartas[i]->retornarNumero()<<std::endl;
        //std::cout<<cartas[i]->retornarCor()<<std::endl;

        
        if(cartas[i]->retornarCor() == 0)
            std::cout<<"azul"<<std::endl;
        else if(cartas[i]->retornarCor() == 1)
            std::cout<<"amarelo"<<std::endl;
        else if(cartas[i]->retornarCor() == 2)
            std::cout<<"verde"<<std::endl;
        else if(cartas[i]->retornarCor() == 3)
            std::cout<<"vermelho"<<std::endl;
    }
}

void Baralho::embaralhar(){
    std::random_shuffle(cartas.begin(), cartas.end());
}

void Baralho::popular(){
    /**
    * Criando as cartas basicas do baralho 0 ~ 9.
    */
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 4; j++){
            Carta *aux = new Carta(i, j);
            cartas.push_back(aux);
        }
    }
    /**
    * Continuando a criacao das cartas basicas do baralho 1 ~ 9.
    */
    for(int i = 1; i < 10; i++){
        for(int j = 0; j < 4; j++){
            Carta *aux = new Carta(i, j);
            cartas.push_back(aux);
        }
    }
    /**
    * Criando as cartas especiais do baralho que nao possuem cor.
    */
    for(int i = 0; i < 4; i++){
        CartaCoringa *aux1 = new CartaCoringa(-1, -1);
        Comprar4 *aux2 = new Comprar4(-1, -1);
        cartas.push_back(aux1);
        cartas.push_back(aux2);

    }
    /**
    * Criando as cartas especiais pular, reverter, comprar 2 que possuem cor.
    */
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 2; j++){
            Comprar2 *aux1 = new Comprar2(-1, i);
            CartaReverter *aux2 = new CartaReverter(-1, i);
            CartaPular *aux3 = new CartaPular(-1, i);
            cartas.push_back(aux1);
            cartas.push_back(aux2);
            cartas.push_back(aux3);                                                                                                                                                                                                                                                                                                                        
        }
    }
}


    //popular: criar 108 cartas e add ao baralho loops
  //http://www.cplusplus.com/reference/algorithm/random_shuffle/
    //criar vetor vazio
      	
        
