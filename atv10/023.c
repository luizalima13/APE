#include <stdio.h>

int main() {
    float vetorX[5], vetorY[5];
    float produtoEscalar = 0.0;

    printf("Digite 5 numeros reais para o vetor X:\n");
    for (int i = 0; i < 5; i++) {
        printf("Posicao %d: ", i + 1);
        scanf("%f", &vetorX[i]);
    }

    printf("\nDigite 5 numeros reais para o vetor Y:\n");
    for (int i = 0; i < 5; i++) {
        printf("Posicao %d: ", i + 1);
        scanf("%f", &vetorY[i]);
    }

    for (int i = 0; i < 5; i++) {
        produtoEscalar += vetorX[i] * vetorY[i];
    }

    printf("\nConjunto X:\n");
    for (int i = 0; i < 5; i++) {
        printf("%.2f ", vetorX[i]);
    }

    printf("\nConjunto Y:\n");
    for (int i = 0; i < 5; i++) {
        printf("%.2f ", vetorY[i]);
    }

    printf("\n\nProduto Escalar: %.2f\n", produtoEscalar);

    return 0;
}
