#include <stdio.h>
#include <string.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    // carta 1
    char estado1[3];                                   // Estado, vai solicitar a sigla do estado, as 2 primeiras letras, ex: CE, DF e etc
    char codigo1[5];                                   // cadastro de um código para a carta    
    char cidade1[50];                                  // nome da cidade
    int populacao1;                                    // população da cidade
    float area1;                                       // àrea em km²
    float pib1;                                        // Pib em bilhões
    int pontosturisticos1;                             // quantidade de pontos turisticos

    // carta 2
    char estado2[3];                                   // Estado, vai solicitar a sigla do estado, as 2 primeiras letras, ex: CE, DF e etc
    char codigo2[5];                                   // cadastro de um código para a carta    
    char cidade2[50];                                  // nome da cidade
    int populacao2;                                    // população da cidade
    float area2;                                       // àrea em km²
    float pib2;                                        // Pib em bilhões
    int pontosturisticos2;                             // quantidade de pontos turisticos

    // Cadastro da carta 1

    printf("=== Cadastro da carta 1 ===\n");

    printf("Digite a sigla do Estado (ex: CE): ");
    scanf("%s", estado1);

    printf("Digite o código da carta (ex: ce1): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1); // Colocando [^\n] o código poderá lê os nomes com espaço

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

    printf("Digite a sigla do Estado (ex: CE): ");
    scanf("%s", estado2);

    printf("Digite o código da carta (ex: ce1): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2); // Colocando [^\n] o código poderá lê os nomes com espaço

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB em bilhões: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    // Agora exibição dos dados para o usuario

    printf("\n=== Carta 1 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
        
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
