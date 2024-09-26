#include <stdio.h>

int main() {
    int matriz[2][2];
    int linha, coluna;

    printf("Digite os valores para matriz\n");

    for (linha = 0; linha < 2; linha++) {
        for (coluna = 0; coluna < 2; coluna++) {
            printf("Digite o valor aonde quer colocar [%d][%d]: ", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    printf("A matriz 2x2 :\n");

    for (linha = 0; linha < 2; linha++) {
        for (coluna = 0; coluna < 2; coluna++) {
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}
