#include <stdio.h>

int main() {
    const int tamanho = 6;
    int vetor[tamanho];

    printf("Digite 6 valores inteiros:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nValores na ordem inversa:\n");
    for (int i = tamanho - 1; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
