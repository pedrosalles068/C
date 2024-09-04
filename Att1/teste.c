#include <stdio.h>

int main() {
    int n;
    int r;
    int i;

    printf("Digite um numero:\n");
    scanf("%d", &n);

    printf("Sucessor: %d\n", n + 1);
    printf("Antecessor: %d\n", n - 1);

    printf("Tabuada de %d:\n", n);

    for (i = 1; i <= 10; i++) {
        r = n * i;
        printf("%d x %2d = %3d\n", n, i, r);
    }

    printf("Próximos tres numeros:\n");
    for (i = 1; i <= 3; i++) {
        printf("%d ", n + i * 2);
    }
    printf("\n");

    return 0;
}
