#include <stdio.h>

int iteracoes = 0;

int pesquisaBinaria(int arr[], int esq, int dir, int alvo) {

    while (esq <= dir) {
        iteracoes++;
        int meio = esq + (dir - esq) / 2;

        if (arr[meio] == alvo) {
            printf("Alvo encontrado | Nº de iterações -> %d.\n", iteracoes);
            return meio;
        }
        if (arr[meio] < alvo) {
            esq = meio + 1;
        }
        else {
            dir = meio - 1;
        }
    }
    return -1;
}

int main() {
    int ids[]={10, 23, 35, 47, 59, 62, 78, 91};
    int n = sizeof(ids)/sizeof(ids[0]);
    int alvo = 92;

    int pos = pesquisaBinaria(ids, 0, n - 1, alvo);

    if (pos != -1) {
        printf("ID %d encontrado na posição %d.\n", alvo, pos);
        return 0;
    }
    printf("%d não foi encontrado na lista | Nº de iterações -> %d", alvo, iteracoes);
}