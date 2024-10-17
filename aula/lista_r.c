#include <stdio.h>
#define MAX 5

void inserir_ordenado(int lista[], int *tamanho, int valor){
    if (*tamanho < MAX){
        int i;
        for (i = *tamanho - 1; (i >= 0 && lista[i] > valor); i--) {
        lista[i + 1] = lista[i];
        }
        lista[ i + 1] = valor;
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
    inserir_ordenado(lista, &tamanho, 55);
    inserir_ordenado(lista, &tamanho, 2);
    inserir_ordenado(lista, &tamanho, 22);
    inserir_ordenado(lista, &tamanho, 12);
    inserir_ordenado(lista, &tamanho, 9);

    exibir(lista, tamanho);
    return 0;

}