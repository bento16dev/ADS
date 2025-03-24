#include <stdio.h>

// Desafio Criando as Cartas do super trunfo
// Tema 1 - Cadastro das Cartas - Desafio1


int main() {
    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Dados da carta 1

    char estado1; // Inicial do estado escolhido pelo usuário (ex: 'C' para Ceará).
    char codigoDaCarta1[10];  // Código da carta (ex: 'A01').
    char nomeDaCidade1[30]; // Nome da cidade (ex: 'Fortaleza').
    int populacao1; // População da cidade.
    float areaKm1; // Área da cidade em km².
    float pib1; // PIB da cidade em milhões de reais.
    int qtdPontosTuristicos1; // Quantidade de pontos turísticos na cidade.
    

    // Dados da carta 2

    char estado2;
    char codigoDaCarta2[10];
    char nomeDaCidade2[30];
    int populacao2;
    float areaKm2;
    float pib2;
    int qtdPontosTuristicos2;
    

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // A leitura dos dados da carta 1

    printf("Digite os dados da carta 1 abaixo:\n");

    printf("\nDigite a inicial do estado: ");
    scanf("%c", &estado1);

    printf("Digite o Código da carta (ex: A = inicial do estado 'A01, A02...'): ");
    scanf("%10s", &codigoDaCarta1);


    printf("Digite o nome da cidade: ");
    scanf(" %s", nomeDaCidade1);

    printf("Digite o número da população da cidade: ");
    scanf("%lu", &populacao1);

    printf("Digite o tamanho da área em Km² da cidade: ");
    scanf("%f", &areaKm1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &qtdPontosTuristicos1);

    // A leitura dos dados da carta 2

    printf("\nDigite os dados da carta 2 abaixo:\n");

    printf("\nDigite a inicial do estado: ");
    scanf(" %c", &estado2);

    printf("Digite o Código da carta (ex: A = inicial do estado 'A01, A02...'): ");
    scanf("%s", &codigoDaCarta2);

    printf("Digite o nome da cidade: ");
    scanf(" %s", nomeDaCidade2);

    printf("Digite o número da população da cidade: ");
    scanf("%lu", &populacao2);

    printf("Digite o tamanho da área em Km² da cidade: ");
    scanf("%f", &areaKm2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &qtdPontosTuristicos2);


    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Saída dos dados das cartas 1 e 2:
    // Mostra as cartas e suas informações.

    printf("\n\nLogo abaixo terá as descrições das cartas: \n\n");

    printf("Carta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoDaCarta1);
    printf("Nome da Cidade: %s\n", nomeDaCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", areaKm1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", qtdPontosTuristicos1);
    


    printf("\n\nCarta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoDaCarta2);
    printf("Nome da Cidade: %s\n", nomeDaCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", areaKm2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n\\nn\n", qtdPontosTuristicos2);
    

    

    return 0;
}