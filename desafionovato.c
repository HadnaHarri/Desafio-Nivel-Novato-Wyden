#include <stdio.h>

int main() {
    // Carta 1
    char estado1;
    char codigo1[4];
    char nome1[100];
    int pop1;
    float area1;
    float pib1;
    int pontos1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char nome2[100];
    int pop2;
    float area2;
    float pib2;
    int pontos2;

    // Entrada da primeira carta
    printf("Cadastro da primeira carta:\n");

    printf("Digite a letra do Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nome1); // Lê até o Enter, permitindo espaços

    printf("Digite a População: ");
    scanf("%d", &pop1);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);

    // Entrada da segunda carta
    printf("\nCadastro da segunda carta:\n");

    printf("Digite a letra do Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta (ex: B03): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nome2); // CORREÇÃO AQUI

    printf("Digite a População: ");
    scanf("%d", &pop2);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    // Impressão das informações da primeira carta
    printf("\n-------- Carta 1 --------\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", pop1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);

    // Impressão das informações da segunda carta
    printf("\n-------- Carta 2 --------\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", pop2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);

    return 0;
}
