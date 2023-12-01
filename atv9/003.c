#include <stdio.h>

int main() {
    const int tamanho = 10;

    float vetorOriginal[tamanho];

    float vetorQuadrado[tamanho];

    printf("Digite 10 numeros reais:\n");

    for (int i = 0; i < tamanho; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%f", &vetorOriginal[i]);

        vetorQuadrado[i] = vetorOriginal[i] * vetorOriginal[i];
    }

    printf("\nVetor Original:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%.2f ", vetorOriginal[i]);
    }

    printf("\n\nVetor dos Quadrados:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%.2f ", vetorQuadrado[i]);
    }

    return 0;
}
