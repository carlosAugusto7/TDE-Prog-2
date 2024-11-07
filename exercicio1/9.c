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

    Clube melhor_clube = clubes[0];
    Clube pior_clube = clubes[0];

    for (i = 1; i < MAX_CLUBES; i++) {
        if (clubes[i].pontuacao > melhor_clube.pontuacao) {
            melhor_clube = clubes[i];
        }
        if (clubes[i].pontuacao < pior_clube.pontuacao) {
            pior_clube = clubes[i];
        }
    }

    printf("\nMelhor Clube:\n");
    printf("ID: %d\n", melhor_clube.id);
    printf("Nome: %s\n", melhor_clube.nome);
    printf("Vitórias: %d\n", melhor_clube.vitorias);
    printf("Empates: %d\n", melhor_clube.empates);
    printf("Derrotas: %d\n", melhor_clube.derrotas);
    printf("Gols Pró: %d\n", melhor_clube.gols_pro);
    printf("Gols Contra: %d\n", melhor_clube.gols_contra);
    printf("Pontuação: %d\n", melhor_clube.pontuacao);
    printf("-----------------------\n");

    printf("Pior Clube:\n");
    printf("ID: %d\n", pior_clube.id);
    printf("Nome: %s\n", pior_clube.nome);
    printf("Vitórias: %d\n", pior_clube.vitorias);
    printf("Empates: %d\n", pior_clube.empates);
    printf("Derrotas: %d\n", pior_clube.derrotas);
    printf("Gols Pró: %d\n", pior_clube.gols_pro);
    printf("Gols Contra: %d\n", pior_clube.gols_contra);
    printf("Pontuação: %d\n", pior_clube.pontuacao);
    printf("-----------------------\n");

    return 0;
}
