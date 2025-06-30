#include <stdio.h>
#include <stdlib.h>

int main () {
    char mapa[5] [10];

    FILE* f;
    f = fopen("mapa.txt", "r");
    if (f == 0) {
        printf("Erro ao abrir o arquivo\n");
        exit (1);
    }

    for (int i = 0; i < 4; i++){
    fscanf(f, "s", mapa[i]);
    }

}