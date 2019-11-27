#include "Jogador.h"

#include <iostream>
#include <string>

using namespace uno;

Jogador::Jogador(std::string nome, Mesa* mesa) {
  this->nome = nome;

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

Jogador::~Jogador() {
  for (auto it = this->mao.begin(); it != this->mao.end(); it++) {
    this->mao.erase(it);
  }
}

std::string corParaString(carta::Cor c) {
  switch (c) {
    case carta::VERMELHO:
      return "Vermelha";
    case carta::AMARELO:
      return "Amarela";
    case carta::VERDE:
      return "Verde";
    case carta::AZUL:
      return "Azul";
    default:
      return "";
  }
}

void Jogador::imprimirMao() {
  for (std::vector<carta::Carta*>::size_type i = 0; i != this->mao.size();
       i++) {
    Carta* c = this->mao[i];
    std::cout << "--------------------------------------" << std::endl;
    std::cout << std::to_string(i) << ") [";

    int n = c->getNumero();
    std::cout << "Carta: ";

    if (n > -1) {
      std::cout << std::to_string(n);
    } else {
      std::cout << c->getAcao();
    }

    carta::Cor cor = c->getCor();
    if (cor != carta::CORINGA) {
      std::cout << ", Cor:" << corParaString(cor);
    }

    std::cout << "]" << std::endl;
  }
  // for(int i = 0; i < mao.size(); i++) {
  //     std::cout<<"--------------------------------------"<<std::endl;
  //     std::cout<<mao[i]->acao()<<std::endl;
  //     if(mao[i]->retornarNumero() != -1)
  //         std::cout<<mao[i]->retornarNumero()<<std::endl;
  //     //std::cout<<mao[i]->retornarCor()<<std::endl;

  //     if(mao[i]->retornarCor() == 0)
  //         std::cout<<"azul"<<std::endl;
  //     else if(mao[i]->retornarCor() == 1)
  //         std::cout<<"amarelo"<<std::endl;
  //     else if(mao[i]->retornarCor() == 2)
  //         std::cout<<"verde"<<std::endl;
  //     else if(mao[i]->retornarCor() == 3)
  //         std::cout<<"vermelho"<<std::endl;
  // }
}

// void Jogador::imprimirMao() {  // imprimir mao
//   for (int i = 0; i < mao.size(); i++) {
//     std::cout << "--------------------------------------" << std::endl;
//     std::cout << mao[i]->acao() << std::endl;
//     if (mao[i]->retornarNumero() != -1)
//       std::cout << mao[i]->retornarNumero() << std::endl;
//     // std::cout<<mao[i]->retornarCor()<<std::endl;

//     if (mao[i]->retornarCor() == 0) {
//       std::cout << "azul" << std::endl;
//     } else if (mao[i]->retornarCor() == 1) {
//       std::cout << "amarelo" << std::endl;
//     } else if (mao[i]->retornarCor() == 2) {
//       std::cout << "verde" << std::endl;
//     } else if (mao[i]->retornarCor() == 3) {
//       std::cout << "vermelho" << std::endl;
//     }
//   }
// }

// void Uno() {
//   if (mao.size() == 1)
//     this->Uno = true;
// }