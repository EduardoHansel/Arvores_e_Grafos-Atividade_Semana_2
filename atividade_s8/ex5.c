#include <stdio.h>

void imprimirArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void shellSort(int arr[], int n) {
    printf("Array pré ordenação:\n");
    imprimirArray(arr, n);
    for (int gap = n / 2; gap > 0; gap /= 2) {
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

int pesquisaBinaria(int arr[], int esq, int dir, int alvo) {
    while (esq <= dir) {
        int meio = esq + (dir - esq) / 2;
        if (arr[meio] == alvo) {
            return meio;
        }
        if (arr[meio] < alvo) {
            esq = meio + 1;
        }
        else {
            dir = meio -1;
        }
    }
    return -1;
}

int main() {
    int v[]={45, 12, 78, 3, 56, 89, 23, 67};
    int n = sizeof(v)/sizeof(v[0]);
    int alvo = 67;

    shellSort(v, n);

    int pos = pesquisaBinaria(v, 0, n - 1, alvo);
    if (pos != -1) {
        printf("\n%d encontrado no posição %d.", v[pos], pos);
        return 0;
    }
    printf("\nAlvo (%d) não encontrado.", alvo);
}