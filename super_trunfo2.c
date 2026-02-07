#include <stdio.h>

int main() {
    
    /* Declaração de variáveis: */

    // CARTA 1
    char estado1;
    char codigo1[4];      // Ex: A01 + '\0'
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // CARTA 2 
    char estado2;
    char codigo2[4];      // Ex: B02 + '\0'
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    // Variáveis Calculadas
    float densidade1, densidade2;
    float pibpercapita1, pibpercapita2;

    /* Dados da carta 1: */

    printf("= Cadastro da Carta 1 =\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado1);

    printf("Codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    /* Dados da carta 2: */

    printf("\n= Cadastro da Carta 2 =\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Codigo da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    /* Cálculos: */

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2; 

    /* Comparação de cartas: POPULAÇÃO */

printf("\nCOMPARAÇÃO DE CARTAS\n");
   printf("Atributo: populacao\n\n");
    printf("Carta 1 - %s (%c): %d habitantes\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %d habitantes\n", cidade2, estado2, populacao2);
 if (populacao1 > populacao2) {
    printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
 } else if (populacao1 < populacao2) {
    printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
 } else  {
    printf("\nResultado: Empate!\n");
    }

    return 0;
}