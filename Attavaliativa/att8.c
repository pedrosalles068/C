#include <stdio.h>

int main() {
    char texto[100];
    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);

    int contador = 0;
    while (texto[contador] != '\n' && texto[contador] != '\0') {
        contador++;
    }

    printf("A string possui %d caracteres.\n", contador);
    return 0;
