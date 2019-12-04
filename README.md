# UNO

O projeto escolhido pelo grupo para o trabalho prático foi o jogo de cartas Uno, feito em c++.

## Executando o projeto
```sh
# compilando o código do projeto
make all

# rodando o jogo
make run
```

## Sobre o jogo


**Regras do UNO**:

Foi criado o Jogo Uno em c++ com dois jogadores. Cada jogador começa com sete cartas, e elas são distribuídas com a face para baixo. O restante das cartas são colocadas em uma pilha  com a face para baixo chamada baralho. Ao lado da pilha, há um espaço designado para uma outra pilha chamada de descarte. A carta do topo deve ser colocada na pilha de descarte e o jogo começa!

O jogo possui 108 cartas divididas em 4 cores : Amarelo, Vermelho, Verde e Azul de 0 a 9. Além disso, há  as carts especiais que não tem cor e possuem uma ação, por exemplo, "coringa Comprar4".


Para jogar uma carta você precisa corresponder pelo número, cor ou símbolo / Ação. Por exemplo, se a Pilha de descarte tiver um cartão vermelho que é um 8, você deverá colocar um cartão vermelho ou um cartão com um 8. Você também pode jogar um coringa (que pode alterar a cor atual em jogo).

Se essa carta puder ser jogada, jogue-a. Caso contrário, mantenha a carta e o jogo passará para a próxima pessoa. Você também pode jogar uma carta coringa ou coringa quatro no seu turno.


Se a primeira carta exibida na pilha de empate (para formar a pilha de descarte) for uma carta de ação, a ação dessa carta se aplica e deve ser executada pelo primeiro jogador a sair (conforme indicado, geralmente é o jogador para a pilha). revendedor esquerdo). 

**Estrutura do jogo:**

Para fazer o projeto do jogo criamos uma classe base chamada Carta que possui atributos Cor e Numero. Essa carta possuia uma funcao virtual que seria sobrescrita de acordo com a acao das seguintes cartas.  Depois criamos uma classe para cada tipo de carta especial que herdou as caracteristicas da carta mãe e possuem um polimorfismo na funcao. 

Há também as classses jogador que seram os participantes do jogo, a classe mesa que é onde fica os baralhos e as ações de troca entre carta da mao, baralho e descarte.

Há a classe jogo que regula o "estado" do sistema (nela é armazenado os ponteiros para cada jogador, baralho, pilha de descarte. 

**Como funciona o Jogo:**

Primeiro voce deve escolher o nome para o jogador um e suas cartas serão impressas na tela.

![inicio do jogo](https://raw.githubusercontent.com/pds2/20192-team-5/master/doc/Inicio%20do%20jogo.jpg)


No jogo a mão do jogador é impressa na tela aparecendo a cor da carta, número e a ação(caso nao tenha cor).

![mao do jogador um  que é impressa na tela](https://raw.githubusercontent.com/pds2/20192-team-5/master/doc/mao%20jogador.jpg)

Assim o jogador escolhe o número da carta que ele quer jogar. Caso essa carta possa ser jogada o jogo continua com o próximo jogador. Caso contrário, é enviada uma mensagem de jogada inválida e o jogador atual deve jogar novamente. 

![jogador dois entra com uma opção de carta inválida](https://raw.githubusercontent.com/pds2/20192-team-5/master/doc/jogadores%201%20e%202%20.jpg)

O jogo continua até que um dos jogadores chega a zero cartas. Nesse caso, aquele que ficar com zero cartas é o vencedor!


Referência:
https://www.unorules.com/

