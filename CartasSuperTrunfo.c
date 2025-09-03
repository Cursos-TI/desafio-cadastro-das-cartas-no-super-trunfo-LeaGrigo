#include <stdio.h>

int main() {
    // Carta 1
    char estado1[10];
    char codigodacarta1[4];
    char cidade1[30];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibpercapita1;
    float superpoder1;

    // Carta 2
    char estado2[10];
    char codigodacarta2[4];
    char cidade2[30];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibpercapita2;
    float superpoder2;

    // --- Primeira carta ---
    printf("*** Carta 1 *** \n");

    printf("Digite o Estado: ");
    scanf("%s", estado1);

    printf("Digite o código da carta: ");
    scanf("%s", codigodacarta1);

    printf("Cidade: ");
    scanf("%s", cidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    densidade1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;
    superpoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibpercapita1 + (1 / densidade1);

    printf("Densidade populacional: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n", pibpercapita1);
    printf("Super Poder: %.2f\n\n", superpoder1);

    // --- Segunda carta ---
    printf("*** Carta 2 ***\n");

    printf("Digite o Estado: ");
    scanf("%s", estado2);

    printf("Digite o código da carta: ");
    scanf("%s", codigodacarta2);

    printf("Cidade: ");
    scanf("%s", cidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidade2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;
    superpoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibpercapita2 + (1 / densidade2);

    printf("Densidade populacional: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", pibpercapita2);
    printf("Super Poder: %.2f\n\n", superpoder2);

    // --- Comparação ---
    printf("=== Comparação de Cartas ===\n");

    printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2 ? 1 : 2), (populacao1 > populacao2 ? 1 : 0));
    printf("Área: Carta %d venceu (%d)\n", (area1 > area2 ? 1 : 2), (area1 > area2 ? 1 : 0));
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2 ? 1 : 2), (pib1 > pib2 ? 1 : 0));
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (pontosTuristicos1 > pontosTuristicos2 ? 1 : 2), (pontosTuristicos1 > pontosTuristicos2 ? 1 : 0));
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade1 < densidade2 ? 1 : 2), (densidade1 < densidade2 ? 1 : 0));
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pibpercapita1 > pibpercapita2 ? 1 : 2), (pibpercapita1 > pibpercapita2 ? 1 : 0));
    printf("Super Poder: Carta %d venceu (%d)\n", (superpoder1 > superpoder2 ? 1 : 2), (superpoder1 > superpoder2 ? 1 : 0));

    return 0;
}
