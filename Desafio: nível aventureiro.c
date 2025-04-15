#include <stdio.h>
#include <stdlib.h>


int main() {

    printf("Infomações da Carta 1\n");

    char  estado[5];
    char  codigo[10];
    char  cidade_A[10], cidade_B[10];
    unsigned long int   populacao_A, populacao_B; // (%lu) é usado no printf para exibir valores unsigned long int.
    float area_A, area_B;
    float pib_A, pib_B;
    int   pontosturisticos_A, pontosturisticos_B ;
    float densidadepopulacional_A, densidadepopulacional_B;
    float pibpercapita_A, pibpercapita_B;
    float superPoder_A, superPoder_B;
    char Carta_1, Carta_2;
    int opcao;

    //char cidadeVencedora;

    printf("Insira o estado:\n");
    scanf("%s", &estado);
    printf("Estado: %s\n", estado);
    

    printf("Insira o código:\n");
    scanf("%s", &codigo);
    printf("Código: %s\n", codigo);


    printf("Insira a cidade:\n");
    scanf("%s", &cidade_A);
    printf("Cidade: %s\n", cidade_A);


    printf("Insira o numero da população:\n");
    scanf("%lu", &populacao_A);
    printf("Populacao: %lu\n", populacao_A);


    printf("Insira a área:\n");
    scanf("%f", &area_A);
    printf("Área: %.2f km²\n", area_A);


    printf("Insira o PIB:\n");
    scanf("%f", &pib_A);
    printf("PIB: %.2f bilhoes de reais\n", pib_A);

    
    printf("Insira o numero de pontos turisticos:\n");
    scanf("%d", &pontosturisticos_A);
    printf("Pontos turisticos: %d  \n", pontosturisticos_A);

    densidadepopulacional_A = populacao_A / area_A;
    printf("A densidade populacional é: %f\n", densidadepopulacional_A);


    pibpercapita_A = pib_A / populacao_A;
    printf("Pib per Capita é: %.2f reais\n", pibpercapita_A);

    //Super Poder A
    superPoder_A = (int)(populacao_A + area_A + pib_A + pontosturisticos_A + pibpercapita_A + (densidadepopulacional_A / 1));
    printf("Super Poder (A): %.1f\n", superPoder_A);


                                          //     INFORMAÇÕES DA CARTA 02    //


    printf("Infomações da País 2\n");

    printf("Insira o estado:\n");
    scanf("%s", &estado);
    printf("Estado: %s\n", estado);


    printf("Insira o código:\n");
    scanf("%s", &codigo);
    printf("Código: %s\n", codigo);


    printf("Insira a cidade:\n");
    scanf("%s", &cidade_B);
    printf("Cidade: %s\n", cidade_B);


    printf("Insira o numero da populacao:\n");
    scanf("%lu", &populacao_B);
    printf("Populacao: %lu\n", populacao_B);


    printf("Insira a área:\n");
    scanf("%f", &area_B);
    printf("Área: %.2f km²\n", area_B);


    printf("Insira o PIB:\n");
    scanf("%f", &pib_B);
    printf("PIB: %.2f bilhoes de reais\n", pib_B);


    printf("Insira o numero de pontos turisticos:\n");
    scanf("%d", &pontosturisticos_B);
    printf("Pontos turisticos: %d\n", pontosturisticos_B);

    densidadepopulacional_B = populacao_B / area_B;
    printf("A densidade populacional é: %f\n", densidadepopulacional_B);


    pibpercapita_B = pib_B / populacao_B;
    printf("Pib per Capita é: %.2f reais\n", pibpercapita_B);

    //Super Poder B
    superPoder_B = (int)(populacao_B + area_B + pib_B + pontosturisticos_B + pibpercapita_B + (densidadepopulacional_B / 1));
    printf("Super Poder (B): %.1f\n", superPoder_B);

    printf("#### Escolha o atributo para a comparação da Carta 01 e Carta 02 ! ####\n");
    printf("1. População:\n");
    printf("2. Área:\n");
    printf("3. PIB:\n");
    printf("4. Número de pontos turísticos:\n");
    printf("5. Densidade demográfica:\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        if (populacao_A > populacao_B){
            printf("Comparação da População da Carta 1 e Carta 2 !\n");
            printf("Populacao Carta 1: %lu (VS) Populacao carta 2: %lu\n", populacao_A, populacao_B);
            printf("Vitória da Carta 1!");
        } else if (populacao_A == populacao_B){
            printf("Comparação da População da Carta 1 e Carta 2 !\n");
            printf("Populacao Carta 1: %lu (VS) Populacao carta 2: %lu\n", populacao_A, populacao_B);
            printf("EMPATE!");
        } else{
            printf("Comparação da População da Carta 1 e Carta 2 !\n");
            printf("Populacao Carta 1: %lu (VS) Populacao carta 2: %lu\n", populacao_A, populacao_B);
            printf("Vitória da carta 2!");
        }              
        break;
        default:
        printf("Opção inválida:\n");
        break;

        case 2:
        if (area_A > area_B){
            printf("Comparação de Área da Carta 1 e Carta 2 !\n");
            printf("Área Carta 1: %.2f km² (VS) Área carta 2: %.2f km²\n", area_A, area_B);
            printf("Vitória da Carta 1!");
        } else if (area_A == area_B){
            printf("Comparação da Área da Carta 1 e Carta 2 !\n");
            printf("Área Carta 1: %.2f km² (VS) Área carta 2: %.2f km²\n", area_A, area_B);
            printf("EMPATE!");
        } else{
            printf("Comparação da Área da Carta 1 e Carta 2 !\n");
            printf("Área Carta 1: %.2f km² (VS) Área carta 2: %.2f km²", area_A, area_B);
            printf("Vitória da carta 2!");
        }              
        break;

        case 3:
        if (pib_A > pib_B){
            printf("Comparação do PIB da Carta 1 e Carta 2 !\n");
            printf("PIB Carta 1: %.2f bilhoes de reais (VS) PIB carta 2: %.2f bilhoes de reais\n", pib_A, pib_B);
            printf("Vitória da Carta 1!");
        } else if (pib_A == pib_B){
            printf("Comparação do PIB da Carta 1 e Carta 2 !\n");
            printf("PIB Carta 1: %.2f bilhoes de reais (VS) PIB carta 2: %.2f bilhoes de reais\n", pib_A, pib_B);
            printf("EMPATE!");
        } else{
            printf("Comparação do PIB da Carta 1 e Carta 2 !\n");
            printf("PIB Carta 1: %.2f bilhoes de reais (VS) PIB carta 2: %.2f bilhoes de reais\n", pib_A, pib_B);
            printf("Vitória da carta 2!");
        }              
        break;

        case 4:
        if (pontosturisticos_A > pontosturisticos_B){
            printf("Comparação de Pontos Turísticos da Carta 1 e Carta 2 !\n");
            printf("Pontos Turísticos Carta 1: %d (VS) Pontos Turísticos carta 2: %d\n", pontosturisticos_A, pontosturisticos_B);
            printf("Vitória da Carta 1!");
        } else if (pontosturisticos_A == pontosturisticos_B){
            printf("Comparação de Pontos Turísticos da Carta 1 e Carta 2 !\n");
            printf("Pontos Turísticos Carta 1: %d (VS) Pontos Turísticos carta 2: %d\n", pontosturisticos_A, pontosturisticos_B);
            printf("EMPATE!");
        } else{
            printf("Comparação de Pontos Turísticos da Carta 1 e Carta 2 !\n");
            printf("Pontos Turísticos Carta 1: %d (VS) Pontos Turísticos carta 2: %d\n", pontosturisticos_A, pontosturisticos_B);
            printf("Vitória da carta 2!");
        }              
        break;

    
    }





    

    


    return 0;



}
