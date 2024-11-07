#include <stdio.h>

#define MAX_PRODUTOS 3
#define NOME_MAX 20

typedef struct {
    int id;
    char nome[NOME_MAX];
    float valor;
} Produto;

int main() {
    Produto produtos[MAX_PRODUTOS];
    int i;

    for (i = 0; i < MAX_PRODUTOS; i++) {
        printf("Digite o ID do produto %d: ", i + 1);
        scanf("%d", &produtos[i].id);
        printf("Digite o nome do produto %d: ", i + 1);
        scanf("%s", produtos[i].nome);
        printf("Digite o valor do produto %d: ", i + 1);
        scanf("%f", &produtos[i].valor);
    }

    int id_busca;
    printf("Digite o ID do produto cujo valor deseja atualizar: ");
    scanf("%d", &id_busca);

    int encontrado = 0;
    for (i = 0; i < MAX_PRODUTOS; i++) {
        if (produtos[i].id == id_busca) {
            printf("Produto encontrado:\n");
            printf("ID: %d\n", produtos[i].id);
            printf("Nome: %s\n", produtos[i].nome);
            printf("Valor atual: %.2f\n", produtos[i].valor);

            printf("Digite o novo valor para o produto: ");
            scanf("%f", &produtos[i].valor);
            printf("Valor atualizado com sucesso!\n");
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Produto com ID %d não encontrado.\n", id_busca);
    }

    printf("\nLista de produtos atualizada:\n");
    for (i = 0; i < MAX_PRODUTOS; i++) {
        printf("Produto %d:\n", i + 1);
        printf("ID: %d\n", produtos[i].id);
        printf("Nome: %s\n", produtos[i].nome);
        printf("Valor: %.2f\n", produtos[i].valor);
        printf("-----------------------\n");
    }

    return 0;
}
