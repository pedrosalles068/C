#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void imprimir_palavra(char palavra[], int tamanho, int letras_acertadas[])
{
    for(int i = 0; i < tamanho; i++)
    {
        if(letras_acertadas[i])
        {
            printf("%c", palavra[i]);
        }
        else
        {
            printf("_");
        }
    }
    printf("\n");
}

void jogar_forca(char palavra[])
{
    int tamanho = strlen(palavra);
    int letras_acertadas[tamanho];
    for (int i = 0; i < tamanho; i++)
    {
        letras_acertadas[i] = 0;
    }
    int tentativas = 6;
    int acertos = 0;
    char letra;

    while (tentativas > 0 && acertos < tamanho)
    {
        printf("\nVocê tem %d tentativas restantes\n", tentativas);
        imprimir_palavra(palavra, tamanho, letras_acertadas);
        printf("Digite uma letra: ");
        scanf(" %c", &letra);
        letra = tolower(letra);

        int acertou = 0;
        for(int i = 0; i < tamanho; i++)
        {
            if(palavra[i] == letra && !letras_acertadas[i])
            {
                letras_acertadas[i] = 1;
                acertos++;
                acertou = 1;
            }
        }

        if(acertou == 0)
        {
            printf("Letra incorreta\n");
            tentativas--;
        }
    }

    if(acertos == tamanho)
    {
        printf("Você ganhou!!!!!\n");
    }
    else
    {
        printf("Você perdeu!!!!!\n");
    }
}

int main()
{
    char palavras[5][20] = {"oxigenio", "hidrogenio", "carbono", "nitrogenio", "ferro"};
    int opcao;
    do
    {
        printf("===== Menu =====\n");
        printf("1. Iniciar Jogo\n");
        printf("2. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if(opcao == 1)
        {
            int sorteio = rand() % 5;
            jogar_forca(palavras[sorteio]);
        }
        else if(opcao != 2)
        {
            printf("Opção Inválida!!!\n");
        }

    } while (opcao != 2);

    printf("Obrigado por jogar\n");
    return 0;
}
