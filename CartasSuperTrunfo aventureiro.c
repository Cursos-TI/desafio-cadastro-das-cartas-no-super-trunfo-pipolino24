#include <stdio.h>
#include <string.h>

// Tema 2 - Nível Aventureiro

int main() {

    // carta 1
    char estado1[3];                                   // Estado, vai solicitar a sigla do estado, as 2 primeiras letras, ex: CE, DF e etc
    char codigo1[5];                                   // cadastro de um código para a carta    
    char cidade1[50];                                  // nome da cidade
    int populacao1;                                    // população da cidade
    float area1;                                       // área em km²
    float pib1;                                        // PIB em bilhões
    int pontosturisticos1;                             // quantidade de pontos turísticos
    float densidade1;                                  // densidade populacional
    float pibPerCapita1;                               // PIB per capita

    // carta 2
    char estado2[3];                                   // Estado, vai solicitar a sigla do estado, as 2 primeiras letras, ex: CE, DF e etc
    char codigo2[5];                                   // cadastro de um código para a carta    
    char cidade2[50];                                  // nome da cidade
    int populacao2;                                    // população da cidade
    float area2;                                       // área em km²
    float pib2;                                        // PIB em bilhões
    int pontosturisticos2;                             // quantidade de pontos turísticos
    float densidade2;                                  // densidade populacional
    float pibPerCapita2;                               // PIB per capita

    // Cadastro da carta 1

    printf("=== Cadastro da carta 1 ===\n");

    printf("Digite a sigla do Estado (ex: CE): ");
    scanf("%s", estado1);

    printf("Digite o código da carta (ex: CE01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1); // Lê nomes com espaços

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB em bilhões: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

    // Cadastro da carta 2

    printf("=== Cadastro da carta 2 ===\n");

    printf("Digite a sigla do Estado (ex: DF): ");
    scanf("%s", estado2);

    printf("Digite o código da carta (ex: DF01): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2); // Lê nomes com espaços

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB em bilhões: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    // Desafio do aventureiro

    densidade1 = populacao1 / area1;                       // cálculo da densidade populacional da cidade 1
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;      // cálculo do PIB per capita da cidade 1

    densidade2 = populacao2 / area2;                       // cálculo da densidade populacional da cidade 2
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;      // cálculo do PIB per capita da cidade 2

    // Agora exibição dos dados para o usuário

    printf("\n=== Carta 1 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}
