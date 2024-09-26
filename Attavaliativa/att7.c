#include <stdio.h>

int numeroMaior(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int qualMaior() {
    int a, b, maior;
    printf("Digite um numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    maior = numeroMaior(a, b);
    printf("Maior numero: %d\n", maior);