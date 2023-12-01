#include <stdio.h>

int main() {
    const int numValores = 5;
    float valores[numValores];

    printf("Digite 5 valores:\n");
    for (int i = 0; i < numValores; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%f", &valores[i]);
    }

    float maior = valores[0];
    float menor = valores[0];
    float soma = valores[0];

    for (int i = 1; i < numValores; i++) {
        if (valores[i] > maior) {
            maior = valores[i];
        }

        if (valores[i] < menor) {
            menor = valores[i];
        }

        soma += valores[i];
    }

    float media = soma / numValores;

    printf("\nValores lidos:\n");
    for (int i = 0; i < numValores; i++) {
        printf("%.2f ", valores[i]);
    }

    printf("\nMaior valor: %.2f\n", maior);
    printf("Menor valor: %.2f\n", menor);
    printf("Media dos valores: %.2f\n", media);

    return 0;
}
