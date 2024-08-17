#include <stdio.h>
int main(void)
{

    //primeira etapa
    int lapis = 2;
    short caneta = 3;
    float dinheiro = 100.50;
    double luz = 64.50;
    char c = 'C';
    long planta = 10,quantidade = 3;

    float pagamento = dinheiro - luz;
    int asciiValue = (int)c;
    int conta = lapis + caneta;
    long total = planta * quantidade;


    printf("Total:%d \n",conta);
    printf("pago:%2f \n",pagamento);
    printf("valor  do caractere: %c numero:%d \n", c, asciiValue);
    printf("quantidade de planta: %d \n",total);


    //segunda etapa

    float primeiro[3] = {1.5, 2.5, 3.5};
    float segundo[3] = {4.5, 5.5, 6.5};
    for(int i = 0; i < 3; i++) {
        printf("primeiro[%d] = %.2f\n", i, primeiro[i]);
    }
    for(int i = 0; i < 3; i++) {
        printf("segundo[%d] = %.2f\n", i, segundo[i]);
    }


    // terceira etapa

    struct Livro {
        char titulo[100];
        char autor[50];
        int paginas;
    };

    struct Livro livro1 = {"entrarei no altar de deus", "michel paggiosi", 300};
    struct Livro livro2 = {"cem questoes sobre liturgia", "michel paggiosio", 300};
    struct Livro livro3 = {"catecismo da santa missa", "michel paggiosi", 300};
    printf("Livro1 \nTitulo: %s\nautor: %s\npaginas: %d\n", livro1.titulo,livro1.autor,livro1.paginas);
    printf("Livro2 \nTitulo: %s\nautor: %s\npaginas: %d\n", livro2.titulo,livro2.autor,livro2.paginas);
    printf("Livro3 \nTitulo: %s\nautor: %s\npaginas: %d\n", livro3.titulo,livro3.autor,livro3.paginas);


    //quarta etapa


    struct Livro biblioteca[2] = {
        {"entrarei no altar de deus", "michel paggiosi", 150},
        {"cem questoes sobre liturgia", "michel paggiosi", 200}
    };
    printf("Titulo do primeiro livro: %s\n", biblioteca[0].titulo);
    printf("Autor do primeiro livro: %s\n", biblioteca[0].autor);
    printf("Numero de paginas do primeiro livro: %d\n", biblioteca[0].paginas);
    printf("Titulo do primeiro livro: %s\n", biblioteca[1].titulo);
    printf("Autor do primeiro livro: %s\n", biblioteca[1].autor);
    printf("Numero de paginas do primeiro livro: %d\n", biblioteca[1].paginas);

}
