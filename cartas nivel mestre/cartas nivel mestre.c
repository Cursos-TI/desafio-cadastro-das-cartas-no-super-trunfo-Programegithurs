#include <stdio.h>

int main() {
    // Declaração de variáveis
    char Estado1[50] = "Pernambuco", Estado2[50] = "Bahia";
    char Codigo1[50] = "A01", Codigo2[50] = "B01";
    char Cidade1[50] = "Olinda", Cidade2[50] = "Barreiras";
    int populacao1 = 9059000, Populacao2 = 1414000;
    float Area1 = 98.312, Area2 = 567.295;
    float PIB1 = 5.79, PIB2 = 7.120;
    int Pontos1 = 20, pontos2 = 30;
    int carta1 = 1, carta2 = 2;

    // Cálculo de Densidade Populacional e PIB per Capita
    float Densidade_populacional1 = (float)populacao1 / Area1;
    float Densidade_populacional2 = (float)Populacao2 / Area2;
    float PIB_per_capita1 = PIB1 / populacao1;
    float PIB_per_capita2 = PIB2 / Populacao2;

    // Exibição de resultados
    printf("Carta %d:\n", carta1);
    printf("Estado: %s\n", Estado1);
    printf("Código: %s\n", Codigo1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: R$ %.2f bilhões\n", PIB1);
    printf("PIB per capita: R$ %.2f\n", PIB_per_capita1);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_populacional1);
    printf("Pontos Turísticos: %d\n", Pontos1);

    printf("Carta %d:\n", carta2);
    printf("Estado: %s\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: R$ %.2f bilhões\n", PIB2);
    printf("PIB per capita: R$ %.2f\n", PIB_per_capita2);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_populacional2);
    printf("Pontos Turísticos: %d\n", pontos2);

    // Comparação das cartas
    printf("\nComparação das cartas:\n");
    printf("Vencedor em população: Carta %d\n", (populacao1 > Populacao2) ? 1 : 2);
    printf("Vencedor em área: Carta %d\n", (Area1 > Area2) ? 1 : 2);
    printf("Vencedor em PIB: Carta %d\n", (PIB1 > PIB2) ? 1 : 2);
    printf("Vencedor em PIB per capita: Carta %d\n", (PIB_per_capita1 > PIB_per_capita2) ? 1 : 2);
    printf("Vencedor em densidade populacional: Carta %d\n", (Densidade_populacional1 > Densidade_populacional2) ? 1 : 2);
    printf("Vencedor em pontos turísticos: Carta %d\n", (Pontos1 > pontos2) ? 1 : 2);
    
}