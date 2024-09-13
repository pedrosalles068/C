#include <stdio.h>

float Acirculo()
{
    float r;
    float pi = 3.14;
    printf("Insira o valor do raio: ");
    scanf("%f", &r);
    return pi * (r * r);
}

int Aquadrado()
{
    int L;
    printf("Insira o valor do lado do quadrado: ");
    scanf("%d", &L);
    return L * L;
}

float Vesfera()
{
    float r;
    float pi = 3.14;
    printf("Insira o valor do raio: ");
    scanf("%f", &r);
    return (4 * pi * (r * r * r)) / 3;
}

int Vcubo()
{
    int lado;
    printf("Insira o valor do lado do cubo: ");
    scanf("%d", &lado);
    return lado * lado * lado;
}

int main()
{
    int opcao;
    printf("******* Calculos *******\n");
    printf("1- Area do Circulo\n");
    printf("2- Area do Quadrado\n");
    printf("3- Volume do Cubo\n");
    printf("4- Volume da Esfera\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch(opcao)
    {
    case 1:
        printf("Area do Circulo: %.2f\n", Acirculo());
        break;
    case 2:
        printf("Area do Quadrado: %d\n", Aquadrado());
        break;
    case 3:
        printf("Volume do Cubo: %d\n", Vcubo());
        break;
    case 4:
        printf("Volume da Esfera: %.2f\n", Vesfera());
        break;
    default:
        printf("Opcao invalida!\n");
        break;
    }

    return 0;
}
