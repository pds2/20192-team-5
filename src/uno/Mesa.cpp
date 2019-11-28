#include "Mesa.h"

#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <vector>

#include "carta/Carta.h"
#include "carta/Comprar2.h"
#include "carta/Coringa.h"
#include "carta/CoringaComprar4.h"
#include "carta/Inverter.h"
#include "carta/Padrao.h"
#include "carta/Pular.h"

using namespace uno;

Mesa::Mesa() {
  this->iniciar();
  this->embaralhar();

  Carta* primeiraCarta = this->comprarCarta();
  while (primeiraCarta->getAcao() != "") {
    this->pilhaDeCompra.push_back(primeiraCarta);
    primeiraCarta = this->comprarCarta();
  }

  this->descartar(primeiraCarta);
}

Carta* Mesa::comprarCarta() {
  Carta* c = this->pilhaDeCompra.back();
  this->pilhaDeCompra.pop_back();
  return c;
}

void Mesa::embaralhar() {
  std::random_shuffle(this->pilhaDeCompra.begin(), this->pilhaDeCompra.end());
}

void Mesa::descartar(Carta* carta) {
    if (carta->getAcao() != "") {
        this->acaoAcumulada = this->acaoAcumulada + 1;
    } if (carta->getCor() != Cor::CORINGA) {
        this->proximaCorEsperada = carta->getCor();
    }
    
    this->pilhaDeDescarte.push_back(carta);
    this->setProximaCor(carta->getCor());
}


void Mesa::setProximaCor(Cor cor) {
    this->proximaCorEsperada = cor;
}

Carta* Mesa::ultimaCartaJogada() {
    return this->pilhaDeDescarte.back();
}

Cor Mesa::getProximaCor() {
    return this->proximaCorEsperada;
}

void Mesa::resetAcaoAcumulada() {
    this->acaoAcumulada = 0;
}

int Mesa::getAcaoAcumulado() {
    return this->acaoAcumulada;
}


void Mesa::iniciar() {
  /**
   * Criando as cartas basicas do baralho 0 ~ 9.
   */
  for (int n = 0; n < 10; n++) {
    this->pilhaDeCompra.push_back(new carta::Padrao(n, carta::VERMELHO));
    this->pilhaDeCompra.push_back(new carta::Padrao(n, carta::AMARELO));
    this->pilhaDeCompra.push_back(new carta::Padrao(n, carta::VERDE));
    this->pilhaDeCompra.push_back(new carta::Padrao(n, carta::AZUL));
  }
  /**
   * Continuando a criacao das cartas basicas do baralho 1 ~ 9.
   */
  for (int n = 1; n < 10; n++) {
    this->pilhaDeCompra.push_back(new carta::Padrao(n, carta::VERMELHO));
    this->pilhaDeCompra.push_back(new carta::Padrao(n, carta::AMARELO));
    this->pilhaDeCompra.push_back(new carta::Padrao(n, carta::VERDE));
    this->pilhaDeCompra.push_back(new carta::Padrao(n, carta::AZUL));
  }
  /**
   * Criando as cartas especiais do baralho que nao possuem cor.
   */
  for (int i = 0; i < 4; i++) {
    this->pilhaDeCompra.push_back(new carta::Coringa(-1, carta::CORINGA));
    this->pilhaDeCompra.push_back(
        new carta::CoringaComprar4(-1, carta::CORINGA));
  }
  /**
   * Criando as cartas especiais pular, reverter, comprar 2 que possuem cor.
   */
  for (int n = 0; n < 2; n++) {
    this->pilhaDeCompra.push_back(new carta::Comprar2(-1, carta::VERMELHO));
    this->pilhaDeCompra.push_back(new carta::Comprar2(-1, carta::AMARELO));
    this->pilhaDeCompra.push_back(new carta::Comprar2(-1, carta::VERDE));
    this->pilhaDeCompra.push_back(new carta::Comprar2(-1, carta::AZUL));

    this->pilhaDeCompra.push_back(new carta::Inverter(-1, carta::VERMELHO));
    this->pilhaDeCompra.push_back(new carta::Inverter(-1, carta::AMARELO));
    this->pilhaDeCompra.push_back(new carta::Inverter(-1, carta::VERDE));
    this->pilhaDeCompra.push_back(new carta::Inverter(-1, carta::AZUL));

    this->pilhaDeCompra.push_back(new carta::Pular(-1, carta::VERMELHO));
    this->pilhaDeCompra.push_back(new carta::Pular(-1, carta::AMARELO));
    this->pilhaDeCompra.push_back(new carta::Pular(-1, carta::VERDE));
    this->pilhaDeCompra.push_back(new carta::Pular(-1, carta::AZUL));
  }
}