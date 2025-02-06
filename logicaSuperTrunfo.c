#include <stdio.h>
#include <string.h>

int main() {
    char estado1[3], estado2[3];
    char carta1[20], carta2[20];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int turismo1, turismo2;
    int pontos1 = 0, pontos2 = 0;  // Variáveis para pontuação

    printf("Estado 01:\n");
    scanf("%s", estado1);

    printf("Estado 02:\n");
    scanf("%s", estado2);

    printf("Código da carta 01:\n");
    scanf("%s", carta1);

    printf("Código da carta 02:\n");
    scanf("%s", carta2);

    printf("Nome da Cidade 01:\n");
    scanf("%s", cidade1);

    printf("Nome da Cidade 02:\n");
    scanf("%s", cidade2);

    printf("População 01:\n");
    scanf("%d", &populacao1);

    printf("População 02:\n");
    scanf("%d", &populacao2);

    printf("Área 01 (km²):\n");
    scanf("%f", &area1);

    printf("Área 02 (km²):\n");
    scanf("%f", &area2);
    
    printf("PIB da Cidade 01 (em bilhões):\n");
    scanf("%f", &PIB1);

    printf("PIB da Cidade 02 (em bilhões):\n");
    scanf("%f", &PIB2);

    printf("Número de pontos turísticos da Cidade 01:\n");
    scanf("%d", &turismo1);

    printf("Número de pontos turísticos da Cidade 02:\n");
    scanf("%d", &turismo2);

    // Comparações com pontuação
    if (populacao1 > populacao2) {
        printf("Cidade 01 tem maior população\n");
        pontos1++;
    } else {
        printf("Cidade 02 tem maior população\n");
        pontos2++;
    }

    if (area1 > area2) {
        printf("Cidade 01 tem a maior área\n");
        pontos1++;
    } else {
        printf("Cidade 02 tem a maior área\n");
        pontos2++;
    }

    if (PIB1 > PIB2) {
        printf("A Cidade 01 possui o maior PIB\n");
        pontos1++;
    } else {
        printf("A Cidade 02 possui o maior PIB\n");
        pontos2++;
    }

    if (turismo1 > turismo2) {
        printf("Cidade 01 tem mais pontos turísticos\n");
        pontos1++;
    } else {
        printf("Cidade 02 tem mais pontos turísticos\n");
        pontos2++;
    }

    // Definir a cidade vencedora
    printf("\n===============================\n");
    printf("Pontos Cidade 01 (%s): %d\n", cidade1, pontos1);
    printf("Pontos Cidade 02 (%s): %d\n", cidade2, pontos2);
    printf("===============================\n");

    if (pontos1 > pontos2) {
        printf("🏆 A cidade vencedora é: %s (%s) 🎉\n", cidade1, estado1);
    } else if (pontos2 > pontos1) {
        printf("🏆 A cidade vencedora é: %s (%s) 🎉\n", cidade2, estado2);
    } else {
        printf("⚖️ Empate entre %s e %s!\n", cidade1, cidade2);
    }

    return 0;
}
