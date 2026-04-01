#include <stdio.h>

void pesquisaBinaria(int arr[], int esq, int dir, int alvo) {
    while (esq <= dir) {
        int meio = esq + (dir - esq) / 2;

        printf("Início: %d | Meio: %d | Fim: %d\n", esq, meio, dir);

        if (arr[meio] == alvo) {
            printf("Código: %d | Posição: %d", arr[meio], meio);
            return;
        }
        if (arr[meio] < alvo) {
            esq = meio + 1;
        }
        else {
            dir = meio - 1;
        }
    }
    printf("Código %d não encontrado.", alvo);
}

int main () {
    int v[]={1001, 1020, 1055, 1100, 1200, 1300, 1500};
    int n = sizeof(v)/sizeof(v[0]);
    int alvo = 1055;

    pesquisaBinaria(v, 0, n-1, alvo);
}