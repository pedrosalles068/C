/**
* Lista Encadeada Não Ordenada
* Diferente das listas não encadeadas (vetores), as listas encadeadas consistem de nós que contêm um valor e um
* ponteiro para o próximo nó na lista. Elas não têm um tamanho fixo e podem crescer dinamicamente.
*
* Neste caso, cada novo elemento é adicionado ao início ou ao fim da lista, sem se preocupar com a
* ordenação dos elementos.
* */

#include <stdio.h>
#include <stdlib.h>

// Definindo a estrutura do nó
struct No {
    int valor;
    struct No *prox;
};

/**
* Ponteiro de Ponteiro
* No caso da função inserir_inicio, estamos tentando alterar o próprio ponteiro head,
* ou seja, queremos modificar para que ele aponte para um novo nó (o nó recém-inserido).
*
* Se passássemos apenas struct No *head, a função receberia uma cópia de head.
*
* Isso significa que as alterações feitas dentro da função não afetariam o
* head original fora dela.
* Ao usar struct No **head, passamos o endereço de head, ou seja,
* a função recebe um ponteiro que aponta para o ponteiro original (head).
*
* Isso nos permite modificar diretamente o valor de head na função chamada.
 */
void inserir_inicio(struct No **head, int valor) {
    struct No *novo_no = (struct No *) malloc(sizeof(struct No));
    novo_no->valor = valor;
    novo_no->prox = *head; // Aponta para o antigo início
    *head = novo_no; // O novo nó se torna o início
}

// Função para exibir a lista com endereços dos nós e seus ponteiros
void exibir_com_ponteiros(struct No *head) {
    struct No *temp = head;
    printf("Lista encadeada (endereços e valores):\n");

    while (temp != NULL) {
        /**
        * O tipo void * pode armazenar o endereço de qualquer tipo de dado,
        * seja um inteiro, uma estrutura ou qualquer outro tipo.
        * Quando usamos printf para imprimir um ponteiro (%p),
        * é esperado que o argumento seja do tipo void *.
        *
        * No entanto, temp é do tipo struct No *, ou seja,
        * um ponteiro para uma estrutura.
        *
        * Ao fazer o casting para (void *), estamos convertendo temp para o tipo
        * genérico void *, que é o esperado pelo %p.
        *
         */
        printf("Nó: %p | Valor: %d | Próximo: %p\n", (void *) temp, temp->valor, (void *) temp->prox);
        temp = temp->prox;
    }

    printf("Fim da lista.\n\n");
}

int main() {
    struct No *lista = NULL; // Inicia a lista vazia

    // Inserindo alguns elementos na lista
    inserir_inicio(&lista, 5);
    inserir_inicio(&lista, 2);
    inserir_inicio(&lista, 9);

    // Exibindo a lista com informações dos ponteiros
    exibir_com_ponteiros(lista);

    return 0;
}
