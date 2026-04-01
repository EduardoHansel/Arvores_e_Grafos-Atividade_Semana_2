#include <stdio.h>

void imprimirArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n\n");
}

void shellSort(int arr[], int n) {
    for (int gap = n / 2; gap > 0; gap/=2) {
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j = i;
            while (j >= gap && arr[j - gap] > temp) {
                arr[j] = arr[j - gap];
                j -= gap;
            }
            arr[j] = temp;
        }
    }
    printf("Array após ordenação:\n");
    imprimirArray(arr, n);
}

void pesquisaBinaria(int arr[], int esq, int dir, int alvo) {
    while (esq <= dir) {
        int meio = esq + (dir - esq) / 2;

        if (arr[meio] == alvo) {
            printf("Alvo: %d | Posição = %d", arr[meio], meio);
            return;
        }
        if (arr[meio] < alvo) {
            esq = meio + 1;
        }
        else {
            dir = meio - 1;
        }
    }
    printf("%d não encontrado.", alvo);
}

int main () {
    int v[]={88, 23, 45, 12, 67, 34, 90, 10};
    int n = sizeof(v)/sizeof(v[0]);
    int alvo = 12;

    shellSort(v, n);
    pesquisaBinaria(v, 0, n-1, alvo);

    // Sem ordenação, a única opção de busca é a ordenação sequencial, uma vez que a ordenação binária
    // depende da lista já estar ordenada para realizar uma busca. Com a lista ordenada, a pesquisa
    // binária pode ser usada e seu custo é O(log n).
}