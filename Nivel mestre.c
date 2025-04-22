#include <stdio.h>
#include <stdlib.h>
#include <time.h>


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
    int escolha_1, escolha_2;

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

    printf("BEM VINDO AO JOGO!!\n");
    printf("#### Escolha o 'PRIMEIRO' atributo para a comparação da Carta 01 e Carta 02! ####\n");
    printf("1. População:\n");
    printf("2. PIB:\n");
    printf("3. Número de pontos turísticos:\n");
    
    
    printf("Escolha o primeiro atributo::\n");
    scanf("%d", &escolha_1);

    switch (escolha_1)
    {
        case 1:
        printf("Atributo POPULAÇÃO !\n");
        printf("População A: %lu e População B: %lu\n", populacao_A, populacao_B);
        escolha_1 = populacao_A > populacao_B ? 1 : 0;
        break;
        
        case 2:
        printf("Atributo PIB !\n");
        printf("PIB A: %.2f e PIB B: %.2f", pib_A, pib_B);
        escolha_1 = pib_A > pib_B ? 1 : 0;
        break;
       
        case 3:
        printf("Atributo PONTOS TURÍSTICOS !\n");
        printf("Pontos turísticos A: %d e Pontos turísticos B: %d\n", pontosturisticos_A, pontosturisticos_B);
        escolha_1 = pontosturisticos_A > pontosturisticos_B ? 1 : 0;
        break;

        default:
       printf("Opção inválida!\n");
        break;
    }
    

    
    printf("#### Escolha o 'SEGUNDO' atributo para a comparação da Carta 01 e Carta 02! Selecione atributo deferente da primeira escolha. ####\n");
    printf("1. População:\n");
    printf("2. PIB:\n");
    printf("3. Número de pontos turísticos:\n");

    printf("Escolha o segundo atributo:\n");
    scanf("%d", &escolha_2);

    if(escolha_1 == escolha_2){
        printf("Você escolheu o mesmo atributo!! (xxNOTxx)\n");
    } else{
        switch (escolha_2)
        {
            case 1:
            printf("Atributo POPULAÇÃO !\n");
            printf("População A: %lu e População B: %lu\n", populacao_A, populacao_B);
            escolha_2 = populacao_A > populacao_B ? 1 : 0;
            break;

            case 2:
            printf("Atributo PIB !\n");
            printf("PIB A: %.2f e PIB B: %.2f", pib_A, pib_B);
            escolha_2 = pib_A > pib_B ? 1 : 0;
            break;

            case 3:
            printf("Atributo PONTOS TURÍSTICOS !\n");
            printf("Pontos turísticos A: %d e Pontos turísticos B: %d\na", pontosturisticos_A, pontosturisticos_B);
            escolha_2 = pontosturisticos_A > pontosturisticos_B ? 1 : 0;
            break;
        }        

            if(escolha_1 && escolha_2){
                printf("Você GANHOU !!\n");
            }
            else if(escolha_1 != escolha_2){
                printf("EMPATE !!\n");
            }
            else
            {
                printf("DERROTA !!\n");
            }

       
        
    }





    

    


    return 0;



}
