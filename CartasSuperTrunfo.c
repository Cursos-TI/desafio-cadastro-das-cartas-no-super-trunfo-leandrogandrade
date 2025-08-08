#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

        char estado1, estado2;
        char codigocarta1[3], codigocarta2[3];
        char nomecidade1[20], nomecidade2[20];
        int populacao1, populacao2;
        float area1, area2;
        float pib1, pib2;
        int pt1, pt2;

    //Título do Programa
    printf("** Bem vindo ao Desafio Super Trunfo - v1.0 **\n");

    //Solicita a coleta de informações para Carta 01
    printf("** Insira as informações para Carta 01 **\n");

    //Coleta das informações da Carta 01
    printf("Estado (A a H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01, B03): ");
    scanf("%s", codigocarta1);
    printf("Nome da Cidade: ");
    scanf("%s", nomecidade1);
    printf("População (Somente números): ");
    scanf("%d", &populacao1);
    printf("Área Total em km² (Somente números): ");
    scanf("%f", &area1);
    printf("PIB em bilhões de Reais (Somente números): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pt1);

    //Solicita a coleta de informações para Carta 02
    printf("** Insira as informações para Carta 02 **\n");

    //Coleta das informações para Carta 02
    printf("Estado (A a H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: A01, B03): ");
    scanf("%s", codigocarta2);
    printf("Nome da Cidade: ");
    scanf("%s", nomecidade2);
    printf("População (Somente números): ");
    scanf("%d", &populacao2);
    printf("Área Total em km² (Somente números): ");
    scanf("%f", &area2);
    printf("PIB em bilhões de Reais (Somente números): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pt2);

    printf("----------------------------------\n");

    //Exibe os dados coletados da Carta 01
    printf("* Exibindo os dados da Carta 01 *\n");
    printf(" \n");
    printf("Estado: %c\n",estado1);
    printf("Código da Carta: %s\n", codigocarta1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área Total: %.2f Km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Números de Pontos Turísticos: %d\n", pt1);
    printf(" \n");
    
    //Exibe os dados coletados da Carta 02
    printf("* Exibindo os dados da Carta 02 *\n");
    printf(" \n");
    printf("Estado: %c\n",estado1);
    printf("Código da Carta: %s\n", codigocarta1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área Total: %.2f Km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Números de Pontos Turísticos: %d\n", pt1);
    printf(" \n");
    printf("Resultados exibidos com sucesso!");
    printf(" \n");
    printf("Pressione qualquer tecla para sair...\n");
    scanf(" %c"); // Espera por uma tecla para encerrar o programa

    return 0;
}
