#include<stdio.h>

int main()
{
    float largura, comprimento,area;


    printf("\nDigite a largura:");
    scanf("%f",&largura);

    printf("\nDigite o comprimento:");
    scanf("%f",&comprimento);

    area = largura * comprimento;

    printf("A area da sala e: %.2fm2", area);

    return 0;
}
