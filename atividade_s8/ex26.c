#include <stdio.h>

void buscaSequencial(int arr[], int n, int alvo) {
    int comp = 0;
    for (int i = 0; i < n; i++) {
        comp++;
        if (arr[i] == alvo) {
            printf("Alvo: %d | Posição: %d | Comparações: %d\n", arr[i], i, comp);
            return;
        }
    }
    printf("%d não encontrado | Comparações: %d\n", alvo, comp);
}

int main() {
    int n = 500;
    int v[500];

    for (int i = 0; i < n; i++) v[i] = i + 1;

    printf("Melhor caso:\n"); // Alvo já está na primeira posição, logo apenas uma comparação é feita
    buscaSequencial(v, n, 1);

    printf("Pior caso:\n"); // Alvo está na última posição, logo todas as comparações são feitas
    buscaSequencial(v, n, 500);
}