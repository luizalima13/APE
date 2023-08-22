#include<stdio.h>

int main(){

    int num1, num2, soma, mult;
    float sub, div;


    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);


    soma = num1 +num2;
    mult = num1 * num2;
    sub = (float)num1 - num2;
    div = (float)num1 / num2;



    printf("\n Soma: %d", soma);
    printf("\n Multiplicação: %d", mult);
    printf("\n Subtração: %.2f", sub);
    printf("\n Divisão: %.2f", div);

    return 0;
}
