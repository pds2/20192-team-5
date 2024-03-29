#include "Jogador.h"

#include <algorithm>
#include <iostream>
#include <ostream>
#include <string>
#include <vector>

#include "carta/Carta.h"

using namespace uno;

Jogador::Jogador(std::string nome, Mesa* mesa) {
  this->nome = nome;
  this->gritouUno = false;

  for (int i = 0; i < 8; i++) {
    this->mao.push_back(mesa->comprarCarta());
  }
}

void Jogador::setNome(std::string nome) {
  this->nome = nome;
}

std::string Jogador::getNome() {
  return this->nome;
}

bool Jogador::getGritouUno() {
  return this->gritouUno;
}

Jogador::~Jogador() {
  for (auto it = this->mao.begin(); it != this->mao.end(); it++) {
    this->mao.erase(it);
  }
}

Carta* Jogador::proximoMovimento(Mesa* m) {
  std::cout << std::endl << std::endl << "------------------------------" << std::endl;
  std::cout << "Jogador da rodada: " << this->getNome() <<  std::endl;


  Cor corDesejada = m->getProximaCor();
  Carta* ultimaJogada = m->ultimaCartaJogada();

  std::vector<int> cartasPossiveis =
      getCartasPossiveis(ultimaJogada, corDesejada);
  if (cartasPossiveis.size() == 0) {
    if (ultimaJogada->getAcao() == "coringacomprar4") {
      this->comprarCartas(m, 4 * m->getAcaoAcumulado());
      m->resetAcaoAcumulada();

      return nullptr;
    } else if (ultimaJogada->getAcao() == "comprar2") {
      this->comprarCartas(m, 2 * m->getAcaoAcumulado());
      m->resetAcaoAcumulada();

      return nullptr;
    }
  }

  while (cartasPossiveis.size() == 0) {
    std::cout << "Nenhuma jogada possível! Comprando carta..." << std::endl;
    this->comprarCartas(m, 1);
    cartasPossiveis = getCartasPossiveis(ultimaJogada, corDesejada);
  }

  Carta* cartaJogada = this->aguardarInput(cartasPossiveis, ultimaJogada);
  m->descartar(cartaJogada);
  return cartaJogada;
}

Carta* Jogador::aguardarInput(std::vector<int> cartasPossiveis,
                              Carta* ultimaCartaJogada) {
  std::cout << "Ultima carta jogada: ";

  int n = ultimaCartaJogada->getNumero();
  std::cout << "[Carta: ";

  if (n > -1) {
    std::cout << std::to_string(n);
  } else {
    std::cout << ultimaCartaJogada->getAcao();
  }

  carta::Cor cor = ultimaCartaJogada->getCor();
  if (cor != carta::CORINGA) {
    std::cout << ", Cor:" << carta::corParaString(cor);
  }

  std::cout << "]" << std::endl <<  std::endl;

  std::cout << "> Digite o numero da carta desejada:" << std::endl;
  this->imprimirMao();

  int iCarta = 0;
  while (iCarta == 0) {
    std::cin >> iCarta;

    if (std::cin.fail()) {
      iCarta = 0;
       std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cout << "> Input inválido!" << std::endl;
      continue;
    }

    if (this->mao.size() == 2 && iCarta == 99) {
      iCarta = 0;
      this->gritouUno = true;
      std::cout << "> Gritou UNO! Agora escolha uma carta." << std::endl;
      continue;
    }

    if ((iCarta < 1) || (iCarta > (int)this->mao.size())) {
      iCarta = 0;
      std::cout << "> Carta inválida!" << std::endl;
      continue;
    }
    
    if (std::find(cartasPossiveis.begin(), cartasPossiveis.end(),
                  (iCarta - 1)) == cartasPossiveis.end()) {
      iCarta = 0;
      std::cout << "> Carta não permitida!" << std::endl;
    } else {
      Carta* carta = this->mao[iCarta - 1];
      this->mao.erase(this->mao.begin() + (iCarta - 1));
      return carta;
    }
  }
  return nullptr;
}

Cor Jogador::perguntarCor() {
  std::cout << std::endl;
  std::cout << "Qual cor você quer?" << std::endl;
  std::cout << "1) Amarelo" << std::endl;
  std::cout << "2) Vermelho" << std::endl;
  std::cout << "3) Verde" << std::endl;
  std::cout << "4) Azul" << std::endl;

  int iCor = 0;
  while ((iCor < 1) || (iCor > 4)) {
    std::cin >> iCor;

    if ((iCor < 1) || (iCor > 4)) {
      std::cout << "> Cor inválida! Digite um número entre 1 e 4" << std::endl;
    }
  }

  return (Cor)iCor;
}

void Jogador::comprarCartas(Mesa* m, int quantidade) {
  this->gritouUno = false;
  for (int n = 0; n < quantidade; n++) {
    this->mao.push_back(m->comprarCarta());
  }
}

std::vector<int> Jogador::getCartasPossiveis(Carta* ultimaCartaJogada,
                                             Cor corDesejada) {
  std::vector<int> cartasPossiveis;

  for (std::vector<carta::Carta*>::size_type i = 0; i != this->mao.size();
       i++) {
    Carta* c = this->mao[i];
    if (c->getAcao() == "coringa" || c->getAcao() == "coringacomprar4") {
      cartasPossiveis.push_back((int)i);
      continue;
    }
    if (ultimaCartaJogada->getAcao() == "") {
      if ((c->getCor() == corDesejada) ||
          (c->getNumero() == ultimaCartaJogada->getNumero())) {
        cartasPossiveis.push_back((int)i);
      }
      continue;
    }

    if ((c->getCor() == corDesejada) ||
        (c->getAcao() == ultimaCartaJogada->getAcao())) {
      cartasPossiveis.push_back((int)i);
    }
  }

  return cartasPossiveis;
}

void Jogador::imprimirMao() {
  for (std::vector<carta::Carta*>::size_type i = 0; i != this->mao.size();
       i++) {
    Carta* c = this->mao[i];
    std::cout << std::to_string(i + 1) << ") [";

    int n = c->getNumero();
    std::cout << "Carta: ";

    if (n > -1) {
      std::cout << std::to_string(n);
    } else {
      std::cout << c->getAcao();
    }

    carta::Cor cor = c->getCor();
    if (cor != carta::CORINGA) {
      std::cout << ", Cor:" << carta::corParaString(cor);
    }

    std::cout << "]" << std::endl;
  }

  if (this->mao.size() == 2) {
    std::cout << "99) Gritar UNO!" << std::endl;
  }
}