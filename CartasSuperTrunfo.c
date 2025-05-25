#include <stdio.h>

// Programa para cadastrar e exibir duas cartas do Super Trunfo de Países
int main() {
    // Variáveis para a primeira carta
    char estado1; // Armazena uma letra de A a H, representando o estado
    char codigo1[4]; // Array de 4 caracteres (3 para código como A01 + terminador \0)
    char nome_cidade1[50]; // Array para o nome da cidade, até 49 caracteres + \0
    int populacao1; // Armazena a população como número inteiro
    float area1; // Armazena a área em km² como número de ponto flutuante
    float pib1; // Armazena o PIB em bilhões de reais como ponto flutuante
    int pontos_turisticos1; // Armazena o número de pontos turísticos como inteiro

    // Variáveis para a segunda carta (mesmo tipo e propósito das variáveis da Carta 1)
    char estado2;
    char codigo2[4];
    char nome_cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    // Instruções para o usuário - Cadastro da Carta 1
    printf("Cadastro da Carta 1:\n"); // Indica que estamos começando o cadastro da primeira carta

    printf("Digite o estado (A a H): "); // Solicita a letra do estado
    scanf(" %c", &estado1); // Lê um caractere; espaço antes de %c consome \n ou espaços residuais

    printf("Digite o código da carta (ex: A01): "); // Solicita o código da carta
    scanf("%3s", codigo1); // Lê até 3 caracteres para evitar estouro no array

    printf("Digite o nome da cidade (sem acento): "); // Solicita o nome da cidade
    scanf(" %[^\n]", nome_cidade1); // Lê string até \n; espaço consome resíduos; use sem acentos (ex.: Sao Paulo)

    printf("Digite a população: "); // Solicita a população
    scanf("%d", &populacao1); // Lê um número inteiro

    printf("Digite a área (em km²): "); // Solicita a área
    scanf("%f", &area1); // Lê um número de ponto flutuante

    printf("Digite o PIB (em bilhões de reais): "); // Solicita o PIB
    scanf("%f", &pib1); // Lê um número de ponto flutuante

    printf("Digite o número de pontos turísticos: "); // Solicita os pontos turísticos
    scanf("%d", &pontos_turisticos1); // Lê um número inteiro

    // Instruções para o usuário - Cadastro da Carta 2
    printf("\nCadastro da Carta 2:\n"); // Indica o início do cadastro da segunda carta, com \n para separação

    printf("Digite o estado (A a H): "); // Solicita a letra do estado
    scanf(" %c", &estado2); // Lê um caractere; espaço consome resíduos

    printf("Digite o código da carta (ex: B02): "); // Solicita o código da carta
    scanf("%3s", codigo2); // Lê até 3 caracteres

    printf("Digite o nome da cidade (sem acento): "); // Solicita o nome da cidade
    scanf(" %[^\n]", nome_cidade2); // Lê string até \n; use sem acentos (ex.: Rio de Janeiro)

    printf("Digite a população: "); // Solicita a população
    scanf("%d", &populacao2); // Lê um número inteiro

    printf("Digite a área (em km²): "); // Solicita a área
    scanf("%f", &area2); // Lê um número de ponto flutuante

    printf("Digite o PIB (em bilhões de reais): "); // Solicita o PIB
    scanf("%f", &pib2); // Lê um número de ponto flutuante

    printf("Digite o número de pontos turísticos: "); // Solicita os pontos turísticos
    scanf("%d", &pontos_turisticos2); // Lê um número inteiro

    // Exibição dos dados - Carta 1
    printf("\nCarta 1:\n"); // Inicia a exibição da Carta 1
    printf("Estado: %c\n", estado1); // Exibe o estado (uma letra)
    printf("Código: %s\n", codigo1); // Exibe o código (ex.: A01)
    printf("Nome da Cidade: %s\n", nome_cidade1); // Exibe o nome da cidade
    printf("População: %d\n", populacao1); // Exibe a população
    printf("Área: %.2f km²\n", area1); // Exibe a área com 2 casas decimais
    printf("PIB: %.2f bilhões de reais\n", pib1); // Exibe o PIB com 2 casas decimais
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1); // Exibe os pontos turísticos

    // Exibição dos dados - Carta 2
    printf("\nCarta 2:\n"); // Inicia a exibição da Carta 2
    printf("Estado: %c\n", estado2); // Exibe o estado
    printf("Código: %s\n", codigo2); // Exibe o código
    printf("Nome da Cidade: %s\n", nome_cidade2); // Exibe o nome da cidade
    printf("População: %d\n", populacao2); // Exibe a população
    printf("Área: %.2f km²\n", area2); // Exibe a área
    printf("PIB: %.2f bilhões de reais\n", pib2); // Exibe o PIB
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2); // Exibe os pontos turísticos

    return 0; // Finaliza o programa com sucesso
}
