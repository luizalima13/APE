#include <stdio.h>

int main() {
    int vetor1[10], vetor2[10], vetorResultante[20];

    printf("Digite 10 numeros inteiros para o primeiro vetor:\n");
    for (int i = 0; i < 10; i++) {
        printf("Posicao %d: ", i + 1);
        scanf("%d", &vetor1[i]);
    }

    printf("\nDigite 10 numeros inteiros para o segundo vetor:\n");
    for (int i = 0; i < 10; i++) {
        printf("Posicao %d: ", i + 1);
        scanf("%d", &vetor2[i]);
    }

    for (int i = 0; i < 10; i++) {
        vetorResultante[2 * i] = vetor1[i]; 
        vetorResultante[2 * i + 1] = vetor2[i];
    }

    printf("\nVetor Resultante:\n");
    for (int i = 0; i < 20; i++) {
        printf("%d ", vetorResultante[i]);
    }

    printf("\n");

    return 0;
}
