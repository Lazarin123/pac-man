struct mapa { 
    char** matriz;
    int linhas;
    int colunas;
};

void liberamapa(MAPA* m);
void alocamapa(MAPA* m);
void lemapa(MAPA* m);
void imprimemapa(MAPA* m);

typedef struct mapa MAPA;