#include <stdio.h>

int main() {
    int populacao = 750000;
    char estado1[15] = "Ceará";  // Corrigido: Ajustei o tamanho do vetor para 15
    char estado2[20] = "Rio de Janeiro"; // Corrigido: Ajustei o tamanho do vetor para 20
    char carta1[20] = "Rei de Copas";  // Corrigido: Adicionado = para atribuição
    char carta2[15] = "4 de Paus";     // Corrigido: Adicionado = para atribuição
    char cidade1[20] = "Fortaleza";  // Corrigido: Ajustei o tamanho do vetor para 20
    char cidade2[20] = "Copacabana"; // Corrigido: Ajustei o tamanho do vetor para 20
    char codigo[15];
    float area = 16000;
    double pib;
    int numeros_pontos_turisticos;

    // Input e output para estado
    printf("Digite o Estado1: ");
    scanf("%s", estado1);
    printf("O estado é: %s\n", estado1);  // Corrigido: ajustei a mensagem

    // Input e output para estado
    printf("Digite o Estado2: ");
    scanf("%s", estado2);
    printf("O estado é %s\n", estado2); // Corrigido: ajustei a mensagem

    // Input e output para populacao
    printf("Digite a população: ");
    scanf("%d", &populacao);
    printf("A população é: %d\n", populacao);

    // Input e output para area
    printf("Digite a área em km²: ");
    scanf("%f", &area);
    printf("A área é: %.2f km²\n", area);

    // Input e output para pib
    printf("Digite o PIB: ");
    scanf("%lf", &pib);
    printf("O PIB é: %.2f\n", pib);

    // Input e output para numeros_pontos_turisticos
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numeros_pontos_turisticos);
    printf("O número de pontos turísticos é: %d\n", numeros_pontos_turisticos);

    // Input e output para cidade1
    printf("Digite a Cidade1: ");
    scanf("%s", cidade1);  // Corrigido para cidade1
    printf("A cidade1 é: %s\n", cidade1);

    // Input e output para codigo
    printf("Digite o código: ");
    scanf("%s", codigo);
    printf("O código é: %s\n", codigo);

    // Input e output para carta1
    printf("Digite a carta1: ");
    scanf("%s", carta1);
    printf("A carta1 é: %s\n", carta1);
    
    // Input e output para carta2
    printf("Digite a carta2: ");
    scanf("%s", carta2);
    printf("A carta2 é: %s\n", carta2);

    return 0;
}
