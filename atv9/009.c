#include <stdio.h>

int main() {
    const int tamanho = 6;
    int vetor[tamanho];

    printf("Digite 6 valores inteiros pares:\n");
    for (int i = 0; i < tamanho; i++) {
        do {
            printf("Valor %d: ", i + 1);
            scanf("%d", &vetor[i]);

            if (vetor[i] % 2 != 0) {
                printf("Por favor, digite um valor par.\n");
            }
        } while (vetor[i] % 2 != 0);
    }

    printf("\nValores na ordem inversa:\n");
    for (int i = tamanho - 1; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
