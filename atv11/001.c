#include <stdio.h>

int encontrarMaior(int numero1, int numero2) {
    return (numero1 > numero2) ? numero1 : numero2;
}

int main() {
    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    int resultado = encontrarMaior(num1, num2);

    printf("O maior numero e: %d\n", resultado);

    return 0;
}

