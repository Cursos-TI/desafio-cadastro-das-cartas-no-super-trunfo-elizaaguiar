#include <stdio.h>

int main() {
    char estado;
    char codigoDaCarta[50];
    char nomeDaCidade[50];
    int populacao;
    float area, PIB;
    int numeroDePontosTuristicos;
    int numeroDaCarta;
    float densidadePopulacional;
    float PIBPerCapita;

// CARTA 1 //

    printf("Digite seu estado= ");
    scanf(" %c", &estado);
    
    printf("Digite o código da carta= ");
    scanf("%s", codigoDaCarta);

    printf("Digite o nome da cidade= ");
    scanf("%s", nomeDaCidade);
  
    printf("Digite a população= ");
    scanf("%d", &populacao);
   
    printf("Digite a área= ");
    scanf("%f", &area);
   
    printf("Digite o PIB= ");
    scanf("%f", &PIB);
    PIB *= 1000000000;
   
    printf("Digite o número de pontos turísticos= ");
    scanf("%d", &numeroDePontosTuristicos);

    printf("Digite o número da carta= ");
    scanf("%d", &numeroDaCarta);

    densidadePopulacional = populacao/area;
    printf(" %f ", densidadePopulacional);

    PIBPerCapita = PIB/populacao;
    printf("%f", PIBPerCapita);

   
    printf("- Carta: %d\n- Estado: %c\n- Código da carta: %s\n", numeroDaCarta, estado, codigoDaCarta);
    printf("- Nome da cidade: %s\n", nomeDaCidade);
    printf("- População: %d \n", populacao);
    printf("- Área: %.2f\n", area);
    printf("- PIB: %.2f\n", PIB);
    printf("- Pontos turísticos: %d\n",  numeroDePontosTuristicos);
    printf("- Densidade Populacional= %.2f\n ", densidadePopulacional);
    printf("- PIB per Capita= %.2f\n ", PIBPerCapita);

// CARTA 2 //

    printf("Digite seu estado= ");
    scanf(" %c", &estado);
    
    printf("Digite o código da carta= ");
    scanf("%s", codigoDaCarta);

    printf("Digite o nome da cidade= ");
    scanf("%s", nomeDaCidade);
  
    printf("Digite a população= ");
    scanf("%d", &populacao);
   
    printf("Digite a área= ");
    scanf("%f", &area);

    printf("Digite o PIB= ");
    scanf("%f", &PIB);
    PIB *= 1000000000; 
   
    printf("Digite o número de pontos turísticos= ");
    scanf("%d", &numeroDePontosTuristicos);

    printf("Digite o número da carta= ");
    scanf("%d", &numeroDaCarta);

    densidadePopulacional = populacao/area;
    printf("%f", densidadePopulacional);

    densidadePopulacional = PIB/populacao;
    printf("%f", densidadePopulacional);


    printf("- Carta: %d\n- Estado: %c\n- Código da carta: %s\n", numeroDaCarta, estado, codigoDaCarta);
    printf("- Nome da cidade: %s\n", nomeDaCidade);
    printf("- População: %d \n", populacao);
    printf("- Área: %.2f\n", area);
    printf("- PIB: %.2f\n", PIB);
    printf("- Pontos turísticos: %d\n",  numeroDePontosTuristicos);
    printf("- Densidade Populacional= %.2f\n ", densidadePopulacional);
    printf("- PIB per Capita= %.2f\n ", PIBPerCapita);
    
    return 0;

}