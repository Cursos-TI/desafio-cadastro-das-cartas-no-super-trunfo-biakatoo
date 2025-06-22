#include <stdio.h>

int main () {

    // Variaveis Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // variaveis Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Cadastro Carta 1
    printf("Cadastro da Carta 1:\n");

    printf("Informe a letra do Estado: \n");
    scanf(" %c", &estado1);

    printf("Informe o código da carta (ex: A01): \n");
    scanf("%s", codigo1);

    printf("Informe o nome da cidade: \n");
    scanf(" %[^\n]", nomeCidade1);

    printf("Informe a população: \n");
    scanf("%d", &populacao1);

    printf("Informe a área: \n");
    scanf("%f", &area1);

    printf("Informe o PIB: \n");
    scanf("%f", &pib1);

    printf("Informe o número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos1);

    // Cadastro Carta 2
    printf("\nCadastro da Carta 2:\n");

    printf("Informe a letra do Estado: \n");
    scanf(" %c", &estado2);

    printf("Informe o código da carta (ex: A01): \n");
    scanf("%s", codigo2);

    printf("Informe o nome da cidade: \n");
    scanf(" %[^\n]", nomeCidade2);

    printf("Informe a população: \n");
    scanf("%d", &populacao2);

    printf("Informe a área: \n");
    scanf("%f", &area2);

    printf("Informe o PIB: \n");
    scanf("%f", &pib2);

    printf("Informe o número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    //Cáculos Carta 1
    float densidade1, pibPerCapita1;
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    //Cáculos Carta 2
    float densidade2, pibPerCapita2;
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    
    // Dados Carta 1
    printf("\nCarta 1:\n");

    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População %d\n", populacao1);
    printf("Aréa: %.2f Km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f hab/Km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Dados Carta 2
    printf("\nCarta 2:\n");

    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População %d\n", populacao2);
    printf("Aréa: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/Km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;

}