#include <stdio.h>

int main()
{
    float salario;
    float salarioMinimo=1320;

    printf("Digite valor do salario:");
    scanf("%f", &salario);

    if(salario > salarioMinimo) {
        printf("Ganha mais que o salario minimo");
    } else {
        printf("Ganha menos que salario minimo");
    }


    return 0;
}
