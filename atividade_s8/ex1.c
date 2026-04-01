#include <stdio.h>

int buscaSequencial(int vetor[], int n, int matricula) {
    for (int i = 0; i < n; i++) {
        if (vetor[i] == matricula) {
            printf("O aluno está presente.\n");
            return i;
        }
    }
    return -1;
}

int main() {
    int matriculas[]={512, 102, 678, 205, 789, 317, 404};
    int n = sizeof(matriculas)/sizeof(matriculas[0]);

    int posicao = buscaSequencial(matriculas, n, 512);

    if (posicao != -1) {
        printf("Aluno com matrícula %d encontrado na posição %d.", matriculas[posicao], posicao);
    }
}