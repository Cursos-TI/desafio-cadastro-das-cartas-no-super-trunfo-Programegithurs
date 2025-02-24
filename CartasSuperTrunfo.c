#include <stdio.h>

int main() {
    char Estado1[50] = "Pernambuco", Estado2[50] = "Bahia";
    char Codigo1[50] = "A01", Codigo2[50] = "B01";
    char Cidade1[50] = "Olinda", Cidade2[50] = "Barreiras";
    int populacao1 = 9059000, Populacao2 = 1414000;
    float Area1 = 98.312, Area2 = 567.295;
    float PIB1 = 5.79, PIB2 = 7.120;
    int Pontos1 = 20, pontos2 = 30;
    int carta1 = 1, carta2 = 2;

    printf("Carta %d:\n", carta1);
    printf("Estado: %s\n", Estado1);
    printf("Código: %s\n", Codigo1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: R$ %.2f bilhões\n", PIB1);
    printf("Pontos Turísticos: %d\n\n", Pontos1);

    printf("Carta %d:\n", carta2);
    printf("Estado: %s\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: R$ %.2f bilhões\n", PIB2);
    printf("Pontos Turísticos: %d\n", pontos2);

    return 0;
}

