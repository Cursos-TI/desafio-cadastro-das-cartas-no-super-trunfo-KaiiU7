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
printf("\n\n Segue Resultado Das Comparações Abaixo : \n\n");
printf("Categoria               Vantagem\n\n");

// Inicializando Sistema De Pontos ( Extra curricular rsrs )
PontosP1 = 0;
PontosP2 = 0;


// Comparando Cartas
// População
if(PopulacaoP1 > PopulacaoP2){
	PontosP1++;
	printf("População             : Player 1\n");
}else if(PopulacaoP1 < PopulacaoP2){
	PontosP2++;
	printf("População             : Player 2\n");
}else 	
	printf("População             : Empate\n");

	// Area
if(AreaP1 > AreaP2){
	PontosP1++;
	printf("Area                  : Player 1\n");
}else if(AreaP1 < AreaP2){
	PontosP2++;
	printf("Area                  : Player 2\n");
}else 	
	printf("Area      			  : Empate\n");

// Pib.
if(PibP1 > PibP2){
	PontosP1++;
	printf("Pib                   : Player 1\n");
}else if(PibP1 < PibP2){
	PontosP2++;
	printf("Pib                   : Player 2\n");
}else 	
	printf("Pib                   : Empate\n");

// Pontos Turisticos.
if(PontosTurismoP1 > PontosTurismoP2){
	PontosP1++;
	printf("PontosTurismo         : Player 1\n");
}else if(PontosTurismoP1 < PontosTurismoP2){
	PontosP2++;
	printf("PontosTuristicos      : Player 2\n");
}else 	
	printf("PontosTuristicos      : Empate\n");

// PibPerCapta.
if(PibPerCaptaP1 > PibPerCaptaP2){
	PontosP1++;
	printf("PibPerCapta           : Player 1\n");
}else if(PibPerCaptaP1 < PibPerCaptaP2){
	PontosP2++;
	printf("PibPerCapta           : Player 2\n");
}else 	
	printf("PibPerCapta           : Empate\n");

// Densidade Populacional ( Oque tiver Menos Vence ! )
if(DensidadePopulacionalP1 > DensidadePopulacionalP2){
	PontosP2++;
	printf("DensidadePopulacional : Player 2\n");
}else if(DensidadePopulacionalP1 < DensidadePopulacionalP2){
	PontosP1++;
	printf("DensidadePopulacional : Player 1\n");
}else 	
	printf("DensidadePopulacional : Empate\n");

// Exibindo Placar De Pontos	
printf("\n                          > Placar < \n");
printf("                         Player 1:  %d\n", PontosP1);
printf("                         Player 2:  %d\n", PontosP2);

	return 0;
}