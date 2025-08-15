#include <stdio.h>
#include <stdlib.h>

int main() {
    char CodigoC1[4], CodigoC2[4];
    char NomeC1[20], NomeC2[20];
    unsigned long int PopulacaoC1, PopulacaoC2;
    float AreaC1 = 0.0, AreaC2 =0.0;
    float PIBC1 = 0.0, PIBC2 = 0.0;
    int PontosTuristicosC1 = 0, PontosTuristicosC2 = 0;
    float DensindadePopC1 = 0.0, DensindadePopC2 = 0.0, PIBPerCapitaC1 = 0.0, PIBPerCapitaC2 = 0.0;
    float SuperPoderC1 = 0.0, SuperPoderC2 = 0.0; // Soma de todos os atributos das cartas
    double SomaSelectC1 = 0.0, SomaSelectC2 = 0.0; // Soma dos atributos selecionados pelo jogador
    int pontosC1 = 0, pontosC2 = 0; //Armazena resultado da comparação entre as cartas
    int selectMenu1 = 0, selectMenu2 = 0;//Armazena quais atributos o usuário selecionou pra comparar

    /*
    Setando valores para teste
    strcpy(CodigoC1, "A01");
    strcpy(CodigoC2, "B02");
    strcpy(NomeC1, "Sao Paulo");
    strcpy(NomeC2, "Rio De Janeiro");
    PopulacaoC1 = 600000;
    PopulacaoC2 = 400000;
    AreaC1 = 400000.00 ;
    AreaC2 = 600000.00;
    PIBC1 = 600.50;
    PIBC2 = 400.50;
    PontosTuristicosC1 = 50;
    PontosTuristicosC2 = 50;
    */

    
    //Leitura dos dados da carta 1
    printf("Insira os dados da carta 1:\n");
    printf("Codigo (tam: 3): ");
    scanf(" %s", CodigoC1);
    getchar(); // consome o '\n' deixado pelo scanf
    printf("Nome: ");
    fgets(NomeC1, sizeof(NomeC1), stdin);
    NomeC1[strcspn(NomeC1, "\n")] = '\0'; // remove o \n
    printf("Populacao: ");
    scanf(" %ld", &PopulacaoC1);
    printf("Area (km²): ");
    scanf(" %f", &AreaC1);
    printf("PIB (bilhoes de reais): ");
    scanf(" %f", &PIBC1);
    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &PontosTuristicosC1);

    // Leitura dos dados da carta 2
    printf("\nInsira os dados da carta 2:\n");
    printf("Codigo (tam: 3): ");
    scanf(" %s", CodigoC2);
    getchar(); // consome o '\n' deixado pelo scanf
    printf("Nome: ");
    fgets(NomeC2, sizeof(NomeC2), stdin);
    NomeC2[strcspn(NomeC2, "\n")] = '\0'; // remove o \n
    printf("Populacao: ");
    scanf(" %ld", &PopulacaoC2);
    printf("Area (km²): ");
    scanf(" %f", &AreaC2);
    printf("PIB (bilhoes de reais): ");
    scanf(" %f", &PIBC2);
    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &PontosTuristicosC2);


    //Calculo da densidade populacional, PIB per capita e Super Poder
    DensindadePopC1 = (float) PopulacaoC1 / AreaC1;
    DensindadePopC2 = (float) PopulacaoC2 / AreaC2;
    PIBPerCapitaC1 = (PIBC1*1000000000) / PopulacaoC1;
    PIBPerCapitaC2 = (PIBC2*1000000000) / PopulacaoC2;
    SuperPoderC1 = (float) PopulacaoC1+ AreaC1 + PIBC1 + (float) PontosTuristicosC1 + PIBPerCapitaC1 + (1.0f / DensindadePopC1);
    SuperPoderC2 = (float) PopulacaoC2 + AreaC2 + PIBC2 + (float) PontosTuristicosC2 + PIBPerCapitaC2 + (1.0f / DensindadePopC2);
    
    
    //Menu - Comparação do atributo 1
    printf("\nEscolha o primeiro atributo a ser comparado:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Num. Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super Poder\n");
    scanf("%d", &selectMenu1);

    //Menu - Comparação do atributo 2. Só mostra as opções diferentes do atributo 1
    printf("\nEscolha o segundo atributo a ser comparado (não repita o anterior!):\n");
    selectMenu1 != 1 ? printf("1 - Populacao\n") : NULL;
    selectMenu1 != 2 ? printf("2 - Area\n") : NULL;
    selectMenu1 != 3 ? printf("3 - PIB\n") : NULL;
    selectMenu1 != 4 ? printf("4 - Num. Pontos Turisticos\n") : NULL;
    selectMenu1 != 5 ? printf("5 - Densidade Demografica\n") : NULL;
    selectMenu1 != 6 ? printf("6 - PIB per capita\n") : NULL;
    selectMenu1 != 7 ? printf("7 - Super Poder\n") : NULL;
    scanf("%d", &selectMenu2);

    //Verifica se o usuário selecionou o mesmo atributo que o anterior
    selectMenu2 = selectMenu2 == selectMenu1 ? 0 : selectMenu2;
    
    //Encerra o programa se ele selecionou uma opção inválida ou repetida
    if (selectMenu1 < 1 || selectMenu1 > 7 || selectMenu2 < 1 || selectMenu2 > 7){
        printf("\nOpcao invalida. Tente novamente!\n");
        return 0;
    }

    //Exibindo os dados da carta 1
    printf("\nDados da Carta 1:\n");
    printf("Codigo: %s\n", CodigoC1);
    printf("Nome: %s\n", NomeC1);
    printf("Populacao: %ld\n", PopulacaoC1);
    printf("Área: %.2f km²\n", AreaC1);
    printf("PIB: %.2f bilhoes de reais\n", PIBC1);
    printf("Numero de Pontos Turisticos: %d\n", PontosTuristicosC1);
    printf("Densidade Populacional: %.2f hab/km²\n", DensindadePopC1);
    printf("PIB per Capita: %.2f reais\n", PIBPerCapitaC1);
    printf("Super Poder: %.2f\n", SuperPoderC1);

    // Exibindo os dados da carta 2
    printf("\nDados da Carta 2:\n");
    printf("Codigo: %s\n", CodigoC2);
    printf("Nome: %s\n", NomeC2);
    printf("Populacao: %ld\n", PopulacaoC2);
    printf("Area: %.2f km²\n", AreaC2);
    printf("PIB: %.2f bilhoes de reais\n", PIBC2);
    printf("Numero de Pontos Turisticos: %d\n", PontosTuristicosC2);
    printf("Densidade Populacional: %.2f hab/km²\n", DensindadePopC2);
    printf("PIB per Capita: %.2f reais\n", PIBPerCapitaC2);
    printf("Super Poder: %.2f\n", SuperPoderC2);

    printf("\n\033[1mDisputa de Cartas:\033[0m\n");
    printf("%s vs %s \n", NomeC1, NomeC2);

    /*
    Comparação e a soma dos atributos 
    Resolvi fazer com if ao invés de switch para evitar duplicação de código (dois switches)
    */ 

    if(selectMenu1 == 1 || selectMenu2 == 1){
        SomaSelectC1 += (double) PopulacaoC1;
        SomaSelectC2 += (double) PopulacaoC2;
        if(PopulacaoC1 > PopulacaoC2){
            pontosC1++;
            printf("População: \033[1m %ld\033[0m vs %ld \n", PopulacaoC1, PopulacaoC2);
        } 
        else if(PopulacaoC1 < PopulacaoC2) {
            pontosC2++;
            printf("População:  %ld  vs \033[1m%ld\033[0m \n", PopulacaoC1, PopulacaoC2);
        }
        else printf("População: %ld vs %ld\n", PopulacaoC1, PopulacaoC2);
    }
    if(selectMenu1 == 2 || selectMenu2 == 2){
        SomaSelectC1 += AreaC1;
        SomaSelectC2 += AreaC2;
        if(AreaC1 > AreaC2){
            pontosC1++;
            printf("Área: \033[1m%.2f\033[0m vs %.2f\n", AreaC1, AreaC2);
        } 
        else if(AreaC1 < AreaC2){
            pontosC2++;
            printf("Área: %.2f vs \033[1m%.2f\033[0m\n", AreaC1, AreaC2);
        }
        else printf("Área: %.2f vs %.2f\n", AreaC1, AreaC2);
    }
    if(selectMenu1 == 3 || selectMenu2 == 3){
        SomaSelectC1 += PIBC1;
        SomaSelectC2 += PIBC2;
        if(PIBC1 > PIBC2){
            pontosC1++;
            printf("PIB: \033[1m%.2f\033[0m vs %.2f\n", PIBC1, PIBC2);
        } 
        else if(PIBC1 < PIBC2){
            pontosC2++;
            printf("PIB: %.2f vs \033[1m%.2f\033[0m\n", PIBC1, PIBC2);
        }
        else printf("PIB: %.2f vs %.2f\n", PIBC1, PIBC2);
    }
    if(selectMenu1 == 4 || selectMenu2 == 4){
        SomaSelectC1 += PontosTuristicosC1;
        SomaSelectC2 += PontosTuristicosC2;
        if(PontosTuristicosC1 > PontosTuristicosC2){
            pontosC1++;
            printf("Pontos Turísticos: \033[1m%d\033[0m vs %d\n", PontosTuristicosC1, PontosTuristicosC2);
        } 
        else if(PontosTuristicosC1 < PontosTuristicosC2){
            pontosC2++;
            printf("Pontos Turísticos: %d vs \033[1m%d\033[0m\n", PontosTuristicosC1, PontosTuristicosC2);
        }
        else printf("Pontos Turísticos: %d vs %d\n", PontosTuristicosC1, PontosTuristicosC2);
    }
    if(selectMenu1 == 5 || selectMenu2 == 5){
        SomaSelectC1 += DensindadePopC1;
        SomaSelectC2 += DensindadePopC2;
        if(DensindadePopC1 < DensindadePopC2){
            pontosC1++;
            printf("Densidade Populacional: \033[1m%.2f\033[0m vs %.2f\n", DensindadePopC1, DensindadePopC2);
        } 
        else if(DensindadePopC1 > DensindadePopC2){
            pontosC2++;
            printf("Densidade Populacional: %.2f vs \033[1m%.2f\033[0m\n", DensindadePopC1, DensindadePopC2);
        }
        else printf("Densidade Populacional: %.2f vs %.2f\n", DensindadePopC1, DensindadePopC2);
    }
    if(selectMenu1 == 6 || selectMenu2 == 6){
        SomaSelectC1 += PIBPerCapitaC1;
        SomaSelectC2 += PIBPerCapitaC2;
        if(PIBPerCapitaC1 > PIBPerCapitaC2){
            pontosC1++;
            printf("PIB per Capita: \033[1m%.2f\033[0m vs %.2f\n", PIBPerCapitaC1, PIBPerCapitaC2);
        } 
        else if(PIBPerCapitaC1 < PIBPerCapitaC2){
            pontosC2++;
            printf("PIB per Capita: %.2f vs \033[1m%.2f\033[0m\n", PIBPerCapitaC1, PIBPerCapitaC2);
        }
        else printf("PIB per Capita: %.2f vs %.2f\n", PIBPerCapitaC1, PIBPerCapitaC2);
    }
    if(selectMenu1 == 7 || selectMenu2 == 7){
        SomaSelectC1 += SuperPoderC1;
        SomaSelectC2 += SuperPoderC2;
        if(SuperPoderC1 > SuperPoderC2){
            pontosC1++;
            printf("Super Poder: \033[1m%.2f\033[0m vs %.2f\n", SuperPoderC1, SuperPoderC2);
        } 
        else if(SuperPoderC1 < SuperPoderC2){
            pontosC2++;
            printf("Super Poder: %.2f vs \033[1m%.2f\033[0m\n", SuperPoderC1, SuperPoderC2);
        }
        else printf("Super Poder: %.2f vs %.2f\n", SuperPoderC1, SuperPoderC2);
    }
    
    //Compara a soma dos atributos e adiciona pontos a carta que tem a soma maior
    if(SomaSelectC1 > SomaSelectC2){
        printf("\nSoma dos Atributos: \033[1m%.2f\033[0m vs %.2f\n", SomaSelectC1, SomaSelectC2);
    } 
    else if(SomaSelectC1 < SomaSelectC2){
        printf("\nSoma dos Atributos: %.2f vs \033[1m%.2f\033[0m\n", SomaSelectC1, SomaSelectC2);
    }
    else printf("\nSoma dos Atributos: %.2f vs %.2f\n", SomaSelectC1, SomaSelectC2);


    // Mostra o Resultado Final
    printf("\nPontos da Carta 1 = %d \n" , pontosC1);
    printf("Pontos da Carta 2 = %d \n" , pontosC2);
    printf("\n\033[1mRESULTADO FINAL\033[0m: ");

    if(pontosC1 > pontosC2){
        printf("Carta 1 ganhou! \n\n");
    }
    else if(pontosC1 < pontosC2){
        printf("Carta 2 ganhou! \n\n");
    }
    else printf("Empate! \n\n");
    
    return 0;
}