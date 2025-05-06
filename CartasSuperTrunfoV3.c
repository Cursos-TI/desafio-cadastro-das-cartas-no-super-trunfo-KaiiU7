#include <stdio.h> // Incluido as bibliotecas necessarias para o funcionamento do programa

int main() { // Todo Código começa com "int main"
	
    // Definindo Variaveis.
    // Aqui defini as variaveis do Player 1, tive que separar pois estava dando erro de variavel duplicada.

    char EstadoP1[20]; // Aqui defini uma var do tipo string (array de char) Valor esperado "A""H"
    char CodigoP1[20]; // Aqui defini uma var do tipo string (array de char) Valor esperado Inicial do estado seguido de um número, ex: "A01"
    char CidadeP1[20]; // Aqui defini uma var do tipo string (array de char) (array de char) Valor esperado "VárzeaPaulista""SãoPaulo"
    signed long int PopulacaoP1; // Aqui defini uma var do tipo inteiro (Valor esperado 1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000)
    int AreaP1; // Aqui defini uma var do tipo float (número decimal) (Valor esperado 1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000)
    long long int PibP1; // Aqui defini uma var do tipo float (número decimal) (Valor esperado 1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000)
    int PontosTuristicoP1; // Aqui defini uma var do tipo inteiro (Valor esperado 1, 2, 3, 4, 5, 6, 7, 8, 9, 10)
    float DensidadePopulacionalP1; // Nova função que calcula a densidade populacional, que é a população dividida pela área.
    float PibPerCapitaP1; // Nova função que calcula o PIB per capita, que é o PIB dividido pela população.
    float SuperPoderP1; // Aqui defini uma var do tipo float (número decimal) (Valor esperado 1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000)

// Aqui defini as variaveis do Player 2, tive que separar pois estava dando erro de variavel duplicada.

    char EstadoP2[20]; // Aqui defini uma var do tipo string (array de char) Valor esperado "A""H"
    char CodigoP2[20]; // Aqui defini uma var do tipo string (array de char) Valor esperado Inicial do estado seguido de um número, ex: "A01"
    char CidadeP2[20]; // Aqui defini uma var do tipo string (array de char) (array de char) Valor esperado "VárzeaPaulista""SãoPaulo"
    signed long int PopulacaoP2; // Aqui defini uma var do tipo inteiro (Valor esperado 1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000)
    int AreaP2; // Aqui defini uma var do tipo float (número decimal) (Valor esperado 1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000)
    long long int PibP2; // Aqui defini uma var do tipo float (número decimal) (Valor esperado 1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000)
    int PontosTuristicoP2; // Aqui defini uma var do tipo inteiro (Valor esperado 1, 2, 3, 4, 5, 6, 7, 8, 9, 10)
    float DensidadePopulacionalP2; // Nova função que calcula a densidade populacional, que é a população dividida pela área.
    float PibPerCapitaP2; // Nova função que calcula o PIB per capita, que é o PIB dividido pela população.
    float SuperPoderP2; // Aqui defini uma var do tipo float (número decimal) (Valor esperado 1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000)

printf(" Bem Vindo a versão de teste do jogo Super Trunfo\n"); // Aqui printei na tela a mensagem de boas vindas
printf(" Por favor player 1, preencha os dados abaixo:\n"); // Aqui printei na tela a mensagem de boas vindas

// Carta Do Primeiro Player

printf(" Estado, Digite Somente a Inicial do Estado Ex São Paulo S: "); // Aqui solicitei o user para digitar a inicial do estado
scanf("%s", EstadoP1); // Aqui armazenei o valor digitado pelo user na var "Estado"

printf("Código, Digite a Inicial Do Estado seguido de um número Ex S01: "); // Aqui solicitei o user para digitar o codigo do estado
scanf("%s", CodigoP1); // Aqui armazenei o valor digitado pelo user na var "Codigo"

printf(" Cidade, Digite O Nome Da Cidade : "); // Aqui solicitei o user para digitar o nome da cidade
scanf("%s", CidadeP1); // Aqui armazenei o valor digitado pelo user na var "Cidade"

printf(" Populacao, Digite Somente Números Ex 1000: "); // Aqui solicitei o user para digitar a populacao da cidade
scanf("%ld", &PopulacaoP1); // Aqui armazenei o valor digitado pelo user na var "Populacao"

printf(" Area km, Digite Somente Números Ex 1000: "); // Aqui solicitei o user para digitar a area da cidade
scanf("%d", &AreaP1); // Aqui armazenei o valor digitado pelo user na var "Area"

printf(" Pib, Digite Somente Números Ex 1000: "); // Aqui solicitei o user para digitar o pib da cidade
scanf("%lld", &PibP1); // Aqui armazenei o valor digitado pelo user na var "Pib"

printf(" Pontos Turisticos, Digite Somente Números Ex 1: "); // Aqui solicitei o user para digitar os pontos turisticos da cidade
scanf("%d", &PontosTuristicoP1); // Aqui armazenei o valor digitado pelo user na var "PontosTuristico"

DensidadePopulacionalP1 = (float) PopulacaoP1 / AreaP1; // Aqui calculei a densidade populacional do player 1, que é a população dividida pela área.
PibPerCapitaP1 = (float) PibP1 / PopulacaoP1; // Aqui calculei o PIB per capita do player 1, que é o PIB dividido pela população.
SuperPoderP1 = (float) PopulacaoP1 + AreaP1 + PibP1 + PontosTuristicoP1; // Aqui calculei o super poder do player 1, que é a soma da população, área, PIB e pontos turísticos.

printf("--- Carta 1 ---\n"); // Aqui printei na tela o identificador da primeira carta

printf(" Estado: %s \n", EstadoP1); // Aqui printei na tela o valor da var "Estado"
printf(" Código: %s \n", CodigoP1); // Aqui printei na tela o valor da var "Codigo"
printf(" Cidade: %s \n", CidadeP1); // Aqui printei na tela o valor da var "Cidade"
printf(" Populacao: %ld \n", PopulacaoP1); // Aqui printei na tela o valor da var "Populacao"
printf(" Area: %d \n", AreaP1); // Aqui printei na tela o valor da var "Area"
printf(" Pib: %lld \n", PibP1); // Aqui printei na tela o valor da var "Pib"
printf(" Pontos Turisticos: %d \n", PontosTuristicoP1); // Aqui printei na tela o valor da var "PontosTuristico"
printf(" Densidade Populacional: %f \n", DensidadePopulacionalP1); // Aqui printei na tela o valor da var "DensidadePopulacional"
printf(" Pib Per Capita: %f \n", PibPerCapitaP1); // Aqui printei na tela o valor da var "PibPerCapita"
printf(" Super Poder: %f \n", SuperPoderP1); // Aqui printei na tela o valor da var "SuperPoder"

printf(" Muito Bem, agora player 2 por favor preencha sua carta...\n"); // Aqui solicitei o user para preencher a segunda carta

// Carta Do Segundo Player

printf(" Estado, Digite Somente a Inicial do Estado Ex São Paulo S: "); // Aqui solicitei o user para digitar a inicial do estado
scanf("%s", EstadoP2); // Aqui armazenei o valor digitado pelo user na var "Estado"

printf("Código, Digite a Inicial Do Estado seguido de um número Ex S01: "); // Aqui solicitei o user para digitar o codigo do estado
scanf("%s", CodigoP2); // Aqui armazenei o valor digitado pelo user na var "Codigo"

printf(" Cidade, Digite O Nome Da Cidade : "); // Aqui solicitei o user para digitar o nome da cidade
scanf("%s", CidadeP2); // Aqui armazenei o valor digitado pelo user na var "Cidade"

printf(" Populacao, Digite Somente Números Ex 1000: "); // Aqui solicitei o user para digitar a populacao da cidade
scanf("%ld", &PopulacaoP2); // Aqui armazenei o valor digitado pelo user na var "Populacao"

printf(" Area km, Digite Somente Números Ex 1000: "); // Aqui solicitei o user para digitar a area da cidade
scanf("%d", &AreaP2); // Aqui armazenei o valor digitado pelo user na var "Area"

printf(" Pib, Digite Somente Números Ex 1000: "); // Aqui solicitei o user para digitar o pib da cidade
scanf("%lld", &PibP2); // Aqui armazenei o valor digitado pelo user na var "Pib"

printf(" Pontos Turisticos, Digite Somente Números Ex 1: "); // Aqui solicitei o user para digitar os pontos turisticos da cidade
scanf("%d", &PontosTuristicoP2); // Aqui armazenei o valor digitado pelo user na var

DensidadePopulacionalP2 = (float)PopulacaoP2 / AreaP2; // Aqui calculei a densidade populacional do player 2, que é a população dividida pela área.
PibPerCapitaP2 = (float) PibP2 / PopulacaoP2; // Aqui calculei o PIB per capita do player 2, que é o PIB dividido pela população.
SuperPoderP2 = (float) PopulacaoP2 + AreaP2 + PibP2 + PontosTuristicoP2; // Aqui calculei o super poder do player 2, que é a soma da população, área, PIB e pontos turísticos.

printf("--- Carta 2 ---\n"); // Aqui printei na tela o identificador da segunda carta

printf(" Estado: %s \n", EstadoP2); // Aqui printei na tela o valor da var "Estado"
printf(" Código: %s \n", CodigoP2); // Aqui printei na tela o valor da var "Codigo"
printf(" Cidade: %s \n", CidadeP2); // Aqui printei na tela o valor da var "Cidade"
printf(" Populacao: %ld \n", PopulacaoP2); // Aqui printei na tela o valor da var "Populacao"
printf(" Area: %d \n", AreaP2); // Aqui printei na tela o valor da var "Area"
printf(" Pib: %lld \n", PibP2); // Aqui printei na tela o valor da var "Pib"
printf(" Pontos Turisticos: %d \n", PontosTuristicoP2); // Aqui printei na tela o valor da var "PontosTuristico"
printf(" Densidade Populacional: %f \n", DensidadePopulacionalP2); // Aqui printei na tela o valor da var "DensidadePopulacional"
printf(" Pib Per Capita: %f \n", PibPerCapitaP2); // Aqui printei na tela o valor da var "PibPerCapita"
printf(" Super Poder: %f \n", SuperPoderP2); // Aqui printei na tela o valor da var "SuperPoder" 

// Definindo variaveis para comparação

signed long int ResultadoPopulacao; // Aqui defini uma var do tipo inteiro para armazenar o resultado da comparação entre as cartas
int ResultadoArea; // Aqui defini uma var do tipo inteiro para armazenar o resultado da comparação entre as cartas
int ResultadoPib; // Aqui defini uma var do tipo inteiro para armazenar o resultado da comparação entre as cartas
int ResultadoPontosTuristicos; // Aqui defini uma var do tipo inteiro para armazenar o resultado da comparação entre as cartas
int ResultadoDensidadePopulacional; // Aqui defini uma var do tipo inteiro para armazenar o resultado da comparação entre as cartas
int ResultadoPibPerCapita; // Aqui defini uma var do tipo inteiro para armazenar o resultado da comparação entre as cartas
int ResultadoSuperPoder; // Aqui defini uma var do tipo inteiro para armazenar o resultado da comparação entre as cartas

// Comparando as cartas

ResultadoPopulacao = PopulacaoP1 > PopulacaoP2; // Aqui comparo a população do player 1 com a do player 2 e armazeno o resultado na var "ResultadoPopulacao"
ResultadoArea = AreaP1 > AreaP2; // Aqui comparo a área do player 1 com a do player 2 e armazeno o resultado na var "ResultadoArea"
ResultadoPib = PibP1 > PibP2; // Aqui comparo o PIB do player 1 com o do player 2 e armazeno o resultado na var "ResultadoPib"
ResultadoPontosTuristicos = PontosTuristicoP1 > PontosTuristicoP2; // Aqui comparo os pontos turísticos do player 1 com os do player 2 e armazeno o resultado na var "ResultadoPontosTuristicos"
ResultadoDensidadePopulacional = DensidadePopulacionalP1 < DensidadePopulacionalP2; // Aqui comparo a densidade populacional do player 1 com a do player 2 e armazeno o resultado na var "ResultadoDensidadePopulacional"
ResultadoPibPerCapita = PibPerCapitaP1 > PibPerCapitaP2; // Aqui comparo o PIB per capita do player 1 com o do player 2 e armazeno o resultado na var "ResultadoPibPerCapita"
ResultadoSuperPoder = SuperPoderP1 > SuperPoderP2; // Aqui comparo o super poder do player 1 com o do player 2 e armazeno o resultado na var "ResultadoSuperPoder"

// Exibindo Resultados Oficiais

printf (" Agora vamos comparar as cartas, Se Resultado for - 1 - Jogador 1 vence, Se Resultado For - 0 - Jogador 2 Vence \n");
printf (" Resultado da comparação entre as cartas:\n"); // Aqui printei na tela o resultado da comparação entre as cartas
printf (" Populacao Carta 1 Venceu ? : %ld \n", ResultadoPopulacao); // Aqui printei na tela o resultado da comparação entre as cartas
printf (" Area Carta 1 Venceu ? : %d \n", ResultadoArea); // Aqui printei na tela o resultado da comparação entre as cartas
printf (" Pib Carta 1 Venceu ? : %d \n", ResultadoPib); // Aqui printei na tela o resultado da comparação entre as cartas
printf (" Pontos Turisticos Carta 1 Venceu ? : %d \n", ResultadoPontosTuristicos); // Aqui printei na tela o resultado da comparação entre as cartas
printf (" Densidade Populacional Carta 1 Venceu ? : %d \n", ResultadoDensidadePopulacional); // Aqui printei na tela o resultado da comparação entre as cartas
printf (" Pib Per Capita Carta 1 Venceu ? : %d \n", ResultadoPibPerCapita); // Aqui printei na tela o resultado da comparação entre as cartas
printf (" Super Poder Carta 1 Venceu ? : %d \n", ResultadoSuperPoder); // Aqui printei na tela o resultado da comparação entre as cartas


    return 0;
}