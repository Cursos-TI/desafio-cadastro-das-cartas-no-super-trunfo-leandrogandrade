#include <stdio.h>

// Desafio Super Trunfo - Países - Tema 3 - Aventureiro

int main() {

      
/*
        //Para teste de funcionalidade do programa
        char estado1[3]= "RJ", estado2[3] = "RJ";
        char codigocarta1[4] = "A01", codigocarta2[4] = "B01";
        char nomecidade1[20] = "ANGRA", nomecidade2[20] = "PARATY";
        unsigned long int populacao1 = 170000, populacao2 = 150000;
        float area1 = 813.42, area2 = 924.30;
        float pib1 = 2.60, pib2 = 1.95;
        int pontosturisticos1 = 365, pontosturisticos2 = 300, escolhadojogador;
        float dpop1, dpop2;
        float pibcap1, pibcap2;
        float SuperPoder1;
        float SuperPoder2;
        float resultadoPopulacao, resultadoArea, resultadoPIB, resultadoTuristicos, resultadoDensidade, resultadoPIBperCapita, resultadoSuperPoder;
 */

        char estado1[3], estado2[3];
        char codigocarta1[4], codigocarta2[4];
        char nomecidade1[20], nomecidade2[20];
        unsigned long int populacao1, populacao2;
        float area1, area2;
        float pib1, pib2;
        int pontosturisticos1, pontosturisticos2, escolhadojogador;
        float dpop1, dpop2;
        float pibcap1, pibcap2;
        float SuperPoder1;
        float SuperPoder2;
        float resultadoPopulacao, resultadoArea, resultadoPIB, resultadoTuristicos, resultadoDensidade, resultadoPIBperCapita, resultadoSuperPoder;
    
    //Título do Programa
    printf(" ------------------------------------------------\n");
    printf("| ** Bem vindo ao Desafio Super Trunfo - v5.0 ** |\n");
    printf(" ------------------------------------------------\n");
    printf(" \n");

    //***********************************************
    //Solicita a coleta de informações para Carta 01
    //***********************************************
    printf("** Insira as informações para Carta 01 **\n");
    printf(" \n");

    //Coleta das informações da Carta 01
    printf("Estado (ex: RJ, SP): ");
    scanf(" %c", estado1);
    printf("Código da Carta (ex: A01, B03): ");
    scanf("%s", codigocarta1);
    printf("Nome da Cidade: ");
    scanf("%s", nomecidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área Total em km²: ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de Reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos1);
    printf(" \n");

    //
    //Solicita a coleta de informações para Carta 02
    //
    printf("** Insira as informações para Carta 02 **\n");
    printf(" \n");

    //Coleta das informações para Carta 02
    printf("Estado (A a H): ");
    scanf(" %c", estado2);
    printf("Código da Carta (ex: A01, B03): ");
    scanf("%s", codigocarta2);
    printf("Nome da Cidade: ");
    scanf("%s", nomecidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área Total em km²: ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de Reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos2);

    printf(" \n");
    printf("----------------------------------\n");
    printf(" \n");
   
    //
    //Exibe os dados coletados da Carta 01
    //
    printf("* Exibindo os dados da Carta 01 *\n");
    printf(" \n");
    printf("Estado: %c\n",estado1);
    printf("Código da Carta: %s\n", codigocarta1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("População: %lu pessoas\n", populacao1);
    printf("Área Total: %.2f Km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Números de Pontos Turísticos: %d\n", pontosturisticos1);
   
    dpop1 = (float) populacao1 / area1; //Calculo da Densidade Populacional
    printf("Densidade Populacional: %.2f hab/km²\n", dpop1);
   
    pibcap1 = (float) (pib1 * 1000000000.0f) / populacao1;  //Calculo do PIB per Capita
    printf("PIB per Capita: %.2f\n", pibcap1);

    //Cálculo do Super Poder da Carta 1
    SuperPoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + (1.0f / dpop1) + pibcap1;
    printf("Super Poder: %.2f\n", SuperPoder1);
    
    
    printf(" \n");
    
    //
    //Exibe os dados coletados da Carta 02
    //
    printf("* Exibindo os dados da Carta 02 *\n");
    printf(" \n");
    printf("Estado: %c\n",estado2);
    printf("Código da Carta: %s\n", codigocarta2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %lu\n", populacao2);
    printf("Área Total: %.2f Km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Números de Pontos Turísticos: %d\n", pontosturisticos2);
   
    dpop2 = (float) populacao2 / area2;  //Calculo da Densidade Populacional
    printf("Densidade Populacional: %.2f hab/km²\n", dpop2);
    
    pibcap2 = (float) (pib2 * 1000000000.0f) / populacao2;  //Calculo do PIB per Capita
    printf("PIB per Capita: %.2f\n", pibcap2);

    //Cálculo do Super Poder da Carta 2
    SuperPoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + (1.0f / dpop2) + pibcap2;
    printf("Super Poder: %.2f\n", SuperPoder2);
    printf(" \n");
    
    // Exibição dos resultados das comparações    
 

    //Menu Interativo para escolha de um atributo para comparação
    printf("* Comparação das Cartas - Escolha um atributo *\n");
    printf(" \n");
    printf("1. População\n");
    printf("2. Área Total\n");
    printf("3. PIB\n");
    printf("4. Números de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. Super Poder\n");
    scanf("%d", &escolhadojogador);
    printf(" \n");

    // Exibi o resultado da caparação da carta escolhida 
    switch (escolhadojogador)
    {
    case 1:
        printf("Você escolheu População.\n");
        if (populacao1 > populacao2) {
            printf("Carta 01 - %s (%s) venceu com População: %lu\n", nomecidade1, estado1, populacao1);
        } else if (populacao1 < populacao2) {
            printf("Carta 02 - %s (%s) venceu com População: %lu\n", nomecidade2, estado2, populacao2);
        } else {
           printf("Empate!\n");
        }
        break;
     case 2:
        printf("Você escolheu Área Total.\n");
        if (area1 > area2) {
            printf("Carta 01 - %s (%s) venceu com Área Total: %.2f\n", nomecidade1, estado1, area1);
        } else if (area1 < area2) {
            printf("Carta 02 - %s (%s) venceu com Área Total: %.2f\n", nomecidade2, estado2, area2);
        } else {
           printf("Empate!\n");
        }
        break;       
      case 3:
        printf("Você escolheu PIB.\n");
        if (pib1 > pib2) {
            printf("Carta 01 - %s (%s) venceu com PIB: %.2f\n", nomecidade1, estado1, pib1);
        } else if (pib1 < pib2) {
            printf("Carta 02 - %s (%s) venceu com PIB: %.2f\n", nomecidade2, estado2, pib2);
        } else {
           printf("Empate!\n");
        }
        break;
     case 4:
        printf("Você escolheu Números de Pontos Turísticos.\n");
        if (pontosturisticos1 > pontosturisticos2) {
            printf("Carta 01 - %s (%s) venceu com Números de Pontos Turísticos: %d\n", nomecidade1, estado1, pontosturisticos1);
        } else if (pontosturisticos1 < pontosturisticos2) {
            printf("Carta 02 - %s (%s) venceu com Números de Pontos Turísticos: %d\n", nomecidade2, estado2, pontosturisticos2);
        } else {
           printf("Empate!\n");
        }
        break;
    case 5:
        printf("Você escolheu Densidade Populacional.\n");
        if (dpop1 < dpop2) {
            printf("Carta 01 - %s (%s) venceu com Densidade Populacional: %.2f\n", nomecidade1, estado1, dpop1);
        } else if (dpop1 > dpop2) {
            printf("Carta 02 - %s (%s) venceu com Densidade Populacional: %.2f\n", nomecidade2, estado2, dpop2);
        } else {
           printf("Empate!\n");
        }
        break;
     case 6:
        printf("Você escolheu Super Poder.\n");
        if (populacao1 > populacao2) {
            printf("Carta 01 - %s (%s) venceu com Super Poder: %.2f\n", nomecidade1, estado1, SuperPoder1);
        } else if (populacao1 < populacao2) {
            printf("Carta 02 - %s (%s) venceu com Super Poder: %.2f\n", nomecidade2, estado2, SuperPoder2);
        } else {
           printf("Empate!\n");
        }
        break;
    default:
        printf("Opção inválida.\n");
        break;
    }

    //
    //Encerramento do Programa
    //
    printf(" \n");
    printf("Resultados exibidos com sucesso!");
    printf(" \n");
  
    return 0;
}
