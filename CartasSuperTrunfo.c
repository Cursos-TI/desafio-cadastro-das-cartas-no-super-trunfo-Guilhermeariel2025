#include <stdio.h>


int main() {
     char carta01[15] = "Copas";
     char carta02[15] = "Espada";
     char estado1[30] = "Ceara";
     char estado2[30] = "Amazona";
     char codigo1[10] = "C123";
     char codigo2[10] = "AM234";
     char cidade1[20] = "Fortaleza";
     char cidade2[20] = "Manaus";
     int populacao1 = "8700000";
     int populacao2 = "8900000";
     float area1 =  4000;
     float area2 =  500;



    printf("Digite o nome da carta 01:");
    scanf("%s", &carta01);
    printf("O nome da carta 01 e: %s\n", carta01);
    
    printf("Digite o nome da carta 02:");
    scanf("%s", &carta02);
    printf("O nome da carta 02 e: %s\n", carta02);

    printf("Digite o estado 1:");
    scanf("%s", &estado1);
    printf("O estado 1 e: %s\n", estado1);
    
    printf("Digite o estado 2:");
    scanf("%s", &estado2);
    printf("O estado 2 e \n: %s\n", estado2);

    printf("Digite o codigo da carta 1:");
    scanf("%s", &codigo1);
    printf("O codigo da carta 1 e: %s\n", codigo1);

    printf("Digite o codigo da carta 2:");
    scanf("%s", &codigo2);
    printf("O codigo da carta 2 e: %s\n", codigo2);

    printf("Digite o Nome da Cidade 1:");
    scanf("%s", &cidade1);
    printf("O Nome da cidade 1 e: %s\n", cidade1);

    printf("Digite o Nome da Cidade 2:");
    scanf("%s", &cidade2);
    printf("O Nome da Cidade 2 e: %s\n", cidade2);

    printf("Digite a populacao da cidade 1:");
    scanf("%d", &populacao1);
    printf("A populacao da cidade 1 e: %d\n", populacao1);

    printf("Digite a populacao da cidade 2:");
    scanf("%d", &populacao2);
    printf("A populacao da cidade 1 e: %d\n", populacao2);

    printf("Digite a area da cidade 1:");
    scanf("%f", &area1);
    printf("A area da cidade 1 e: %f\n", area1);

    printf("Digite a area da cidade 2:");
    scanf("%f", &area2);
    printf("A area da cidade 2 e: %f\n", area2);

 return 0;

}
