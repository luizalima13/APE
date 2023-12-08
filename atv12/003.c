#include <stdio.h>

#define TAMANHO_MATRIZ 10

void realizarTrocasMatriz(int matrizA[TAMANHO_MATRIZ][TAMANHO_MATRIZ]) {
    for (int i = 0; i < TAMANHO_MATRIZ; i++) {
        int temp = matrizA[1][i];
        matrizA[1][i] = matrizA[7][i];
        matrizA[7][i] = temp;
    }

    for (int i = 0; i < TAMANHO_MATRIZ; i++) {
        int temp = matrizA[i][3];
        matrizA[i][3] = matrizA[i][9];
        matrizA[i][9] = temp;
    }

    for (int i = 0; i < TAMANHO_MATRIZ; i++) {
        int temp = matrizA[i][i];
        matrizA[i][i] = matrizA[i][TAMANHO_MATRIZ - 1 - i];
        matrizA[i][TAMANHO_MATRIZ - 1 - i] = temp;
    }

    for (int i = 0; i < TAMANHO_MATRIZ; i++) {
        int temp = matrizA[4][i];
        matrizA[4][i] = matrizA[i][9];
        matrizA[i][9] = temp;
    }
}

void imprimirMatriz(int matriz[TAMANHO_MATRIZ][TAMANHO_MATRIZ]) {
    for (int i = 0; i < TAMANHO_MATRIZ; i++) {
        for (int j = 0; j < TAMANHO_MATRIZ; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrizA[TAMANHO_MATRIZ][TAMANHO_MATRIZ];

    for (int i = 0; i < TAMANHO_MATRIZ; i++) {
        for (int j = 0; j < TAMANHO_MATRIZ; j++) {
            matrizA[i][j] = i * TAMANHO_MATRIZ + j + 1;
        }
    }

    printf("Matriz original:\n");
    imprimirMatriz(matrizA);

    realizarTrocasMatriz(matrizA);

    printf("\nMatriz alterada:\n");
    imprimirMatriz(matrizA);

    return 0;
}
