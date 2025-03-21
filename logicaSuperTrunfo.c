#include <stdio.h>


int main() {

    char estado ='A';
    char codigo[] ="A01";
    char cidade[50] = "Fortaleza";
    int populacao1 = 1890000;
    float area1 = 32.501;
    float PIB1 = 80.200;
    int turismo1 = 123;

    printf("Carta 01:\n");

    printf("Estado: %c\n", estado);
    printf("Código: %s\n",codigo);
    printf("Nome da Cidade: %s\n",cidade);
    printf("População: %d\n",populacao1);
    printf("Área: %f km²\n",area1);
    printf("PIB: %f bilhões de reais\n",PIB1);
    printf("Numero de Pontos Turisticos: %d\n",turismo1);

    printf("---------------------------------------------\n");
    char estado2 ='B';
    char codigo2[] = "B02";
    char cidade2[50] ="Recife";
    int populacao2 = 1420000;
    float area2 = 31.150;
    float PIB2 = 123.20;
    int turismo2 = 80;


    printf("Carta 02:\n");

    printf("Estado: %c\n", estado2);
    printf("Código: %s\n",codigo2);
    printf("Nome da Cidade: %s\n",cidade2);
    printf("População: %d\n",populacao2);
    printf("Área: %f km²\n",area2);
    printf("PIB: %f bilhões de reais\n",PIB2);
    printf("Numero de Pontos Turisticos: %d\n",turismo2);

    printf("---------------------------------------------\n");
    printf("Comparando as 2 cartas:\n");
   if (populacao1,area1,PIB1 > populacao2,area2,PIB2){
        printf("Carta 01 (Fortaleza) venceu!\n");
    }else{
        printf("Carta 02 (Recife) venceu!\n");
   }
   





 
    return 0;
    
}
