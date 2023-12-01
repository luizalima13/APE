#include <stdio.h>

int main() {
    const int tamanho = 10;
    float vetor[tamanho];

    printf("Digite 10 numeros reais:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }

    int quantidadeNegativos = 0;
    float somaPositivos = 0.0;

    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] < 0) {
            quantidadeNegativos++;
        } else {
            somaPositivos += vetor[i];
        }
    }

    printf("\nQuantidade de numeros negativos: %d\n", quantidadeNegativos);
    printf("Soma dos numeros positivos: %.2f\n", somaPositivos);

    return 0;
}
