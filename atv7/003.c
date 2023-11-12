#include<stdio.h>

int main(){

    int impar=1, numero;

    printf("Digite um numero");
    scanf("%d", &numero);

    for(int i = 1; i <= numero; i++){
        printf("\n%d", impar);
        impar += 2;
    }
    return 0;
}
