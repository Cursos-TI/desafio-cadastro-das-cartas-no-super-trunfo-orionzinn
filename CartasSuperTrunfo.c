#include <stdio.h>

int main()
{
    char estado;
    char codigo[30];
    char cidade[30];
    int populacao;
    float area;
    float pib;
    int pontoTuristico;
    float densidade;
    float pibPerCapita;

    char estado2;
    char codigo2[20];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontoTuristico2;
    float densidade2;
    float pibPerCapita2;

    printf("Insira as informações da primeira carta\n");

    printf("Digite o estado da carta: ");
    scanf(" %c", &estado);

    printf("Digite o código da carta: ");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade);

    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontoTuristico);

    densidade = populacao / area;
    pibPerCapita = pib / populacao;

    printf("\nInsira as informações da segunda carta\n");

    printf("Digite o estado da carta: ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontoTuristico2);

    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    printf("\nCarta 1\n");
    printf("Estado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\n", 
        estado, codigo, cidade, populacao, area, pib, pontoTuristico, densidade, pibPerCapita);
    
    printf("\nCarta 2\n");
    printf("Estado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\n", 
        estado2, codigo2, cidade2, populacao2, area2, pib2, pontoTuristico2, densidade2, pibPerCapita2);
    
    return 0;
}