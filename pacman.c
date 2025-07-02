#include <stdio.h>
#include <stdlib.h>
#include "pacman.h"
#include "mapa.h"

MAPA m;
POSICAO heroi;

int acabou() {
   return 0;  
}

void move(char direcao){
    int x;
    int y;

    m.matriz[heroi.x][heroi.y] = '.';

    switch (direcao) {
        case 'a': 
        m.matriz[x][y-1] = '@';
        heroi.y--;
        break;

        case 'w':
        m.matriz[x-1][y] = '@';
        heroi.x--;
        break;

        case 's':
        m.matriz[x+1][y] = '@';
        heroi.x++;
        break;

        case 'd':
        m.matriz[x][y+1] = '@';
        heroi.y++;
        break;
    }
}

int main () {

    lemapa(&m);
    encontramapa(&m, &heroi, '@');

    do{ 

        imprimemapa(&m);

        char comando;
        scanf(" %c", &comando);
        move(comando);

    } while(!acabou());

    liberamapa(&m);

}