#include "Jogador.h"

#include <iostream>
#include <string>

using namespace uno;

void Jogador::setNome(std::string nome) {
  this->nome = nome;
}

std::string Jogador::getNome() {
  return this->nome;
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