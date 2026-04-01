#include <stdio.h>

void pesquisaSequencial(int arr[], int n, int alvo) {
    int comp = 0;
    for (int i = 0; i < n; i++) {
        comp++;
        if (arr[i] == alvo) {
            printf("Alvo: %d | Posição: %d | Verificações: %d", arr[i], i, comp);
            return;
        }
    }
}

int main () {
    int v[]={77, 12, 89, 34, 56, 23, 90};
    int n = sizeof(v)/sizeof(v[0]);
    int alvo = 56;

    pesquisaSequencial(v, n, alvo);
}