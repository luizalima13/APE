#include <stdio.h>

int main() {
    int vetor[20];

    printf("Digite 20 numeros inteiros:\n");

    for (int i = 0; i < 20; i++) {
        printf("Posicao %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nVetor sem elementos repetidos:\n");

    for (int i = 0; i < 20; i++) {
        int repetido = 0;

        for (int j = 0; j < i; j++) {
            if (vetor[i] == vetor[j]) {
                repetido = 1;
                break;
            }
        }

        if (!repetido) {
            printf("%d\n", vetor[i]);
        }
    }

    return 0;
}
