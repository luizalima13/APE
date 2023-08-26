#include <stdio.h>

int main()
{
    int idade;
    printf("Digite sua idade");
    scanf("%d",&idade);

    if(idade >=18){
        printf("E maior de idade");

    } else {
        printf("menor de idade");
    }
    return 0;
}
