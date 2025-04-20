#include <stdio.h>

int main() {
    char estado;
    char codigoDaCarta[50];
    char nomeDaCidade[50];
    int populacao;
    float area, PIB;
    int numeroDePontosTuristicos;
    int numeroDaCarta;
  
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
   
    printf("Digite o número de pontos turísticos= ");
    scanf("%d", &numeroDePontosTuristicos);

    printf("Digite o número da carta= ");
    scanf("%d", &numeroDaCarta);
   
    printf("- Carta: %d\n- Estado: %c\n- Código da carta: %s\n", numeroDaCarta, estado, codigoDaCarta);
    printf("- Nome da cidade: %s\n", nomeDaCidade);
    printf("- População: %d \n", populacao);
    printf("- Área: %f\n", area);
    printf("- PIB: %f\n", PIB);
    printf("- Pontos turísticos: %d\n",  numeroDePontosTuristicos);

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
   
    printf("Digite o número de pontos turísticos= ");
    scanf("%d", &numeroDePontosTuristicos);

    printf("Digite o número da carta= ");
    scanf("%d", &numeroDaCarta);

    printf("- Carta: %d\n- Estado: %c\n- Código da carta: %s\n", numeroDaCarta, estado, codigoDaCarta);
    printf("- Nome da cidade: %s\n", nomeDaCidade);
    printf("- População: %d \n", populacao);
    printf("- Área: %f\n", area);
    printf("- PIB: %f\n", PIB);
    printf("- Pontos turísticos: %d\n",  numeroDePontosTuristicos);
    
    return 0;

}