#include <stdio.h>

int buscaSequencial(int vetor[], int n, int codigo) {
    for (int i = 0; i < n; i++) {
        if (vetor[i] == codigo) {
            return i;
        }
    }
    return -1;
}

int main() {
    int codigos[]={55, 12, 89, 33, 21, 90, 44};
    int n = sizeof(codigos)/sizeof(codigos[0]);

    int posicao = buscaSequencial(codigos, n, 44);

    if (posicao != -1) {
        printf("Código %d encontrado na posição %d.", codigos[posicao], posicao);
        return 0;
    }
    printf("Código não cadastrado.");
}
