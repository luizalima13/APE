#include <stdio.h>
#include <math.h>

int main (){
    float x, y;

    printf("valor de x:");
    scanf("%f", &x);

    y = ((5*x)+3)/sqrt(x*x-16);

    printf("O resultado sera: %.2f", y);

    return 0;
}
