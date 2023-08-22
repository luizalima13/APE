#include<stdio.h>
#include<math.h>

int main()
{
    double raio, area, PI = 3.1415;

printf("Digite o valor do raio");
scanf("%lf", &raio);

area = PI * (raio * raio);
//area = PT *(pow(raio,2));

printf("A area do circulo e %lf: ",area);

    return 0;
}
