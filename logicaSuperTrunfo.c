#include <stdio.h>
#include <stdlib.h>

int main() {
    char EstadoC1, EstadoC2;
    char CodigoC1[4], CodigoC2[4];
    char NomeC1[20], NomeC2[20];
    unsigned long int PopulacaoC1, PopulacaoC2;
    float AreaC1 = 0.0, AreaC2 =0.0;
    float PIBC1 = 0.0, PIBC2 = 0.0;
    int PontosTuristicosC1 = 0, PontosTuristicosC2 = 0;
    float DensindadePopC1 = 0.0, DensindadePopC2 = 0.0, PIBPerCapitaC1 = 0.0, PIBPerCapitaC2 = 0.0;
    float SuperPoderC1 = 0.0, SuperPoderC2 = 0.0; // Soma dos atributos
    double SomaC1 = 0.0, SomaC2 = 0.0;
    int resultado1 = 0, resultado2 = 0; //Armazena resultado da comparação entre as cartas
    int select1 = 0, select2 = 0;//Armazena os atributos que o usuário selecionou pra comparar no menu

    //Setando valores para teste
    EstadoC1 = 'A';
    EstadoC2 = 'B';
    strcpy(CodigoC1, "A01");
    strcpy(CodigoC2, "B02");
    strcpy(NomeC1, "SaoPaulo");
    strcpy(NomeC2, "RioDeJaneiro");
    PopulacaoC1 = 12325000;
    PopulacaoC2 = 6748000;
    AreaC1 = 1521.11;
    AreaC2 = 1200.25;
    PIBC1 = 699.28;
    PIBC2 = 300.50;
    PontosTuristicosC1 = 50;
    PontosTuristicosC2 = 30;
    
    /* Leitura dos dados da carta 1
    printf("Insira os dados da carta 1:\n");
    printf("Estado: ");
    scanf(" %c", &EstadoC1);
    printf("Codigo: ");
    scanf(" %s", CodigoC1);
    printf("Nome: ");
    scanf(" %s", NomeC1); 
    printf("Populacao: ");
    scanf(" %d", &PopulacaoC1);
    printf("Area: ");
    scanf(" %f", &AreaC1);
    printf("PIB: ");
    scanf(" %f", &PIBC1);
    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &PontosTuristicosC1);

    // Leitura dos dados da carta 2
    printf("\nInsira os dados da carta 2:\n");
    printf("Estado: ");
    scanf(" %c", &EstadoC2);
    printf("Codigo: ");
    scanf(" %s", CodigoC2);
    printf("Nome: ");
    scanf(" %s", NomeC2);
    printf("Populacao: ");
    scanf(" %d", &PopulacaoC2);
    printf("Area: ");
    scanf(" %f", &AreaC2);
    printf("PIB: ");
    scanf(" %f", &PIBC2);
    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &PontosTuristicosC2);
    */

    //Calculo da densidade populacional, PIB per capita e Super Poder
    DensindadePopC1 = (float) PopulacaoC1 / AreaC1;
    DensindadePopC2 = (float) PopulacaoC2 / AreaC2;
    PIBPerCapitaC1 = (PIBC1*1000000000) / PopulacaoC1;
    PIBPerCapitaC2 = (PIBC2*1000000000) / PopulacaoC2;
    SuperPoderC1 = (float) PopulacaoC1+ AreaC1 + PIBC1 + (float) PontosTuristicosC1 + PIBPerCapitaC1 + (1.0f / DensindadePopC1);
    SuperPoderC2 = (float) PopulacaoC2 + AreaC2 + PIBC2 + (float) PontosTuristicosC2 + PIBPerCapitaC2 + (1.0f / DensindadePopC2);
    

    //Exibindo os dados da carta 1
    printf("\nDados da Carta 1:\n");
    printf("Estado: %c\n", EstadoC1);
    printf("Codigo: %s\n", CodigoC1);
    printf("Nome: %s\n", NomeC1);
    printf("Populacao: %d\n", PopulacaoC1);
    printf("Área: %.2f km²\n", AreaC1);
    printf("PIB: %.2f bilhoes de reais\n", PIBC1);
    printf("Numero de Pontos Turisticos: %d\n", PontosTuristicosC1);
    printf("Densidade Populacional: %.2f hab/km²\n", DensindadePopC1);
    printf("PIB per Capita: %.2f reais\n", PIBPerCapitaC1);
    printf("Super Poder: %.2f\n", SuperPoderC1);

    // Exibindo os dados da carta 2
    printf("\nDados da Carta 2:\n");
    printf("Estado: %c\n", EstadoC2);
    printf("Codigo: %s\n", CodigoC2);
    printf("Nome: %s\n", NomeC2);
    printf("Populacao: %d\n", PopulacaoC2);
    printf("Area: %.2f km²\n", AreaC2);
    printf("PIB: %.2f bilhoes de reais\n", PIBC2);
    printf("Numero de Pontos Turisticos: %d\n", PontosTuristicosC2);
    printf("Densidade Populacional: %.2f hab/km²\n", DensindadePopC2);
    printf("PIB per Capita: %.2f reais\n", PIBPerCapitaC2);
    printf("Super Poder: %.2f\n", SuperPoderC2);
    

    //Menu - Comparação do atributo 1
    printf("\nEscolha o primeiro atributo a ser comparado:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Num. Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("6 - PIB per capita\n");
    scanf("%d", &select1);


    switch (select1){
    case 1:
        if(PopulacaoC1 == PopulacaoC2){
            resultado1 = 0;
        } 
        else resultado1 = PopulacaoC1 > PopulacaoC2 ? 1 : 2;
        break;
    case 2:
        if(AreaC1 == AreaC1){
            resultado1 = 0;
        } 
        else resultado1 = AreaC1 > AreaC2 ? 1 : 2;
        break;
    case 3:
        if(PIBC1 == PIBC2){
            resultado1 = 0;
        } 
        else resultado1 = PIBC1 > PIBC2 ? 1 : 2;
        break;
    case 4:
        if(PontosTuristicosC1 == PontosTuristicosC2){
            resultado1 = 0;
        } 
        else resultado1 = PontosTuristicosC1 > PontosTuristicosC2 ? 1 : 2;
        break;
    case 5:
        if(DensindadePopC1 == DensindadePopC2){
            resultado1 = 0;
        } 
        else resultado1 = DensindadePopC1 < DensindadePopC2 ? 1 : 2;
        break;
    case 6:
        if(PIBPerCapitaC1 == PIBPerCapitaC2){
            resultado1 = 0;
        } 
        else resultado1 = PIBPerCapitaC1 > PIBPerCapitaC2 ? 1 : 2;
        break;
    default:
        printf("\nOpcao invalida. Tente novamente!\n");
        return 0;
    }

    //Menu - Comparação do atributo 2. Só mostra as opções diferentes do atributo 1
    printf("\nEscolha o segundo atributo a ser comparado (não repita o anterior!):\n");
    select1 != 1 ? printf("1 - Populacao\n") : NULL;
    select1 != 2 ? printf("2 - Area\n") : NULL;
    select1 != 3 ? printf("3 - PIB\n") : NULL;
    select1 != 4 ? printf("4 - Num. Pontos Turisticos\n") : NULL;
    select1 != 5 ? printf("5 - Densidade Demografica\n") : NULL;
    select1 != 6 ? printf("6 - PIB per capita\n") : NULL;
    scanf("%d", &select2);

    //Verifica se o usuário selecionou o mesmo atributo que o anterior
    select2 = select2 == select1 ? 0 : select2;

    switch (select2){
    case 1:
        if(PopulacaoC1 == PopulacaoC2){
            resultado2 = 0;
        } 
        else PopulacaoC1 = PopulacaoC2 > PopulacaoC2 ? 1 : 2;
        break;
    case 2:
        if(AreaC1 == AreaC2){
            resultado2 = 0;
        } 
        else resultado2 = AreaC1 > AreaC2 ? 1 : 2;
        break;
    case 3:
        if(PIBC1 == PIBC2){
            resultado2 = 0;
        } 
        else resultado2 = PIBC1 > PIBC2 ? 1 : 2;
        break;
    case 4:
        if(PontosTuristicosC1 == PontosTuristicosC2){
            resultado2 = 0;
        } 
        else resultado2 = PontosTuristicosC1 > PontosTuristicosC2 ? 1 : 2;
        break;
    case 5:
        if(DensindadePopC1 == DensindadePopC2){
            resultado2 = 0;
        } 
        else resultado2 = DensindadePopC1 < DensindadePopC2 ? 1 : 2;
        break;
    case 6:
        if(PIBPerCapitaC1 == PIBPerCapitaC2){
            resultado2 = 0;
        } 
        else resultado2 =  PIBPerCapitaC1 > PIBPerCapitaC2 ? 1 : 2;
        break;
    default:
        printf("\nOpcao invalida. Tente novamente!\n");
        return 0;
    }
    
    //Comparação dos resultados
    printf("\nResultado 1 = %d \n" , resultado1);
    printf("Resultado 2 = %d \n" , resultado2);

    printf("\nRESULTADO FINAL:");
    if(resultado1 == 1 && (resultado2 == 1 || resultado2 == 0)){
        printf("Carta 1 ganhou! \n");
    }
    else if(resultado1 == 2 && (resultado2 == 2 || resultado2 == 0)){
        printf("Carta 2 ganhou! \n");
    }
    else printf("Empate! \n");
    
    return 0;
}