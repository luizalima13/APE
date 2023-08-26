#include <stdio.h>

int main()
{
    float peso;
    float pesoMinimo=60;

    printf("Digite seu peso em kg:");
    scanf("%f", &peso);

    if(peso < pesoMinimo) {
        printf("Peso menor que 60kg");
    } else {
        printf("Peso maior ou igual 60kg");
    }


    return 0;
}
