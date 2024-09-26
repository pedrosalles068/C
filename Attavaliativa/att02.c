#include <stdio.h>

int main() {
    int a;
    int b;
    printf("Digite um numero: ");
    scanf("%d", &a);
    printf("Digite outro numero:");
    scanf("%d", &b);
    if (a>b) {
        printf("O maior numero e: %d", a);
    } else if (a<b){
        printf("O maior numero e: %d", b);
    } else {
        printf("Eles sao iguais: %d", b);
    }
    return 0;
}