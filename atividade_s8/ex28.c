#include <stdio.h>

void pesquisaBinaria(int arr[], int esq, int dir, int alvo) {
    while (esq <= dir) {
        int meio = esq + (dir - esq) / 2;

        printf("Esquerda: %d | Meio: arr[%d] = %d | Direita: %d\n", esq, meio, arr[meio], dir);

        if (arr[meio] == alvo) {
            printf("Alvo: %d | Posição: %d", alvo, meio);
            return;
        }
        if (arr[meio] < alvo) {
            esq = meio + 1;
        }
        else {
            dir = meio - 1;
        }
    }
    printf("Alvo %d não encontrado.", alvo);
}

int main() {
    int v[]={11, 22, 33, 44, 55, 66, 77};
    int n = sizeof(v)/sizeof(v[0]);
    int alvo = 5;

    pesquisaBinaria(v, 0, n-1, alvo);
}