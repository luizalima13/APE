#include<stdio.h>

int main(){

    int qtd = 10, multiplo = 0;

    for(int i = 1; i <= qtd; i++){
        multiplo = i * 3;
        printf("\n%d", multiplo);
    }
    return 0;
}
