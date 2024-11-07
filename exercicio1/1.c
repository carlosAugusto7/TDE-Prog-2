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

    float valor_limite;
    printf("Digite o valor limite: ");
    scanf("%f", &valor_limite);

    int contador = 0;
    printf("\nProdutos abaixo de R$%.2f:\n", valor_limite);
    for (i = 0; i < MAX_PRODUTOS; i++) {
        if (produtos[i].valor < valor_limite) {
            printf("Produto %d:\n", i + 1);
            printf("ID: %d\n", produtos[i].id);
            printf("Nome: %s\n", produtos[i].nome);
            printf("Valor: %.2f\n", produtos[i].valor);
            printf("-----------------------\n");
            contador++;
        }
    }

    printf("Total de produtos abaixo de R$%.2f: %d\n", valor_limite, contador);

    return 0;
}
