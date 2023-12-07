#include <stdio.h>

int main() {
    int vetorOriginal[10];
    int vetorImpares[10];
    int contadorImpares = 0;

    printf("Digite 10 numeros inteiros no intervalo (0 a 50):\n");

    for (int i = 0; i < 10; i++) {
        do {
            printf("Posicao %d: ", i + 1);
            scanf("%d", &vetorOriginal[i]);

            if (vetorOriginal[i] < 0 || vetorOriginal[i] > 50) {
                printf("Por favor, digite um numero (0 a 50).\n");
            }
        } while (vetorOriginal[i] < 0 || vetorOriginal[i] > 50);
    }

    for (int i = 0; i < 10; i++) {
        if (vetorOriginal[i] % 2 != 0) {
            vetorImpares[contadorImpares] = vetorOriginal[i];
            contadorImpares++;
        }
    }

    printf("\nVetor Original:\n");
    for (int i = 0; i < 10; i += 2) {
        printf("%d %d\n", vetorOriginal[i], vetorOriginal[i + 1]);
    }

    printf("\nVetor de Impares:\n");
    for (int i = 0; i < contadorImpares; i += 2) {
        printf("%d %d\n", vetorImpares[i], vetorImpares[i + 1]);
    }

    return 0;
}
