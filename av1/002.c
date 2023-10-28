#include<stdio.h>
#include<stdlib.h>

int main(){

    float chico= 1.5, ze= 1.1;
    int ano=0;

    while( chico>= ze){
        chico += 0.02;
        ze += 0.03;
        ano++;

        printf("chico: %.2f \n ze: %.2f \n ano: %d \n", chico, ze, ano);
    }

    printf("\n Vao ser necessarios %d anos!\n \n", ano);



    return 0;
}
