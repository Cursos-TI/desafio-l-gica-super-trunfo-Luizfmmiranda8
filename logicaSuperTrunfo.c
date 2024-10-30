#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() 
{
    //Declaração das variáveis necessárias para o cadastro das cartas
    char codigoDaCarta[3];
    int quantidadePontosTuristicos;
    float populacao;
    float area;
    float pib;
    float densidadePopulacional;
    float pibPerCapita;

    char codigoDaCarta2[3];
    int quantidadePontosTuristicos2;
    float populacao2;
    float area2;
    float pib2;
    float densidadePopulacional2;
    float pibPerCapita2;
    
    // Cadastro das Cartas:
    // Entrada de dados com informações das cartas
    printf("Digite o código da carta 1 - Consiste na letra do estado + número da cidade: \n");
    scanf("%s", &codigoDaCarta);

    printf("Digite a população da cidade 1: \n");
    scanf("%f", &populacao);

    printf("Digite a área da cidade 1 - em quilometros quadrados: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade 1: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos existentes na cidade 1: \n");
    scanf("%d", &quantidadePontosTuristicos);

    //Calculo das propriedade densidade populacional e pib per capita
    densidadePopulacional = populacao / area;
    pibPerCapita = pib / populacao;

    // Exibição dos Dados das Cartas:
    printf("Código da carta 1: %s\n", codigoDaCarta);
    printf("População da cidade 1: %f de pessoas\n", populacao);
    printf("Área da cidade 1: %f quilometros quadrados\n", area);
    printf("PIB da cidade 1: %f de reais\n", pib);
    printf("Número de pontos turísticos da cidade 1: %d", quantidadePontosTuristicos);
    printf("Densidade populacional da cidade 1: %.2f\n", densidadePopulacional);
    printf("PIB per capita da cidade 1: %.2f\n", pibPerCapita);

    // Entrada de dados com informações das cartas
    printf("Digite o código da carta 2 - Consiste na letra do estado + número da cidade: \n");
    scanf("%s", &codigoDaCarta2);

    printf("Digite a população da cidade 2: \n");
    scanf("%f", &populacao2);

    printf("Digite a área da cidade 2 - em quilometros quadrados: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade 2: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos existentes na cidade 2: \n");
    scanf("%d", &quantidadePontosTuristicos2);

    //Calculo das propriedade densidade populacional e pib per capita
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Exibição dos Dados das Cartas:
    printf("Código da carta 2: %s\n", codigoDaCarta2);
    printf("População da cidade 2: %f de pessoas\n", populacao2);
    printf("Área da cidade 2: %f quilometros quadrados\n", area2);
    printf("PIB da cidade 2: %f de reais\n", pib2);
    printf("Número de pontos turísticos da cidade 2: %d", quantidadePontosTuristicos2);
    printf("Densidade populacional da cidade 2: %.2f\n", densidadePopulacional2);
    printf("PIB per capita da cidade 2: %.2f\n", pibPerCapita2);

    //Menu para escolha da comparação
    int opcao;
    printf("Escolha uma opção para comparar as cartas: \n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Quantidade de pontos turísticos\n");
    printf("5. Densidade Populacional");
    printf("6. PIB per capita\n");
    scanf("%d", &opcao);

    //Comparação das cartas e exibição da carta vencedora
    switch(opcao)
    {
        case 1:
            if(populacao > populacao2)
            {
                //Carta 1 venceu
                printf("A carta 1 venceu a propriedade população com: %f\n", populacao);
            }
            else if (populacao2 > populacao)
            {
                //Carta 2 venceu
                printf("A carta 2 venceu a propriedade população com: %f\n", populacao2);
            }
            else
            {
                //Empate
                printf("A propriedade população foi empate entre as duas cartas\n");
            }
        break;
        case 2:
            if(area > area2)
            {
                //Carta 1 venceu
                printf("A carta 1 venceu a propriedade área com: %f\n", area);
            }
            else if (area2 > area)
            {
                //Carta 2 venceu
                printf("A carta 2 venceu a propriedade área com: %f\n", area2);
            }
            else
            {
                //Empate
                printf("A propriedade área foi empate entre as duas cartas\n");
            }
        break;
        case 3:
            if(pib > pib2)
            {
                //Carta 1 venceu
                printf("A carta 1 venceu a propriedade PIB com: %f\n", pib);
            }
            else if (pib2 > pib)
            {
                //Carta 2 venceu
                printf("A carta 2 venceu a propriedade PIB com: %f\n", pib2);
            }
            else
            {
                //Empate
                printf("A propriedade PIB foi empate entre as duas cartas\n");
            }
        break;
        case 4:
            if(quantidadePontosTuristicos > quantidadePontosTuristicos2)
            {
                //Carta 1 venceu
                printf("A carta 1 venceu a propriedade quantidade de pontos turísticos com: %d\n", quantidadePontosTuristicos);
            }
            else if (quantidadePontosTuristicos2 > quantidadePontosTuristicos)
            {
                //Carta 2 venceu
                printf("A carta 2 venceu a propriedade quantidade de pontos turísticos com: %d\n", quantidadePontosTuristicos2);
            }
            else
            {
                //Empate
                printf("A propriedade quatidade de pontos turísticos foi empate entre as duas cartas\n");
            }
        break;
        case 5:
            if(densidadePopulacional < densidadePopulacional2)
            {
                //Carta 1 venceu
                printf("A carta 1 venceu a propriedade densidade populacional com: %.2f\n", densidadePopulacional);
            }
            else if (densidadePopulacional2 < densidadePopulacional)
            {
                //Carta 2 venceu
                printf("A carta 2 venceu a propriedade densidade populacional com: %.2f\n", densidadePopulacional2);
            }
            else
            {
                //Empate
                printf("A propriedade densidade populacional foi empate entre as duas cartas\n");
            }
        break;
        case 6:
            if(pibPerCapita > pibPerCapita2)
            {
                //Carta 1 venceu
                printf("A carta 1 venceu a propriedade PIB per capita com: %.2f\n", pibPerCapita);
            }
            else if (pibPerCapita2 > pibPerCapita)
            {
                //Carta 2 venceu
                printf("A carta 2 venceu a propriedade PIB per capita com: %.2f\n", pibPerCapita2);
            }
            else
            {
                //Empate
                printf("A propriedade PIB per capita foi empate entre as duas cartas\n");
            }
        break;
        default:
        printf("Opção inválida!");
    }
    return 0;
}