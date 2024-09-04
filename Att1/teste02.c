#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int jogador, computador;

    srand(time(NULL));
    computador = rand() % 3;

    printf("Escolha uma jogada:\n");
    printf("0 - Pedra\n1 - Papel\n2 - Tesoura\n");
    printf("Digite sua escolha: ");
    scanf("%d", &jogador);

    printf("vc escolheu: %d\n", jogador);
    printf("O bot escolheu: %d\n", computador);

    if (jogador == computador) {
        printf("Empate!\n");
    } else if ((jogador == 0 && computador == 2) ||
               (jogador == 1 && computador == 0) ||
               (jogador == 2 && computador == 1)) {
        printf("vc venceu!\n");
               } else {
                   printf("vc perdeu\n");
               }

    return 0;
}
