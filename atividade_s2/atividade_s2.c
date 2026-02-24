#include <stdio.h>
#include <time.h>

int n_comparacoes = 0, n_trocas = 0;

void bubbleSort(int arr[], int n){
    int temp, trocou;
    for(int i = 0; i < n - 1; i++) {
        trocou = 0;
        for(int j = 0; j < n - 1; j++) {
            n_comparacoes++;
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                trocou = 1;
                n_trocas++;
            }
        }
        if(trocou == 0) {
            break;
        }
    }
}

void selectionSort(int arr[], int n) {
    int temp, min_idx;
    for (int i = 0; i < n - 1 - i; i++) {
        min_idx = i;
        for (int j = i + 1; j < n; j++) {
            n_comparacoes++;
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            temp = arr[min_idx];
            arr[min_idx] = arr[i];
            arr[i] = temp;
            n_trocas++;
        }
    }
}

void imprimirArray(int arr[], int n){
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    clock_t inicio, fim;
    int arr100[100], arr1000[1000], arr10000[10000];

    // Preenchendo os arrays
    for (int i = 1; i <= 100; i++) {
        arr100[100 - i] = i;
    }
    for (int i = 1; i <= 1000; i++) {
        arr1000[1000 - i] = i;
    }
    for (int i = 1; i <= 10000; i++) {
        arr10000[10000 - i] = i;
    }

    int n100 = sizeof(arr100) / sizeof(arr100[0]);
    int n1000 = sizeof(arr1000) / sizeof(arr10000[0]);
    int n10000 = sizeof(arr10000) / sizeof(arr10000[0]);

    printf("-----------------------------------------------------------------------\n");
    printf("| Algoritmo      | Tamanho | Tempo (ms) | Comparações | Movimentações |\n");

    inicio = clock();
    bubbleSort(arr100, n100);
    fim = clock();
    double tempo_ms = (double)(fim - inicio) * 1000 / CLOCKS_PER_SEC;

    printf("-----------------------------------------------------------------------\n");
    printf("| Bubble Sort    | 100     | %.3f      | %d        | %d          |\n", tempo_ms, n_comparacoes, n_trocas);

    n_trocas = 0;
    n_comparacoes = 0;

    inicio = clock();
    bubbleSort(arr1000, n1000);
    fim = clock();
    tempo_ms = (double)(fim - inicio) * 1000 / CLOCKS_PER_SEC;

    printf("-----------------------------------------------------------------------\n");
    printf("| Bubble Sort    | 1000    | %.3f      | %d      | %d        |\n", tempo_ms, n_comparacoes, n_trocas);

    n_trocas = 0;
    n_comparacoes = 0;

    inicio = clock();
    bubbleSort(arr10000, n10000);
    fim = clock();
    tempo_ms = (double)(fim - inicio) * 1000 / CLOCKS_PER_SEC;

    printf("-----------------------------------------------------------------------\n");
    printf("| Bubble Sort    | 10000   | %.3f    | %d    | %d      |\n", tempo_ms, n_comparacoes, n_trocas);

    // Recriando os arrays
    for (int i = 1; i <= 100; i++) {
        arr100[100 - i] = i;
    }
    for (int i = 1; i <= 1000; i++) {
        arr1000[1000 - i] = i;
    }
    for (int i = 1; i <= 10000; i++) {
        arr10000[10000 - i] = i;
    }

    n_trocas = 0;
    n_comparacoes = 0;

    inicio = clock();
    selectionSort(arr100, n100);
    fim = clock();
    tempo_ms = (double)(fim - inicio) * 1000 / CLOCKS_PER_SEC;

    printf("-----------------------------------------------------------------------\n");
    printf("| Selection Sort | 100     | %.3f      | %d        | %d            |\n", tempo_ms, n_comparacoes, n_trocas);

    n_trocas = 0;
    n_comparacoes = 0;

    inicio = clock();
    selectionSort(arr1000, n1000);
    fim = clock();
    tempo_ms = (double)(fim - inicio) * 1000 / CLOCKS_PER_SEC;

    printf("-----------------------------------------------------------------------\n");
    printf("| Selection Sort | 1000    | %.3f      | %d      | %d           |\n", tempo_ms, n_comparacoes, n_trocas);

    n_trocas = 0;
    n_comparacoes = 0;

    inicio = clock();
    selectionSort(arr10000, n10000);
    fim = clock();
    tempo_ms = (double)(fim - inicio) * 1000 / CLOCKS_PER_SEC;

    printf("-----------------------------------------------------------------------\n");
    printf("| Selection Sort | 10000   | %.3f     | %d    | %d          |\n", tempo_ms, n_comparacoes, n_trocas);
    printf("-----------------------------------------------------------------------\n");

    return 0;
}