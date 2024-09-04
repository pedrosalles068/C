#include <stdio.h>

int main() {
    int numero;
    int resultado =0;
    while (1) {
        printf("Digite um numero:");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        resultado += numero;
    }

    printf("A soma de todos os numeros e: %d\n", resultado);

    return 0;
}
