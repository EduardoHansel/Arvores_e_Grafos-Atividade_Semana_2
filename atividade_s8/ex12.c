#include <stdio.h>

int pesquisaBinaria(long arr[], int esq, int dir, long alvo) {
    while (esq <= dir) {
        int meio = esq + (dir - esq) / 2;

        if (arr[meio] == alvo) {
            return meio;
        }
        if (arr[meio] < alvo) {
            esq = meio + 1;
        }
        else {
            dir = meio -1;
        }
    }
    return -1;
}

int main() {
    long v[]={11987654321, 11991234567, 11993456789, 11995678901, 11997890123};
    int n = sizeof(v)/sizeof(v[0]);
    long alvo = 11995678901;

    int pos = pesquisaBinaria(v, 0, n-1, alvo);

    if (pos != -1) {
        printf("Alvo = %ld | Posição = %d", v[pos], pos);
        return 0;
    }
    printf("%ld não encontrado.", alvo);
}