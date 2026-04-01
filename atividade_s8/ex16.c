#include <stdio.h>

void pesquisaSequencial(int v[], int n, int alvo) {
    int cont = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == alvo) cont++;
    }
    printf("O candidato %d recebeu %d voto(s).", alvo, cont);
}

int main () {
    int v[]={3, 1, 4, 2, 5, 3, 2, 1, 4};
    int n = sizeof(v)/sizeof(v[0]);
    int alvo = 5;

    pesquisaSequencial(v, n, alvo);
}