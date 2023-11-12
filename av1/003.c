#include <stdio.h>

int main()
{
  float a = 3, b = 2, c = 3;

  printf("\nLetra A:");
  scanf("%f", &a);
  printf("\nLetra B:");
  scanf("%f", &b);
  printf("\nLetra C:");
  scanf("%f", &c);

  if ((a + b) > c && (b + c) > a && (a + c) > b)
  {
    printf("\nPode formar um triangulo");
    if ((a == b) && (b == c) && (c == a))
      printf("\n E um triangulo equilatero");
    else if ((a == b) || (a == c) || (b == c))
      printf("\nE um triangulo isosceles");
    else
      printf("\nE um triangulo escaleno");
  }
  else
    printf("\n Nao vai formar um triangulo");

  return 0;
}
