# guess_number_game_in_c
🎯 Guess Number Game (C)

Um simples jogo de adivinhação feito em linguagem C, onde o jogador tenta descobrir um número aleatório gerado pelo programa.

📌 Sobre o projeto

Este projeto foi criado com o objetivo de praticar:

Lógica de programação em C
Uso de funções padrão (rand, srand, time)
Estruturas de repetição (do while)
Entrada de dados com scanf
Organização básica de um projeto em C
🎮 Como o jogo funciona
O programa gera um número aleatório entre 1 e 100
O jogador tenta adivinhar o número
O jogo conta quantas tentativas foram feitas
O jogador pode sair digitando -1
🧠 Lógica do jogo
Um número secreto é gerado com:
rand() % (max - min + 1) + min
O loop continua até:
o jogador acertar o número OU
digitar -1
▶️ Como compilar e executar
📍 Usando GCC

Entre na pasta do projeto:

cd guess_number_game

Compile o código:

gcc main.c -o game.exe

Execute:

./game.exe

(No Windows também pode ser:)

game.exe
🧾 Exemplo de uso
-------- NUMBER GUESS GAME ---------
guess a number between 1 and 100: 50
try again? (-1 to quit): 1
guess a number between 1 and 100: 75
try again? (-1 to quit): 1
guess a number between 1 and 100: 63
try again? (-1 to quit): -1

the answer is 63
it took 3 tries
📂 Estrutura do projeto
guess_number_game/
│
├── main.c
└── README.md
🚀 Possíveis melhorias futuras
Sistema de dificuldade (easy / medium / hard)
Dicas ("maior" ou "menor")
Limite de tentativas
Interface mais amigável
Sistema de pontuação
👨‍💻 Autor

Feito por Rafael (em aprendizado de C e desenvolvimento de jogos 🎮)

Se quiser, posso deixar esse README ainda mais profissional com:

badge do GitHub
GIF do jogo rodando
versão em inglês
layout estilo “projeto de portfólio”

Só me fala 👍
