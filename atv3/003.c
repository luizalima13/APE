#include <stdio.h>

int main()
{
    float altura;
    float alturaMinima=1.80;

    printf("Digite sua altura em metros:");
    scanf("%f", &altura);

    if(altura < alturaMinima) {
        printf("Altura menor que 1,80m");
    } else {
        printf("Altura maior ou igual a 1,80m");
    }


    return 0;
}
