#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdio.h>

int main() {

    // Variáveis da Carta 1
    char nome1[50];
    unsigned long int populacao1;
    float area1, pib1, densidade1, pibPerCapita1, superPoder1;
    int pontos1;

    // Variáveis da Carta 2
    char nome2[50];
    unsigned long int populacao2;
    float area2, pib2, densidade2, pibPerCapita2, superPoder2;
    int pontos2;

    // --- Carta 1 ---
    
   printf("Carta 1\n" );
    printf("\nDigite o nome da cidade: \n");
    scanf("%s",&nome1);

    printf("Digite a população da cidade: \n");
    scanf("%f",&populacao1);

    printf("Digite a area da cidade (em km²): \n");
    scanf("%f",&area1);

    printf("Digite o PIB da cidade (em milhões): \n");
    scanf("%f",&pib1);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d",&pontos1);


    // Cálculos Carta 1
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;
    superPoder1 = populacao1 + area1 + pib1 + pontos1 + pibPerCapita1 + (1.0 / densidade1); 


    // --- Carta 2 ---
    printf("\nCarta 2:\n");
   
    printf("Nome da cidade: Mariana\n");

    //Gerando numeros aleatorios
    srand (time(0));
    printf("Digite a Pulação da cidade: \n");
    populacao2 = rand() % 1000000 + 1000; 
    printf("População: %lu\n", populacao2);

    printf("Digite a area da cidade (em km²): \n");
    area2 = (rand() % 500) + 10; 
    printf("Area: %2f km² \n",area2);
  
    printf("Digite o PIB da cidade (em milhões): \n");
    pib2 = (rand() % 100000) + 1000; 
    printf("PIB: %.2f \n", pib2);

    printf("Digite o número de pontos turísticos da cidade: \n");
    pontos2 = rand() % 5 + 1; 
    printf(" Pontos turisticos: %d \n", pontos2);

    
    // Cálculos Carta 2
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;
    superPoder2 = populacao2 + area2 + pib2 + pontos2 + pibPerCapita2 + (1.0 / densidade2);



    int comando = 0;

    printf("\n##ESCOLHA O PARAMETRO DE COMPARAÇÃO DAS CARTAS\n");

    printf("Digite o comando 1 para População:\n");
    printf("Digite o comando 2 para Area:\n");
    printf("Digite o comando 3 para PIB:\n");
    printf("Digite o comando 4 para Pontos Turisticos:\n");
    printf("Digite o comando 5 para Densidade Demografica:\n ");
    scanf("%d", &comando);


    switch (comando)
    {
    case 1:
        printf("\nPopulação: Carta %d venceu\n", (populacao1 > populacao2 ? 1 : 2));
        break;

    case 2:
        printf("Área: Carta %f venceu\n",(populacao1 > populacao2 ? 1 : 2));
         break;

    case 3:
        printf("PIB: Carta %f venceu\n",(populacao1 > populacao2 ? 1 : 2));
         break;     
         
    case 4:
        printf("Número de pontos turísticos: Carta %d venceu\n",(populacao1 > populacao2 ? 1 : 2));
        break; 
            
    case 5:
    printf("Densidade demografica: Carta %f venceu\n",(populacao1 < populacao2? 1 : 2));
          break;

    default:
        printf("Opção invalida!");
        break;

    
    // --- Comparação das Cartas ---

    printf("\n--- Comparação de Cartas ---\n");
    printf("\nPopulação: Carta %d venceu\n", (populacao1 > populacao2 ? 1 : 2));
    printf("Área: Carta %d venceu\n", (area1 > area2 ? 1 : 2));
    printf("PIB: Carta %d venceu\n", (pib1 > pib2 ? 1 : 2));
    printf("Pontos Turísticos: Carta %d venceu\n", (pontos1 > pontos2 ? 1 : 2));
    printf("Densidade Populacional: Carta %d venceu\n", (densidade1 < densidade2 ? 1 : 2));
    printf("PIB per Capita: Carta %d venceu\n", (pibPerCapita1 > pibPerCapita2 ? 1 : 2));
    printf("Super Poder: Carta %d venceu\n", (superPoder1 > superPoder2 ? 1 : 2));

 
    
    }

    return 0;
    
        }
