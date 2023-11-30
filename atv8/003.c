#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;
    printf("Digite um numero inteiro nao negativo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Por favor, digite um numero inteiro nao negativo.\n");
    } else {
        int resultado = fibonacci(n);
        printf("O enesimo termo da sequancia de Fibonacci para n=%d é: %d\n", n, resultado);
    }

    return 0;
}
