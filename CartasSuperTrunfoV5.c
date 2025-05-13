#include <stdio.h>

int main(){

// Definindo Variaveis Player1 (P1), e Player2 (P2).
char EstadoP1[20], EstadoP2[20];
char CidadeP1[20], CidadeP2[20];
unsigned long long int PopulacaoP1, PopulacaoP2;
double AreaP1, AreaP2;
unsigned long long int PibP1, PibP2;
int PontosTurismoP1, PontosTurismoP2;
double DensidadePopulacionalP1, DensidadePopulacionalP2; // (População) Dividido Pela (Area) = (DensidadePopulacional) "Na hora De calcular Forçar DOUBLE"
double PibPerCaptaP1, PibPerCaptaP2; // (Pib) Dividido Pela (Polulação) = (PibPerCapta) "Na Hora De Clcular Forçar DOUBLE"
unsigned long long int PoderP1, PoderP2; // População + Area + Pib + PontosTurismo = Poder
int PontosP1, PontosP2; // Criei essa nova variavel para usar posteriormente :)
int Atributo;

// Imprimindo Mensagen De Boas Vindas e solicitando dados do Player1 (P1).
printf(" Bem Vindo a versão de teste do jogo Super Trunfo\n");
printf("   Por favor player 1, preencha os dados abaixo:\n");

// Carta Do Player1 (P1)
printf("Letra Inicial Do Estado: ");
scanf("%s", EstadoP1);
printf("Cidade: ");
scanf("%s", CidadeP1);
printf("População: ");
scanf("%llu", &PopulacaoP1);
printf("Area Km: ");
scanf("%lf", &AreaP1);
printf("Pib: ");
scanf("%llu", &PibP1);
printf("Pontos Turisticos: ");
scanf("%d", &PontosTurismoP1);

// Calculando Densidade, Pib e Poder Do Player1 (P1)
PibPerCaptaP1 = (double) PibP1 / (double) PopulacaoP1;
DensidadePopulacionalP1 = (double) PopulacaoP1 / AreaP1;
PoderP1 = (double)PopulacaoP1 + (double)AreaP1 + (double)PibP1 + (double)PontosTurismoP1;

// Exibição De Dados (P1)
printf("\n\n--- Carta Player 1 --- \n\n");
printf("Estado : %s \n", EstadoP1);
printf("Cidade : %s \n", CidadeP1);
printf("População : %llu \n", PopulacaoP1);
printf("Area : %lf \n", AreaP1);
printf("Pib : %llu $ \n", PibP1);
printf("Pontos Turisticos : %d \n", PontosTurismoP1);
printf("PibPerCapta : %lf $ \n", PibPerCaptaP1);
printf("DensidadePopulacional: %lf \n", DensidadePopulacionalP1);
printf("Poder : %llu \n", PoderP1);


// Solicitando Dados Do Player2(P2)
printf("\n\nDados Cadastrados ! Player 2 Sua vez\n\n");

// Carta Do Player 2 (P2)
printf("Letra Inicial Do Estado: ");
scanf("%s", EstadoP2);
printf("Cidade: ");
scanf("%s", CidadeP2);
printf("População: ");
scanf("%llu", &PopulacaoP2);
printf("Area Km: ");
scanf("%lf", &AreaP2);
printf("Pib: ");
scanf("%llu", &PibP2);
printf("Pontos Turisticos: ");
scanf("%d", &PontosTurismoP2);

// Calculando Densidade e Pib Do Player2 (P2)
// População + Area + Pib + PontosTurismo = Poder
PibPerCaptaP2 = (double) PibP2 / (double) PopulacaoP2;
DensidadePopulacionalP2 = (double) PopulacaoP2 / AreaP2;
PoderP2 = (double)PopulacaoP2 + (double)AreaP2 + (double)PibP2 + (double)PontosTurismoP2;

// Exibição De Dados (P2)
printf("\n\n--- Carta Player 2 --- \n\n");
printf("Estado : %s \n", EstadoP2);
printf("Cidade : %s \n", CidadeP2);
printf("População : %llu \n", PopulacaoP2);
printf("Area : %lf \n", AreaP2);
printf("Pib : %llu $ \n", PibP2);
printf("Pontos Turisticos : %d \n", PontosTurismoP2);
printf("PibPerCapta : %lf $ \n", PibPerCaptaP2);
printf("DensidadePopulacional: %lf \n", DensidadePopulacionalP2);
printf("Poder : %llu \n", PoderP2);

// Indicando que sera iniciado as comparações
printf("\n\nQual Atributo será Comparado ?  \n\n");
printf("1. Populacao\n");
printf("2. Area\n");
printf("3. Pib\n");
printf("4. Pontos Turisticos\n");
printf("5. PibPerCapta\n");
printf("6. Densidade Populacional\n");
printf("7. Poder\n");
scanf("%d", &Atributo);
printf("\nCategoria              Vantagem         Valor\n\n");

switch (Atributo)
{
case 1:  // POPULAÇÂO
    if(PopulacaoP1 > PopulacaoP2){
	PontosP1++;
	printf("População              Player 1         %llu\n", PopulacaoP1);
}else if(PopulacaoP1 < PopulacaoP2){
	PontosP2++;
	printf("População              Player 2         %llu\n", PopulacaoP2);
}else 	
	printf("População              Empate           %llu\n", PopulacaoP1);
    break;

case 2:  // AREA
    if(AreaP1 > AreaP2){
	PontosP1++;
	printf("Area                   Player 1         %lf\n", AreaP1);
}else if(AreaP1 < AreaP2){
	PontosP2++;
	printf("Area                   Player 2         %lf\n",AreaP2);
}else 	
	printf("Area      			   Empate           %lf\n",AreaP1);
    break;

case 3: // PIB
    if(PibP1 > PibP2){
	PontosP1++;
	printf("Pib                    Player 1         %llu\n", PibP1);
}else if(PibP1 < PibP2){
	PontosP2++;
	printf("Pib                    Player 2         %llu\n", PibP2);
}else 	
	printf("Pib                    Empate           %llu\n", PibP1);
    break;

case 4:  // PONTOS TURISTICOS
    if(PontosTurismoP1 > PontosTurismoP2){
	PontosP1++;
	printf("PontosTurismo          Player 1         %d\n", PontosTurismoP1);
}else if(PontosTurismoP1 < PontosTurismoP2){
	PontosP2++;
	printf("PontosTuristicos       Player 2         %d\n", PontosTurismoP2);
}else 	
	printf("PontosTuristicos       Empate           %d\n", PontosTurismoP1);
    break;

    case 5:  // PIBPERCAPTA
    if(PibPerCaptaP1 > PibPerCaptaP2){
	PontosP1++;
	printf("PibPerCapta            Player 1         %lf\n", PibPerCaptaP1);
}else if(PibPerCaptaP1 < PibPerCaptaP2){
	PontosP2++;
	printf("PibPerCapta            Player 2         %lf\n", PibPerCaptaP2);
}else 	
	printf("PibPerCapta            Empate           %lf\n", PibPerCaptaP1);
    break;

    case 6: // DENSIDADE POPULACIONAL
        if(DensidadePopulacionalP1 > DensidadePopulacionalP2){
	PontosP2++;
	printf("DensidadePopulacional  Player 2         %lf\n", DensidadePopulacionalP1);
}else if(DensidadePopulacionalP1 < DensidadePopulacionalP2){
	PontosP1++;
	printf("DensidadePopulacional  Player 1         %lf\n", DensidadePopulacionalP2);
}else 	
	printf("DensidadePopulacional  Empate           %lf\n", DensidadePopulacionalP1);
    break;

    case 7:
        if(PoderP1 > PoderP2){
	PontosP1++;
	printf("Poder                  Player 1         %llu\n", PoderP1);
}else if(PopulacaoP1 < PopulacaoP2){
	PontosP2++;
	printf("Poder                  Player 2         %llu\n", PoderP2);
}else 	
	printf("Poder                  Empate           %llu\n", PoderP1);

    break;

default:
    printf(" Opção Invalida ");
    break;
}




	return 0;
}