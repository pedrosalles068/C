#include <stdio.h>
struct Pessoa
{
    char nome[100];
    int idade;
    float altura;
};
int main()
{
    struct Pessoa pessoa1;

    printf("Digite o seu nome: \n");
    fgets(pessoa1.nome, 100, stdin);


    printf("Digite sua idade: \n");
    scanf("%d", &pessoa1.idade);
    getchar();

    printf("Digite sua altura: \n");
    scanf("%f", &pessoa1.altura);
    getchar();

    printf("\nPessoa:\n");
    printf("Nome: %s", pessoa1.nome);
    printf("Idade: %d\n", pessoa1.idade);
    printf("Altura: %2fm\n", pessoa1.altura);





}
