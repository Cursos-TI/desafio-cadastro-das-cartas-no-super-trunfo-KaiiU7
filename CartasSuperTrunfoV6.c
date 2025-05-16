#include <stdio.h>

int main(){

    // Definindo Variaveis Player1, e Player2.
char EstadoP1[20], EstadoP2[20], CidadeP1[20], CidadeP2[20], Escolha[2];
unsigned long long int PopulacaoP1, PopulacaoP2,PibP1, PibP2,PoderP1, PoderP2;
double AreaP1, AreaP2,DensidadePopulacionalP1, DensidadePopulacionalP2,PibPerCaptaP1, PibPerCaptaP2;
int PontosTurismoP1, PontosTurismoP2,Atributo1, Atributo2,PopulacaoR, AreaR, PibR, PontosTuristicosR, PibPCaptaR, DensidadeR, PoderR;
    // Apresentação.
printf("****** Super Trunfo Game test Versão 5 ******\n\n");
printf("Player 1, preencha seus dados :\n\n");
    // Armazenando Dados Do User, Player 1.
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
    printf("\nDados Player 1 cadastrados ! Player 2 preencha seus dados.\n\n");
    // Armazenando Dados Do User, Player 2.
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
    // Calculando Densidade, pib e poder do Player 1.
PibPerCaptaP1 = (double) PibP1 / (double) PopulacaoP1;
DensidadePopulacionalP1 = (double) PopulacaoP1 / AreaP1;
PoderP1 = (double)PopulacaoP1 + (double)AreaP1 + (double)PibP1 + (double)PontosTurismoP1;
    // Calculando Densidade, pib e poder do Player 2.
PibPerCaptaP2 = (double) PibP2 / (double) PopulacaoP2;
DensidadePopulacionalP2 = (double) PopulacaoP2 / AreaP2;
PoderP2 = (double)PopulacaoP2 + (double)AreaP2 + (double)PibP2 + (double)PontosTurismoP2;
    // Obtendo Resultados Das comparações E Armazenando. //popula//area//pib//pontos//pibcapta//densidade//poder
PopulacaoR = (PopulacaoP1 > PopulacaoP2) ? 1 : 
            (PopulacaoP1 < PopulacaoP2) ? 2 : 3;
AreaR = (AreaP1 > AreaP2) ? 1 : 
            (AreaP1 < AreaP2) ? 2 : 3;            
PibR = (PibP1 > PibP2) ? 1 : 
            (PibP1 < PibP2) ? 2 : 3;
PontosTuristicosR = (PontosTurismoP1 > PontosTurismoP2) ? 1 : 
            (PontosTurismoP1 < PontosTurismoP2) ? 2 : 3; 
PibPCaptaR = (PibPerCaptaP1 > PibPerCaptaP2) ? 1 : 
            (PibPerCaptaP1 < PibPerCaptaP2) ? 2 : 3;  
DensidadeR = (DensidadePopulacionalP1 < DensidadePopulacionalP2) ? 1 : 
            (DensidadePopulacionalP1 > DensidadePopulacionalP2) ? 2 : 3;  
PoderR = (PoderP1 > PoderP2) ? 1 : 
            (PoderP1 < PoderP2) ? 2 : 3;                                  
            

    
        // Definindo Quais Atributos serão Comparados.
    printf("\n\nEscolha O Primeiro Atributo A Ser Comparado ! \n\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. Pib\n");
    printf("4. Pontos Turisticos\n");
    printf("5. PibPerCapta\n");
    printf("6. Densidade Populacional\n");
    printf("7. Poder\n");
    scanf("%d", &Atributo1);

    printf("\n\nEscolha O Segundo Atributo A Ser Comparado ! \n\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. Pib\n");
    printf("4. Pontos Turisticos\n");
    printf("5. PibPerCapta\n");
    printf("6. Densidade Populacional\n");
    printf("7. Poder\n");
    scanf("%d", &Atributo2);
    printf("\nCategoria              Vantagem         Valor\n\n");

    // Comparando Os Atributos Especificados. // -------------------------------------------------------------------------------------------

    switch (Atributo1){
        case 1:
            if (PopulacaoR == 1){
                printf("População               Player 1         %llu\n",PopulacaoP1);
            } else if (PopulacaoR == 2){
                printf("População               Player 2         %llu\n",PopulacaoP2);
            } else if (PopulacaoR == 3){
                printf("População               Empate           %llu\n",PopulacaoP1);
    }
    break;

        case 2:
            if (AreaR == 1){
                printf("Area                    Player 1         %lf\n",AreaP1);
            } else if (AreaR == 2){
                printf("Area                    Player 2         %lf\n",AreaP2);
            } else if (AreaR == 3){
                printf("Area                    Empate           %lf\n",AreaP1);
    }
    break;

        case 3:
            if (PibR == 1){
                printf("Pib                     Player 1         %llu\n",PibP1);
            } else if (PibR == 2){
                printf("Pib                     Player 2         %llu\n",PibP2);
            } else if (PibR == 3){
                printf("Pib                     Empate           %llu\n",PibP1);
    }
    break;

        case 4:
            if (PontosTuristicosR == 1){
                printf("Pontos Turisticos       Player 1         %d\n",PontosTurismoP1);
            } else if (PontosTuristicosR == 2){
                printf("Pontos Turisticos       Player 2         %d\n",PontosTurismoP2);
            } else if (PontosTuristicosR == 3){
                printf("Pontos Turisticos       Empate           %d\n",PontosTurismoP1);
    }
    break;

        case 5:
            if (PibPCaptaR == 1){
                printf("PibPerCapta             Player 1         %lf\n",PibPerCaptaP1);
            } else if (PibPCaptaR == 2){
                printf("PibPerCapta             Player 2         %lf\n",PibPerCaptaP2);
            } else if (PibPCaptaR == 3){
                printf("PPibPerCapta            Empate           %lf\n",PibPerCaptaP1);
    }
    break;

        case 6:
            if (DensidadeR == 1){
                printf("Densidade Populacional  Player 1         %lf\n",DensidadePopulacionalP1);
            } else if (DensidadeR == 2){
                printf("Densidade Populacional  Player 2         %lf\n",DensidadePopulacionalP2);
            } else if (DensidadeR == 3){
                printf("Densidade Populacional  Empate           %lf\n",DensidadePopulacionalP1);
    }
    break;

        case 7:
            if (PoderR == 1)        {
                printf("Poder                   Player 1         %llu\n",PoderP1);
            } else if (PoderR == 2){
                printf("Poder                   Player 2         %llu\n",PoderP2);
            } else if (PoderR == 3){
                printf("Poder                   Empate           %llu\n",PoderP1);
    }
    break;

        default:
            printf("Escolha Invalida !");
    break;
    }
    //------------------------------------------------------------------------------------------------------------------------------------

    switch (Atributo2){
        case 1:
            if (PopulacaoR == 1){
                printf("População               Player 1         %llu\n",PopulacaoP1);
            } else if (PopulacaoR == 2){
                printf("População               Player 2         %llu\n",PopulacaoP2);
            } else if (PopulacaoR == 3){
                printf("População               Empate           %llu\n",PopulacaoP1);
    }
    break;

case 2:
    if (AreaR == 1)
    {
        printf("Area                    Player 1         %lf\n",AreaP1);
    } else if (AreaR == 2)
    {
        printf("Area                    Player 2         %lf\n",AreaP2);
    } else if (AreaR == 3)
    {
        printf("Area                    Empate           %lf\n",AreaP1);
    }
    break;

case 3:
    if (PibR == 1)
    {
        printf("Pib                     Player 1         %llu\n",PibP1);
    } else if (PibR == 2)
    {
        printf("Pib                     Player 2         %llu\n",PibP2);
    } else if (PibR == 3)
    {
        printf("Pib                     Empate           %llu\n",PibP1);
    }
    break;

case 4:
    if (PontosTuristicosR == 1)
    {
        printf("Pontos Turisticos       Player 1         %d\n",PontosTurismoP1);
    } else if (PontosTuristicosR == 2)
    {
        printf("Pontos Turisticos       Player 2         %d\n",PontosTurismoP2);
    } else if (PontosTuristicosR == 3)
    {
        printf("Pontos Turisticos       Empate           %d\n",PontosTurismoP1);
    }
    break;

case 5:
    if (PibPCaptaR == 1)
    {
        printf("PibPerCapta             Player 1         %lf\n",PibPerCaptaP1);
    } else if (PibPCaptaR == 2)
    {
        printf("PibPerCapta             Player 2         %lf\n",PibPerCaptaP2);
    } else if (PibPCaptaR == 3)
    {
        printf("PPibPerCapta            Empate           %lf\n",PibPerCaptaP1);
    }
    break;

case 6:
    if (DensidadeR == 1)
    {
        printf("Densidade Populacional  Player 1         %lf\n",DensidadePopulacionalP1);
    } else if (DensidadeR == 2)
    {
        printf("Densidade Populacional  Player 2         %lf\n",DensidadePopulacionalP2);
    } else if (DensidadeR == 3)
    {
        printf("Densidade Populacional  Empate           %lf\n",DensidadePopulacionalP1);
    }
    break;

case 7:
    if (PoderR == 1)
    {
        printf("Poder                   Player 1         %llu\n",PoderP1);
    } else if (PoderR == 2)
    {
        printf("Poder                   Player 2         %llu\n",PoderP2);
    } else if (PoderR == 3)
    {
        printf("Poder                   Empate           %llu\n",PoderP1);
    }
    break;

default:
    printf("Escolha Invalida !");
    break;
}

//Exibindo Resultado, se desejado pelo player.
printf("\nResultados Acima ! Deseja Visualizar Todos Os Dados De Ambas As Cartas ? (S) ou (N) :");
scanf(" %c", Escolha);
switch (Escolha[0]){
    case 'S':
    case 's':
    printf("\nOk, Exibindo Resultados.\n");
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

    case 'N':
    case 'n':
        printf("\nOk, Finalizando Programa...");
    break;    
   
}    


    return 0;
}