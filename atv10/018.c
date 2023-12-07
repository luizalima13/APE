#include <stdio.h>

int main() {
    int vetor[10];
    int X;
    int contadorMultiplos = 0;

    printf("Digite 10 numeros inteiros:\n");

    for (int i = 0; i < 10; i++) {
        printf("Posicao %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Digite um numero inteiro X: ");
    scanf("%d", &X);

    printf("\nMultiplos de %d no vetor:\n", X);

    for (int i = 0; i < 10; i++) {
        if (vetor[i] % X == 0) {
            printf("%d ", vetor[i]);
            contadorMultiplos++;
        }
    }

    if (contadorMultiplos == 0) {
        printf("Nenhum multiplo de %d encontrado no vetor.\n", X);
    }

    printf("\n");

    return 0;
}
