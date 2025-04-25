#include <stdio.h>

int main() {
    printf("### Desafio Cartas Super Trunfo ###\n\n");

    int populacao1, populacao2, pontosT1, pontosT2, opcao;
    float area1, area2, PIB1, PIB2;
    float densi1, densi2;
    char pais1[40], pais2[40];

    printf("Nome do país da carta 1: ");
    scanf(" %[^\n]", pais1); 
    printf("Nome do país da carta 2: ");
    scanf(" %[^\n]", pais2);

    printf("\n## Menu Inicial ##\n");
    printf("Escolha o atríbuto que será comparado:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao);

    printf("\n");

    switch (opcao) {
        case 1:
            printf("População de %s:\n", pais1);
            scanf("%d", &populacao1);
            printf("População de %s:\n", pais2);
            scanf("%d", &populacao2);

            printf("\nComparando População:\n");
            printf("%s: %d habitantes\n", pais1, populacao1);
            printf("%s: %d habitantes\n", pais2, populacao2);

            if (populacao1 > populacao2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2:
            printf("Área de %s:\n", pais1);
            scanf("%f", &area1);
            printf("Área de %s:\n", pais2);
            scanf("%f", &area2);

            printf("\nComparando Área:\n");
            printf("%s: %.2f km²\n", pais1, area1);
            printf("%s: %.2f km²\n", pais2, area2);

            if (area1 > area2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (area2 > area1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3:
            printf("PIB de %s (em bilhões):\n", pais1);
            scanf("%f", &PIB1);
            printf("PIB de %s (em bilhões):\n", pais2);
            scanf("%f", &PIB2);

            printf("\nComparando PIB:\n");
            printf("%s: %.2f bilhões\n", pais1, PIB1);
            printf("%s: %.2f bilhões\n", pais2, PIB2);

            if (PIB1 > PIB2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (PIB2 > PIB1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4:
            printf("Pontos turísticos de %s:\n", pais1);
            scanf("%d", &pontosT1);
            printf("Pontos turísticos de %s:\n", pais2);
            scanf("%d", &pontosT2);

            printf("\nComparando Pontos Turísticos:\n");
            printf("%s: %d Pontos\n", pais1, pontosT1);
            printf("%s: %d Pontos\n", pais2, pontosT2);

            if (pontosT1 > pontosT2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (pontosT2 > pontosT1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5:
            printf("População de %s:\n", pais1);
            scanf("%d", &populacao1);
            printf("Área de %s:\n", pais1);
            scanf("%f", &area1);
            densi1 = populacao1 / area1;

            printf("População de %s:\n", pais2);
            scanf("%d", &populacao2);
            printf("Área de %s:\n", pais2);
            scanf("%f", &area2);
            densi2 = populacao2 / area2;

            printf("\nComparando Densidade Demográfica:\n");
            printf("%s: %.2f hab/km²\n", pais1, densi1);
            printf("%s: %.2f hab/km²\n", pais2, densi2);
            printf("(A menor densidade vence!)\n");

            if (densi1 < densi2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (densi2 < densi1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opção errada!! Escolha de 1 até 5\n");
            break;
    }

    return 0;



}
