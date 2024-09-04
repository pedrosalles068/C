#include<stdio.h>

int main()
{
  int x;
  printf("Insira um numero de 1 a 7:");
  scanf("%d",&x);
  switch (x)
  {
  case 1:
    printf("Domingo");
    break;
  case 2:
    printf("Segunda");
    break;
  case 3:
    printf("terca");
    break;
  case 4:
    printf("Quarta");
    break;
  case 5:
    printf("Quinta");
    break;
  case 6:
    printf("Sexta");
    break;
  case 7:
    printf("Sabado");
    break;
    default:
      printf("insira o valor valido");
  }
  return 0;
}