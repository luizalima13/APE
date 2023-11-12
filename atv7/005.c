#include<stdio.h>

int main(){
    
    int pares = 0, contador = 0, soma = 0;


    while(contador < 50){
        pares += 2;
        soma += pares;
        printf("\n%d %d %d", contador, pares, soma);
        contador++;
    }
    return 0;
}
