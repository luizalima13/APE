#include <stdio.h>

int main() {
    int vetor[10];

    printf("Digite 10 numeros inteiros:\n");

    for (int i = 0; i < 10; i++) {
        printf("Posicao %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nVetor com elementos negativos substituidos por 0:\n");

    for (int i = 0; i < 10; i++) {
        if (vetor[i] < 0) {
            vetor[i] = 0;
        }
        printf("%d ", vetor[i]);
    }

    printf("\n");

    return 0;
}
