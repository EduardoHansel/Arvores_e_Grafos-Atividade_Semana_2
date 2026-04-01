#include <stdio.h>

void pesquisaBinariaIterativa(int arr[], int esq, int dir, int alvo) {
    printf("pesquisaBinariaIterativa\n");
    while (esq <= dir) {
        int meio = esq + (dir - esq) / 2;

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
    printf("Alvo %d não encontrado", alvo);
}

void pesquisaBinariaRecursiva(int arr[], int esq, int dir, int alvo) {
    // eu n sabia fazer isso aqui n, quem fez foi o Cláudio
    if (esq > dir) {
        printf("Alvo %d não encontrado\n", alvo);
        return;
    }

    int meio = esq + (dir - esq) / 2;

    if (arr[meio] == alvo) {
        printf("Alvo: %d | Posição: %d\n", alvo, meio);
        return;
    }
    if (arr[meio] < alvo) {
        pesquisaBinariaRecursiva(arr, meio + 1, dir, alvo);
    } else {
        pesquisaBinariaRecursiva(arr, esq, meio - 1, alvo);
    }
}

int main () {
    int v[]={2, 4, 6, 8, 10, 12, 14, 16};
    int n = sizeof(v)/sizeof(v[0]);
    int alvo = 5;

    pesquisaBinariaIterativa(v, 0, n-1, alvo);
    pesquisaBinariaRecursiva(v, 0, n-1, alvo);

    // Legibilidade: recursividade ainda me apavora um pouco, então eu prefiro a abordagem iterativa, mas
    // o código da abordagem recursiva parece ser mais limpo.

    // Uso de memória: a aborgem iterativa é mais eficiente por não usar pilha de chamadas. Na abordagem
    // recursiva a pilha pode estourar no contexto de um array muito grande.

}