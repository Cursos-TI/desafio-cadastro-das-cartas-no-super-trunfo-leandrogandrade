#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {

        char estado1, estado2;
        char codigocarta1[4], codigocarta2[4];
        char nomecidade1[20], nomecidade2[20];
        int populacao1, populacao2;
        float area1, area2;
        float pib1, pib2;
        int pt1, pt2;
        float dpop1, dpop2;
        float pibcap1, pibcap2;

    //Título do Programa
    printf(" ------------------------------------------------\n");
    printf("| ** Bem vindo ao Desafio Super Trunfo - v2.0 ** |\n");
    printf(" ------------------------------------------------\n");
    printf(" \n");

    //Solicita a coleta de informações para Carta 01
    printf("** Insira as informações para Carta 01 **\n");
    printf(" \n");

    //Coleta das informações da Carta 01
    printf("Estado (A a H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01, B03): ");
    scanf("%s", &codigocarta1);
    printf("Nome da Cidade: ");
    scanf("%s", &nomecidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área Total em km²: ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de Reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pt1);
    printf(" \n");

    //Solicita a coleta de informações para Carta 02
    printf("** Insira as informações para Carta 02 **\n");
    printf(" \n");

    //Coleta das informações para Carta 02
    printf("Estado (A a H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: A01, B03): ");
    scanf("%s", &codigocarta2);
    printf("Nome da Cidade: ");
    scanf("%s", &nomecidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área Total em km²: ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de Reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pt2);

    printf(" \n");
    printf("----------------------------------\n");
    printf(" \n");

    //Exibe os dados coletados da Carta 01
    printf("* Exibindo os dados da Carta 01 *\n");
    printf(" \n");
    printf("Estado: %c\n",estado1);
    printf("Código da Carta: %s\n", codigocarta1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("População: %d pessoas\n", populacao1);
    printf("Área Total: %.2f Km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Números de Pontos Turísticos: %d\n", pt1);
   
    dpop1 = (float) populacao1 / area1; //Calculo da Densidade Populacional
    printf("Densidade Populacional: %.2f hab/km²\n", dpop1);
   
    pibcap1 = (float) (pib1 * 1000000000.0f) / populacao1;  //Calculo do PIB per Capita
    printf("PIB per Capita: %.2f\n", pibcap1);

    printf(" \n");
    
    //Exibe os dados coletados da Carta 02
    printf("* Exibindo os dados da Carta 02 *\n");
    printf(" \n");
    printf("Estado: %c\n",estado2);
    printf("Código da Carta: %s\n", codigocarta2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área Total: %.2f Km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Números de Pontos Turísticos: %d\n", pt2);
   
    dpop2 = (float) populacao2 / area2;  //Calculo da Densidade Populacional
    printf("Densidade Populacional: %.2f hab/km²\n", dpop2);
    
    pibcap2 = (float) (pib2 * 1000000000.0f) / populacao2;  //Calculo do PIB per Capita
    printf("PIB per Capita: %.2f\n", pibcap1);

    //Encerramento do Programa
    printf(" \n");
    printf("Resultados exibidos com sucesso!");
    printf(" \n");
    printf("Pressione qualquer tecla para sair...\n");
    scanf(" %c"); // Espera por uma tecla para encerrar o programa

    return 0;
}
