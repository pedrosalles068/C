#include <stdio.h>

struct Editora
{
    char nome[100];
    char cidade[100];
};

struct Livro
{
    char titulo[100];
    char autor[100];
    int ano_publicacao;
    struct Editora editora;
};

int main(void){

    struct Livro meuLivro;

    printf("Digite o Titulo do Livro: \n");
    fgets(meuLivro.titulo, 100, stdin);

    printf("Digite o Autor do Livro: \n");
    fgets(meuLivro.autor, 100, stdin);

    printf("Digite o Ano de Publicacao do Livro: \n");
    scanf("%d", &meuLivro.ano_publicacao);
    getchar();

    printf("Digite o nome da Editora: \n");
    fgets(meuLivro.editora.nome, 100, stdin);

    printf("Digite a cidade da Editora: \n");
    fgets(meuLivro.editora.cidade, 100, stdin);

    printf("\nInformacoes do Livro:\n");
    printf("Titulo: %s", meuLivro.titulo);
    printf("Autor: %s", meuLivro.autor);
    printf("Ano De Publicacao: %d\n", meuLivro.ano_publicacao);
    printf("Editora: %s", meuLivro.editora.nome);
    printf("Cidade da Editora: %s", meuLivro.editora.cidade);

    return 0;
}
