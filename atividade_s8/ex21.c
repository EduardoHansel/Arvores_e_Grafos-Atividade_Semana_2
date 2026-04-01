#include <stdio.h>

void pesquisaSequencial(int v[], int n, int alvo) {
    int comparacoes = 0;
    for (int i = 0; i < n; i++) {
        comparacoes++;
        if (v[i] == alvo){
            printf("Página: %d | Posição: %d | Comparações: %d", v[i], i, comparacoes);
            return;
        }
    }
    printf("Página %d não visitada.", alvo);
}

int main () {
    int v[]={321, 105, 876, 432, 210, 654, 999, 111};
    int n = sizeof(v)/sizeof(v[0]);
    int alvo = 105;

    pesquisaSequencial(v, n, alvo);
}
