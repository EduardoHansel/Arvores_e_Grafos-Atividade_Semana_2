#include <stdio.h>

int pesquisaBinaria(int arr[], int esq, int dir, int alvo) {
    while (esq <= dir) {
        int meio = esq + (dir - esq) / 2;

        if (arr[meio] == alvo) {
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

int main () {
    int v[]={5,10,15,20,25,30};
    int n = sizeof(v)/sizeof(v[0]);
    int alvo = 5;

    int pos = pesquisaBinaria(v, 0, n-1, alvo);

    if (pos != -1) {
        printf("%d encontrado na posição %d.", v[pos], pos);
        return 0;
    }
    printf("%d não encontrado.", alvo);
}