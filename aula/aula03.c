#include <stdio.h>


int main()
{
    float a,b,m;
    printf("\n Informe as duas notas obtidas:\n");

    scanf("%f%f",&a,&b);


    m =(a+b)/2;
    if(m>=7.0){
        printf("aprovado!");
    }
    else
    {
        printf("nao aprovado");
    }



}