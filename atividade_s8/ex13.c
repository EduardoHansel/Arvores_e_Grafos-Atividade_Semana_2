#include <stdio.h>

int comparacoes = 0;

void pesquisaSequencial(int arr[], int n, int alvo) {
    for (int i = 0; i < n; i++) {
        comparacoes++;
        if (arr[i] == alvo) {
            printf("A leitura %d já foi realizada. Nº de comparações = %d", alvo, comparacoes);
            return;
        }
    }
    printf("Leitura %d não relizada.", alvo);
}

int main () {
    int v[]={45, 12, 78, 33, 90, 21, 56, 67};
    int n = sizeof(v)/sizeof(v[0]);
    int alvo = 12;

    pesquisaSequencial(v, n, alvo);
}