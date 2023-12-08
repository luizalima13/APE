#include <stdio.h>

#define LINHAS 61
#define COLUNAS 10

void somarColunasMatriz(int matriz[LINHAS][COLUNAS]) {
    for (int j = 0; j < COLUNAS; j++) {
        int somaColuna = 0;
        for (int i = 0; i < LINHAS - 1; i++) {
            somaColuna += matriz[i][j];
        }
        matriz[LINHAS - 1][j] = somaColuna;
    }
}

void imprimirMatriz(int matriz[LINHAS][COLUNAS]) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[LINHAS][COLUNAS];

    for (int i = 0; i < LINHAS - 1; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            matriz[i][j] = i * COLUNAS + j + 1;
        }
    }

    printf("Matriz original:\n");
    imprimirMatriz(matriz);

    somarColunasMatriz(matriz);

    printf("\nMatriz alterada:\n");
    imprimirMatriz(matriz);

    return 0;
}
