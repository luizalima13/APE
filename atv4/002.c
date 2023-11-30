#include <stdio.h>

int main() {
    float A, B, C, D;
    printf("Digite o valor de A: ");
    scanf("%f", &A);
    printf("Digite o valor de B: ");
    scanf("%f", &B);
    printf("Digite o valor de C: ");
    scanf("%f", &C);
    printf("Digite o valor de D: ");
    scanf("%f", &D);

    float maior = A;
    float menor = A;

    if (B > maior) {
        maior = B;
    } else if (B < menor) {
        menor = B;
    }

    if (C > maior) {
        maior = C;
    } else if (C < menor) {
        menor = C;
    }

    if (D > maior) {
        maior = D;
    } else if (D < menor) {
        menor = D;
    }

    printf("O maior valor e: %.2f\n", maior);
    printf("O menor valor e: %.2f\n", menor);

    return 0;
}
