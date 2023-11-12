#include<stdio.h>

int main(){

    int n;
    printf("Digite um numero");
    scanf("%d", &n);

    for(int i = 0; i <= n; i++ ){
        printf("\n%d", i);
    }
    
    return 0;
}
