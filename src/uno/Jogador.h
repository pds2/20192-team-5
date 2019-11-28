#ifndef JOGADOR_H
#define JOGADOR_H
#include <string>
#include <vector>

#include "Mesa.h"
#include "carta/Carta.h"

using namespace carta;

namespace uno {
class Jogador {
 private:
  std::string nome;
  std::vector<Carta*> mao;

  bool gritouUno;
  std::vector<int> getCartasPossiveis(Carta* c, Cor corDesejada);
  Carta* aguardarInput(std::vector<int> cartasPossiveis, Carta* ultimaCartaJogada);
  void comprarCartas(Mesa *m, int quantidade);
 public:
  Jogador(std::string nome, Mesa* mesa);
  std::string getNome();
  // Aguarda o input do jogador e retorna a carta da jogada
  Carta* proximoMovimento(Mesa *m);
  bool getGritouUno();
  void setNome(std::string _nome);
  void imprimirMao();
  Cor perguntarCor();
  ~Jogador();
};
}  // namespace uno

#endif