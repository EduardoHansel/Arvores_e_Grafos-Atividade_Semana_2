# include <stdio.h>

int pesquisaBinaria(int arr[], int esq, int dir, int alvo, int n) {
    while (esq <= dir) {
        int meio = esq + (dir - esq) / 2;
        if (arr[meio] == alvo) {
            printf("Aluno com nota %d encontrado na posição %d.\n", alvo, meio);
            if (n - meio != 0) return n - meio;
            return 0;
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
    int array[]={2, 3, 5, 6, 7, 8, 9, 10};
    int n = sizeof(array)/sizeof(array[0]);
    int alvo = 10;

    int res = pesquisaBinaria(array, 0, n - 1, alvo, n - 1);

    if (res != -1) {
        if (res == 0) {
            printf("Ninguém tirou uma nota maior que %d.", alvo);
            return 0;
        }
        printf("%d aluno(s) tirou/tiraram uma nota maior que %d", res, alvo);
        return 0;
    }
    printf("Não há um aluno que tinha tirado a nota %d.", alvo);
}