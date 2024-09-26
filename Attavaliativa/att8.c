#include <stdio.h>
#include <string.h>

int main() {
    char texto[100];
    printf("Digite uma string: ");
    scanf("%99[^\n]", texto);

    int contador = strcspn(texto, "\n");

    printf("A string possui %d caracteres.\n", contador);
    return 0;
}