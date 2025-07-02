<h2>👻 Projeto Pac-Man em C 🕹️</h2>
<p>Este repositório contém o código C fundamental para um jogo semelhante ao Pac-Man, focado no carregamento do mapa, gerenciamento de memória e operações básicas de mapa.<br> 
É um excelente ponto de partida para quem quer construir um jogo retrô em C!</p>
<h2>🚀 Primeiros Passos</h2>
<p>Para colocar este projeto em funcionamento, siga estes passos simples:<br>
Pré-requisitos<br>
Você precisará de um compilador C (como o GCC) instalado em seu sistema.Compilando o Código
Navegue até o diretório do projeto no seu terminal e compile os arquivos C. Assumindo que você tenha pacman.c e mapa.c (e um arquivo de cabeçalho mapa.h), você pode compilá-los assim:<br>

  ```bash
gcc pacman.c mapa.c -o pacman.out ou .exe (depende de seu OS->Sistema Operacional)
``` 
Este comando compila ambos os arquivos-fonte e cria um executável chamado pacman.<br>
Executando o Jogo:
Após a compilação bem-sucedida, você pode executar o programa: 

```bash
./pacman.out ou .exe (depende de seu OS->Sistema Operacional)
``` 
</p>
<h3>Nota: Certifique-se de ter um arquivo mapa.txt no mesmo diretório do seu executável. Este arquivo define o layout do seu mapa de jogo.</h3>

<h2>🗺️ Formato do Arquivo de Mapa (mapa.txt)</h2>
<p>O arquivo mapa.txt é crucial para definir o mundo do seu jogo. 
  A primeira linha do arquivo deve conter dois inteiros: o número de linhas e colunas do seu mapa, separados por um espaço. 
  As linhas seguintes representam o mapa em si.

```bash
5 10
##########
#@.......#
#.P.G....#
#........#
##########
```
</p>

<h2>🌟 Principais Recursos</h2>
<p>Carregamento Dinâmico de Mapa: Lê as dimensões e o conteúdo do mapa a partir de mapa.txt.<br>
Gerenciamento de Memória: Aloca e libera corretamente a memória para o mapa, prevenindo vazamentos.<br>
Impressão do Mapa: Exibe o estado atual do mapa no console.<br>
Busca de Caracteres: Localiza caracteres específicos (como o jogador ou fantasmas) no mapa.</p>

<h2>📈 Possíveis Melhorias e Aprimoramentos Futuros</h2>
<p>Este projeto é uma base sólida, mas há muito espaço para expansão! Aqui estão algumas ideias para torná-lo ainda melhor: Lógica Central do Jogo 🎮<br>
Movimento do Jogador: Implemente funções para mover o jogador (@) pelo mapa com base na entrada do usuário.<br>
Detecção de Colisão: Adicione lógica para evitar que o jogador se mova através das paredes (#).<br>
IA dos Fantasmas: Desenvolva uma IA simples para que os fantasmas (G) persigam o jogador. Isso pode começar com movimento aleatório e progredir para algoritmos de busca de caminho.<br>
Estado do Jogo: Introduza um loop de jogo, pontuação, vidas e condições de vitória/derrota.<br>
Itens Coletáveis: Implemente pontos ou pastilhas que o jogador pode coletar, aumentando sua pontuação.<br></p>

<h2>🤝 Contribuição</h2>
<p>Sinta-se à vontade para fazer um fork deste repositório, fazer melhorias e enviar pull requests! Todas as contribuições são bem-vindas. Se você tiver alguma dúvida ou sugestão, por favor, abra uma issue.</p>

<h1>Divirta-se construindo seu jogo Pac-Man! 🕹️</h1>
