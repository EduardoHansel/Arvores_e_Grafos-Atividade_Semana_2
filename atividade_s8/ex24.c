#include <stdio.h>

void pesquisaBinaria(int arr[], int esq, int dir, int alvo) {
    while (esq <= dir) {
        int meio = esq + (dir - esq) / 2;

        if (arr[meio] == alvo) {
            printf("Número: %d | Posição de inserção: %d", alvo, meio);
            return;
        }
        if (arr[meio] < alvo) {
            esq = meio + 1;
        }
        else {
            dir = meio - 1;
        }
    }
    printf("Número: %d | Posição de inserção: %d", alvo, esq);
}

int main() {
    int v[]={5, 15, 25, 35, 45, 55};
    int n = sizeof(v)/sizeof(v[0]);
    int alvo = 100;

    pesquisaBinaria(v, 0, n-1, alvo);
}