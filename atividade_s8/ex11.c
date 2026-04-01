#include <stdio.h>

int comparacoes = 0;

int pesquisaSequencial(int arr[], int n, int alvo) {
    for (int i = 0; i < n; i++) {
        comparacoes++;
        if (arr[i] == alvo) {
            return i;
        }
    }
    return -1;
}

int main() {
    int v[]={903, 112, 457, 221, 678, 345, 789, 150};
    int n = sizeof(v)/sizeof(v[0]);
    int alvo = 221;

    int pos = pesquisaSequencial(v, n, alvo);

    if (pos != -1) {
        printf("Alvo = %d | Posição = %d | Comparações = %d", v[pos], pos, comparacoes);
        return 0;
    }
    printf("%d não encontrado no array.", alvo);
}