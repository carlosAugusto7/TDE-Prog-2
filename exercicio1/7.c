#include <stdio.h>

#define MAX_CLUBES 2
#define NOME_MAX 50

typedef struct {
    int id;
    char nome[NOME_MAX];
    int vitorias;
    int empates;
    int derrotas;
    int gols_pro;
    int gols_contra;
    int pontuacao;
} Clube;

int main() {
    Clube clubes[MAX_CLUBES];
    int i;

    for (i = 0; i < MAX_CLUBES; i++) {
        printf("Cadastro do Clube %d:\n", i + 1);
        printf("Digite o ID: ");
        scanf("%d", &clubes[i].id);
        printf("Digite o nome: ");
        scanf(" %[^\n]", clubes[i].nome);
        printf("Digite o número de vitórias: ");
        scanf("%d", &clubes[i].vitorias);
        printf("Digite o número de empates: ");
        scanf("%d", &clubes[i].empates);
        printf("Digite o número de derrotas: ");
        scanf("%d", &clubes[i].derrotas);
        printf("Digite o número de gols pró: ");
        scanf("%d", &clubes[i].gols_pro);
        printf("Digite o número de gols contra: ");
        scanf("%d", &clubes[i].gols_contra);
        
        clubes[i].pontuacao = (clubes[i].vitorias * 3) + (clubes[i].empates * 1);
        printf("-----------------------\n");
    }

    int soma_gols = 0;
    for (i = 0; i < MAX_CLUBES; i++) {
        soma_gols += clubes[i].gols_pro;
    }
    float media_gols = (float)soma_gols / MAX_CLUBES;

    printf("\nClubes com Gols Pró acima da média (%.2f):\n", media_gols);
    for (i = 0; i < MAX_CLUBES; i++) {
        if (clubes[i].gols_pro > media_gols) {
            printf("ID: %d\n", clubes[i].id);
            printf("Nome: %s\n", clubes[i].nome);
            printf("Gols Pró: %d\n", clubes[i].gols_pro);
            printf("-----------------------\n");
        }
    }

    return 0;
}
