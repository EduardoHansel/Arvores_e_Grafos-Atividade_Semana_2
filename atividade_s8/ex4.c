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
            dir = meio -1;
        }
    }
    return -1;
}

int main() {
    int ids[]={101, 203, 305, 407, 509, 611, 713};
    int n = sizeof(ids)/sizeof(ids[0]);

    int res = pesquisaBinaria(ids, 0, n - 1, 102);

    if (res != -1) {
        printf("Acesso permitido.");
        return 0;
    }
    printf("Usuário não encontrado.");
}