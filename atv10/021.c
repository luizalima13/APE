#include <stdio.h>

int main() {
    int vetorA[10], vetorB[10], vetorC[10];

    printf("Digite 10 numeros inteiros para o vetor A:\n");
    for (int i = 0; i < 10; i++) {
        printf("Posicao %d: ", i + 1);
        scanf("%d", &vetorA[i]);
    }

    printf("\nDigite 10 numeros inteiros para o vetor B:\n");
    for (int i = 0; i < 10; i++) {
        printf("Posicao %d: ", i + 1);
        scanf("%d", &vetorB[i]);
    }

    for (int i = 0; i < 10; i++) {
        vetorC[i] = vetorA[i] - vetorB[i];
    }

    printf("\nVetor C (C = A - B):\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetorC[i]);
    }

    printf("\n");

    return 0;
}
