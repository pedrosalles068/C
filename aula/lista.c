#include <stdio.h>
#define MAX 5

void inserir(int lista[], int *tamanho, int valor)
{
    if (*tamanho < MAX){
        lista[*tamanho] = valor;
        (*tamanho)++;
    } else
    {
        printf("Lista Cheia\n");
    }
}

void exibir(int lista[], int tamanho)
{
    printf("Elementos da Lista: ");
    for (int i = 0; i< tamanho; i++)
    {
        printf("%d ", lista[i]);
    }
    printf("\n");
}

int main()
{
    int lista[MAX];
    int tamanho = 0;
    inserir(lista, &tamanho, 21);
    inserir(lista, &tamanho, 22);
    inserir(lista, &tamanho, 23);
    inserir(lista, &tamanho, 24);
    inserir(lista, &tamanho, 25);
    inserir(lista, &tamanho, 26);

    exibir(lista, tamanho);
    return 0;

}