#include <stdio.h>

int main() {
    // Variáveis da carta
    char estado1[3], carta1[4], cidade1[21];
    int populacao1, numero_ponto_turistico1;
    float area1, pib1;

    char estado2[3], carta2[4], cidade2[21];
    int populacao2, numero_ponto_turistico2;
    float area2, pib2;

    // Entrada de dados CARTA 1
    printf("=== DIGITE OS DADOS DA CARTA 1 ===\n");

    printf("Digite o estado (Ex: SP): \n");
    scanf("%2s", estado1);

    printf("Digite o Código da Carta: \n");
    scanf("%3s", carta1);

    printf("Digite o nome da cidade: \n");
    scanf(" %20[^\n]", cidade1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numero_ponto_turistico1);

    printf("Digite a área (em Km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB (em R$ milhões): \n");
    scanf("%f", &pib1);

    // Entrada de dados CARTA 2
    printf("=== DIGITE OS DADOS DA CARTA 2 ===\n");

    printf("Digite o estado (Ex: SP): \n");
    scanf("%2s", estado2);

    printf("Digite o Código da Carta: \n");
    scanf("%3s", carta2);

    printf("Digite o nome da cidade: \n");
    scanf(" %20[^\n]", cidade2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numero_ponto_turistico2);

    printf("Digite a área (em Km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB (em R$ milhões): \n");
    scanf("%f", &pib2);

    // Exibir o que foi lido CARTA 1
    printf("\n---------------------------------------\n");
    printf("\n----- DADOS DIGITADOS DA CARTA 1 -----\n");
    printf("      Estado: %s\n", estado1);
    printf("      Código da Carta: %s\n", carta1);
    printf("      Cidade: %s\n", cidade1);
    printf("      População: %d habitantes\n", populacao1);
    printf("      Número de Pontos Turísticos: %d\n", numero_ponto_turistico1);
    printf("      Área: %.2f km²\n", area1);
    printf("      PIB: R$ %.2f milhões\n", pib1);
    printf("\n---------------------------------------\n");

    // Exibir o que foi lido CARTA 2
    printf("\n----- DADOS DIGITADOS DA CARTA 2 -----\n");
    printf("      Estado: %s\n", estado2);
    printf("      Código da Carta: %s\n", carta2);
    printf("      Cidade: %s\n", cidade2);
    printf("      População: %d habitantes\n", populacao2);
    printf("      Número de Pontos Turísticos: %d\n", numero_ponto_turistico2);
    printf("      Área: %.2f km²\n", area2);
    printf("      PIB: R$ %.2f milhões\n", pib2);
    printf("\n---------------------------------------\n");
    return 0;
}
