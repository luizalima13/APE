#include <stdio.h>

int main() {
    const int tamanho = 10;
    int vetor[tamanho];

    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    int maior = vetor[0];
    int posicaoMaior = 0;

    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            posicaoMaior = i;
        }
    }

    printf("\nVetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n\nO maior elemento do vetor e: %d\n", maior);
    printf("Ele se encontra na posicao: %d\n", posicaoMaior);

    return 0;
}
