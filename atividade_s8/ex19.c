#include <stdio.h>

void pesquisaSequencial(int v[], int n) {
    for (int i=0; i<n; i++) {
        int contador = 0;
        for (int j=i; j<n; j++) {
            if (v[i] == v[j]) {
                contador++;
            }
        }
        if (contador >= 2) {
            printf("Número repetido: %d | Ocorrências: %d\n", v[i], contador);
        }
    }
}

int main () {
    int v[]={12, 45, 12, 67, 89, 45, 23};
    int n = sizeof(v)/sizeof(v[0]);

    pesquisaSequencial(v, n);
}