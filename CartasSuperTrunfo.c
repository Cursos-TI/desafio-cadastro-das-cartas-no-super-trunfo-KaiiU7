#include <stdio.h> // Incluido as bibliotecas necessarias para o funcionamento do programa

int main() { // Todo Código começa com "int main"
	
    // Aqui defini as variaveis do Player 1, tive que separar pois estava dando erro de variavel duplicada.

    char EstadoP1[10]; // Aqui defini uma var do tipo string (array de char) Valor esperado "A""H"
    char CodigoP1[10]; // Aqui defini uma var do tipo string (array de char) Valor esperado Inicial do estado seguido de um número, ex: "A01"
    char CidadeP1[10]; // Aqui defini uma var do tipo string (array de char) (array de char) Valor esperado "VárzeaPaulista""SãoPaulo"
    int PopulacaoP1; // Aqui defini uma var do tipo inteiro (Valor esperado 1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000)
    float AreaP1; // Aqui defini uma var do tipo float (número decimal) (Valor esperado 1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000)
    float PibP1; // Aqui defini uma var do tipo float (número decimal) (Valor esperado 1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000)
    int PontosTuristicoP1; // Aqui defini uma var do tipo inteiro (Valor esperado 1, 2, 3, 4, 5, 6, 7, 8, 9, 10)

// Aqui defini as variaveis do Player 2, tive que separar pois estava dando erro de variavel duplicada.

    char EstadoP2[10]; // Aqui defini uma var do tipo string (array de char) Valor esperado "A""H"
    char CodigoP2[10]; // Aqui defini uma var do tipo string (array de char) Valor esperado Inicial do estado seguido de um número, ex: "A01"
    char CidadeP2[10]; // Aqui defini uma var do tipo string (array de char) (array de char) Valor esperado "VárzeaPaulista""SãoPaulo"
    int PopulacaoP2; // Aqui defini uma var do tipo inteiro (Valor esperado 1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000)
    float AreaP2; // Aqui defini uma var do tipo float (número decimal) (Valor esperado 1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000)
    float PibP2; // Aqui defini uma var do tipo float (número decimal) (Valor esperado 1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000)
    int PontosTuristicoP2; // Aqui defini uma var do tipo inteiro (Valor esperado 1, 2, 3, 4, 5, 6, 7, 8, 9, 10)

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
scanf("%d", &PopulacaoP1); // Aqui armazenei o valor digitado pelo user na var "Populacao"

printf(" Area km, Digite Somente Números Ex 1000: "); // Aqui solicitei o user para digitar a area da cidade
scanf("%f", &AreaP1); // Aqui armazenei o valor digitado pelo user na var "Area"

printf(" Pib, Digite Somente Números Ex 1000: "); // Aqui solicitei o user para digitar o pib da cidade
scanf("%f", &PibP1); // Aqui armazenei o valor digitado pelo user na var "Pib"

printf(" Pontos Turisticos, Digite Somente Números Ex 1: "); // Aqui solicitei o user para digitar os pontos turisticos da cidade
scanf("%d", &PontosTuristicoP1); // Aqui armazenei o valor digitado pelo user na var "PontosTuristico"

printf("--- Carta 1 ---\n"); // Aqui printei na tela o identificador da primeira carta
printf(" Estado: %s \n", EstadoP1); // Aqui printei na tela o valor da var "Estado"
printf(" Código: %s \n", CodigoP1); // Aqui printei na tela o valor da var "Codigo"
printf(" Cidade: %s \n", CidadeP1); // Aqui printei na tela o valor da var "Cidade"
printf(" Populacao: %d \n", PopulacaoP1); // Aqui printei na tela o valor da var "Populacao"
printf(" Area: %.2f \n", AreaP1); // Aqui printei na tela o valor da var "Area"
printf(" Pib: %.2f \n", PibP1); // Aqui printei na tela o valor da var "Pib"
printf(" Pontos Turisticos: %d \n", PontosTuristicoP1); // Aqui printei na tela o valor da var "PontosTuristico"

printf(" Muito Bem, agora player 2 por favor preencha sua carta...\n"); // Aqui solicitei o user para preencher a segunda carta

// Carta Do Segundo Player

printf(" Estado, Digite Somente a Inicial do Estado Ex São Paulo S: "); // Aqui solicitei o user para digitar a inicial do estado
scanf("%s", EstadoP2); // Aqui armazenei o valor digitado pelo user na var "Estado"

printf("Código, Digite a Inicial Do Estado seguido de um número Ex S01: "); // Aqui solicitei o user para digitar o codigo do estado
scanf("%s", CodigoP2); // Aqui armazenei o valor digitado pelo user na var "Codigo"

printf(" Cidade, Digite O Nome Da Cidade : "); // Aqui solicitei o user para digitar o nome da cidade
scanf("%s", CidadeP2); // Aqui armazenei o valor digitado pelo user na var "Cidade"

printf(" Populacao, Digite Somente Números Ex 1000: "); // Aqui solicitei o user para digitar a populacao da cidade
scanf("%d", &PopulacaoP2); // Aqui armazenei o valor digitado pelo user na var "Populacao"

printf(" Area km, Digite Somente Números Ex 1000: "); // Aqui solicitei o user para digitar a area da cidade
scanf("%f", &AreaP2); // Aqui armazenei o valor digitado pelo user na var "Area"

printf(" Pib, Digite Somente Números Ex 1000: "); // Aqui solicitei o user para digitar o pib da cidade
scanf("%f", &PibP2); // Aqui armazenei o valor digitado pelo user na var "Pib"

printf(" Pontos Turisticos, Digite Somente Números Ex 1: "); // Aqui solicitei o user para digitar os pontos turisticos da cidade
scanf("%d", &PontosTuristicoP2); // Aqui armazenei o valor digitado pelo user na var

printf("--- Carta 2 ---\n"); // Aqui printei na tela o identificador da segunda carta
printf(" Estado: %s \n", EstadoP2); // Aqui printei na tela o valor da var "Estado"
printf(" Código: %s \n", CodigoP2); // Aqui printei na tela o valor da var "Codigo"
printf(" Cidade: %s \n", CidadeP2); // Aqui printei na tela o valor da var "Cidade"
printf(" Populacao: %d \n", PopulacaoP2); // Aqui printei na tela o valor da var "Populacao"
printf(" Area: %.2f \n", AreaP2); // Aqui printei na tela o valor da var "Area"
printf(" Pib: %.2f \n", PibP2); // Aqui printei na tela o valor da var "Pib"
printf(" Pontos Turisticos: %d \n", PontosTuristicoP2); // Aqui printei na tela o valor da var "PontosTuristico"
printf(" Fim Da Versão De Teste Do Jogo, Muito Obrigado Por Participar, Nos Vemos De Novo No Futuro ! \n"); // Aqui printei na tela a mensagem de fim de jogo
     
    
    
    return 0;
}