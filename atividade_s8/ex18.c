#include <stdio.h>

void pesquisaSequencial(int v[], int n, int alvo) {
    for (int i = 0; i < n; i++) {
        if (v[i] == alvo){
            printf("Filme: %d | Posição: %d", v[i], i);
            return;
        }
    }
    printf("Filme %d não encontrado | Elementos verificados: %d", alvo, n);
}

int main () {
    int v[]={501, 123, 876, 234, 654, 345, 999};
    int n = sizeof(v)/sizeof(v[0]);
    int alvo = 99;

    pesquisaSequencial(v, n, alvo);
}
