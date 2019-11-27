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

 public:
  Jogador(std::string nome, Mesa* mesa);
  std::string getName();
  std::string getNome();
  // Aguarda o input do jogador e retorna a carta da jogada
  Carta* proximoMovimento(Mesa* t);
  bool getGritouUno();
  void setNome(std::string _nome);
  void imprimirMao();
  ~Jogador();
};
}  // namespace uno

#endif