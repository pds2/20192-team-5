#ifndef JOGADOR_H
#define JOGADOR_H
#include <vector>
#include <string>

#include "carta/Carta.h"
#include "Mesa.h"

using namespace carta;

namespace uno {
class Jogador {
 private:
  std::string nome;
  std::vector<Carta*> mao;
  bool gritouUno;

 public:
  std::string getName();
  // Aguarda o input do jogador e retorna a carta da jogada
  Carta* proximoMovimento(Mesa* t);
  void setNome(std::string _nome);
  std::string getNome();
  bool getGritouUno();
};
}  // namespace uno

#endif