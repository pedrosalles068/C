#include <stdio.h>
struct Aluno
{
    char nome[100];
    int idade;
    int nota;
};
int main()
{
    struct Aluno aluno1;
    struct Aluno aluno2;
    struct Aluno aluno3;

    printf("Digite o seu nome: \n");
    fgets(aluno1.nome, 100, stdin);


    printf("Digite sua idade: \n");
    scanf("%d", &aluno1.idade);
    getchar();

    printf("Digite sua nota: \n");
    scanf("%d", &aluno1.nota);
    getchar();

    printf("Digite o seu nome: \n");
    fgets(aluno2.nome, 100, stdin);


    printf("Digite sua idade: \n");
    scanf("%d", &aluno2.idade);
    getchar();

    printf("Digite sua nota: \n");
    scanf("%d", &aluno2.idade);
    getchar();

    printf("Digite o seu nome: \n");
    fgets(aluno3.nome, 100, stdin);


    printf("Digite sua idade: \n");
    scanf("%d", &aluno3.idade);
    getchar();

    printf("Digite sua nota: \n");
    scanf("%d", &aluno3.nota);
    getchar();

    printf("\nAluno 1:\n");
    printf("insira seu nome: %s", aluno1.nome);
    printf("insira sua idade: %d\n", aluno1.idade);
    printf("insira sua nota: %d\n", aluno1.nota);
    printf("\nAluno 2:\n");
    printf("insira seu nome: %s", aluno2.nome);
    printf("insira sua idade: %d\n", aluno2.idade);
    printf("insira sua nota: %d\n", aluno2.nota);
    printf("\nAluno 3:\n");
    printf("insira seu nome: %s", aluno3.nome);
    printf("insira sua idade: %d\n", aluno3.idade);
    printf("insira sua nota: %d\n", aluno3.nota);


}


