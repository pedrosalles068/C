#include<stdio.h>
int main()
{
int numero;
int resultado;
int x;
printf("insira um numero inteiro");
scanf("%d",&numero);
    for (int x = 1; x <= numero; x++) {
        resultado += x;
    }
    printf("A soma  de 1 ao  %d e: \n %d", numero, resultado);
}