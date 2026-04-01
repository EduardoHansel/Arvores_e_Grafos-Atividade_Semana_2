#include <stdio.h>

void pesquisaSequencial(int arr[], int n, int alvo) {
    int comparacoes = 0;
    for (int i = 0; i < n; i++) {
        comparacoes++;
        if (arr[i] == alvo) {
            printf("SEQUENCIAL | Nº de comparações para encontrar %d = %d\n", alvo, comparacoes);
            break;
        }
    }
}

void pesquisaBinaria(int arr[], int esq, int dir, int alvo) {
    int comparacoes = 0;
    while (esq <= dir) {
        int meio = esq + (dir - esq) / 2;
        comparacoes++;
        if (arr[meio] == alvo) {
            printf("BINÁRIA | Nº de comparações para encontrar %d = %d\n", alvo, comparacoes);
            break;
        }
        if (arr[meio] < alvo) {
            esq = meio + 1;
        }
        else {
            dir = meio -1;
        }
    }
}

int main() {
    int array[1000];
    int n = sizeof(array)/sizeof(array[0]);

    for (int i = 0; i < n; i++) {
        array[i] = i + 1;
    }

    pesquisaSequencial(array, n, array[99]);
    pesquisaSequencial(array, n, array[199]);
    pesquisaSequencial(array, n, array[299]);
    pesquisaSequencial(array, n, array[399]);
    pesquisaSequencial(array, n, array[499]);
    pesquisaSequencial(array, n, array[599]);
    pesquisaSequencial(array, n, array[699]);
    pesquisaSequencial(array, n, array[799]);
    pesquisaSequencial(array, n, array[899]);
    pesquisaSequencial(array, n, array[999]);

    pesquisaBinaria(array, 0, n - 1, array[99]);
    pesquisaBinaria(array, 0, n - 1, array[199]);
    pesquisaBinaria(array, 0, n - 1, array[299]);
    pesquisaBinaria(array, 0, n - 1, array[399]);
    pesquisaBinaria(array, 0, n - 1, array[499]);
    pesquisaBinaria(array, 0, n - 1, array[599]);
    pesquisaBinaria(array, 0, n - 1, array[699]);
    pesquisaBinaria(array, 0, n - 1, array[799]);
    pesquisaBinaria(array, 0, n - 1, array[899]);
    pesquisaBinaria(array, 0, n - 1, array[999]);

    // PESQUISA SEQUENCIAL: com complexidade O(n), faz comparações de elemento em elemento até
    // encontrar o elemento desejado, sendo assim, se o objetivo for encontrar o número 500 no array
    // acima - por exemplo -, serão feitas 500 comparações.

    // PESQUISA BINÁRIA: com complexidade O(log n), o tempo de busca não escala de modo linear como
    // na pesquisa sequencial, dado que em cada iteração metade dos elementos candidatos são eliminados
    // reduzindo fortemente o número de comparações.

    // Considerando esse contexto de uma lista relativamente longa - 1000 elementos -, a pesquisa binária
    // é a melhor escolha em função da sua implementação, que descarta metade dos elementos candidatos
    // a cada iteração.
}