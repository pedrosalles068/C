#include <stdio.h>

int main ()
{
  int idade;
  printf("Insira sua Idade:");
  scanf("%d",&idade);

  if (idade < 18) {
    printf(" menor de idade");
  } else if (idade < 60) {
    printf(" adulto");
  } else {
    printf("idoso");
  }

}