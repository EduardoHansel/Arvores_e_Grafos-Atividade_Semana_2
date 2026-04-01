#include <stdio.h>

void pesquisaBinaria(int arr[], int esq, int dir, int alvo) {
    int pos = 0;
    while (esq <= dir) {
        int meio = esq + (dir - esq) / 2;

        if (arr[meio] == alvo) {
            printf("%d graus registrado na posição %d.", arr[meio], meio);
            return;
        }
        if (arr[meio] < alvo) {
            esq = meio + 1;
        }
        else {
            dir = meio - 1;
            pos = meio;
        }
    }
    printf("%d pode ser registrado no posição %d.", alvo, pos);
}

int main() {
    int v[]={15, 17, 19, 21, 23, 25, 27, 30};
    int n = sizeof(v)/sizeof(v[0]);
    int alvo = 22;

    pesquisaBinaria(v, 0, n-1, alvo);
}