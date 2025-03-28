#include <stdio.h>

int main(){
    char estado1[20], estado2[20], codigo1[3], codigo2[3], cidade1[20], cidade2[20];
    int populacao1, locais1, populacao2, locais2;
    float area1, area2;
    float pib1, pib2;

    //CARTA 1 ** Irá lançar os dados contidos na primeira carta de super trunfo:

    printf("Digite o estado da carta 1: ");
    scanf("%s", &estado1);

    printf("Digiteo codigo da carta 1: ");
    scanf("%s", &codigo1);

    printf("Digite a cidade da carta 1: ");
    scanf("%s", &cidade1);

    printf("Digite a quantidade de habitantes da populacao na carta 1: ");
    scanf("%d", &populacao1);

    printf("Digite a area em km2 na carta 1: ");
    scanf("%f", &area1);

    printf("Digite o pib na carta 1: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turísticos na carta 1: ");
    scanf("%d", &locais1);

    //RESULTADOS DA CARTA 1
    printf("CARTA 1: \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Area em km2: %f\n", area1);
    printf("PIB (em bilhoes de reais): %f\n", pib1);
    printf("Numero de pontos turísticos: %d\n", locais1);


    //CARTA 2 ** Irá lançar os dados contidos na segunda carta de super trunfo:

    printf("Digite o estado da carta 2: ");
    scanf("%s", &estado2);

    printf("Digiteo codigo da carta 2: ");
    scanf("%s", &codigo2);

    printf("Digite a cidade da carta 2: ");
    scanf("%s", &cidade2);

    printf("Digite a quantidade de habitantes da populacao na carta 2: ");
    scanf("%d", &populacao2);

    printf("Digite a area em km2 na carta 2: ");
    scanf("%f", &area2);

    printf("Digite o pib na carta 2: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turísticos na carta 2: ");
    scanf("%d", &locais2);

    

     //RESULTADOS DA CARTA 2
    printf("CARTA 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Area em km2: %f\n", area2);
    printf("PIB (em bilhoes de reais): %f\n", pib2);
    printf("Numero de pontos turísticos: %d\n", locais2);


    return 0;
}