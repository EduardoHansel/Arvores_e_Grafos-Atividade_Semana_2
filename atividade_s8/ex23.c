#include <stdio.h>

void pesquisaSequencial(int arr[], int n, int alvo) {
    int asdf = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == alvo) {
            asdf = 1;
            printf("Alvo: %d | Posição: %d\n", arr[i], i);
        }
    }
    if (asdf == 0) printf("%d não encontrado.", alvo);
}

int main () {
    int v[]={10, 25, 10, 30, 45, 25, 60, 10};
    int n = sizeof(v)/sizeof(v[0]);
    int alvo = 10;

    pesquisaSequencial(v, n, alvo);
}