#include <stdio.h>

int ehPrimo(int numero) {
    if (numero < 2) {
        return 0;
    }
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int vetor[10];

    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Posicao %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nElementos primos e suas posicloes no vetor:\n");
    for (int i = 0; i < 10; i++) {
        if (ehPrimo(vetor[i])) {
            printf("Posicao %d: %d\n", i + 1, vetor[i]);
        }
    }

    return 0;
}
