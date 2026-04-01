#include <stdio.h>
#include <string.h>

int pesquisaSequencial(char arr[][10], int n, char *nome) {
    for (int i = 0; i < n; i++) {
        if (strcmp(nome, arr[i]) == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    char nomes[][10]={"Daniel","Ana","Eduarda","Carlos", "Bruna"};
    int n = sizeof(nomes)/sizeof(nomes[0]);
    char nome[]="Eduarda";

    int pos = pesquisaSequencial(nomes, n, nome);
    if (pos != -1) {
        printf("%s encontrado(a) na posição %d.", nome, pos);
        return 0;
    }
    printf("%s não encontrado na lista.", nome);
}