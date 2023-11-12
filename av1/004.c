#include <stdio.h>

int main()
{
  float a, b, c, tudo;

  do
  {
    printf("Angulo A: \n");
    scanf("%f", &a);
    printf("Angulo B: \n");
    scanf("%f", &b);
    printf("Angulo C: \n");
    scanf("%f", &c);

    tudo = a + b + c;

    if (tudo == 180)
      printf("\nPode formar um triangulo a soma e igual a 180");
    else if (tudo < 180)
      printf("\nA soma dos lados deve ser igual a 180");

  } while (!(tudo == 180));

  if (a == 90 || b == 90 || c == 90)
    printf("\nE um triangulo retangulo");
  else if (a > 90 || b > 90 || c > 90)
    printf("\nE um triangulo obtusangulo");
  else if (a < 90 || b < 90 || c < 90)
    printf("\nE um triangulo acutangulo");

  return 0;
}
