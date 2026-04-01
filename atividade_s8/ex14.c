#include <stdio.h>

void pesquisaBinaria(long arr[], int esq, int dir, long alvo) {
    int comparacoes = 0;
    while (esq <= dir) {
        ++comparacoes;
        int meio = esq + (dir - esq) / 2;

        if (arr[meio] == alvo) {
            printf("Alvo = %ld | Posição = %d | Etapas = %d", arr[meio], meio, comparacoes);
            return;
        }
        if (arr[meio] < alvo) {
            esq = meio + 1;
        }
        else {
            dir = meio - 1;
        }
    }
    printf("CPF não cadastrado.");
}

int main () {
    long v[]={12345678909,28765432100,31122233344,45566677788,49900011122};
    int n = sizeof(v)/sizeof(v[0]);
    long alvo = 31122233344;

    pesquisaBinaria(v, 0, n-1, alvo);
}