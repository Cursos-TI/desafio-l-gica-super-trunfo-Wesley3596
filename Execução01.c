#include <stdio.h>

int main() {

    printf("Infomações da CARTA 1\n");

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


    printf("Infomações da CARTA 2\n");

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

    //Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    
    if (populacao_A > populacao_B){
        printf("A carta 1 tem a maior população. \n");
    } else{ 
        printf("A carta 2 tem a maior população. \n");
    }

    if (densidadepopulacional_A < densidadepopulacional_B){
        printf("A carta 1 tem a menor densidade populacional. \n");
    }else{
        printf("A carta 2 tem a menor densidade populacional. \n");
    }

    if (superPoder_A > superPoder_B){
        printf("A carta 1 tem o maior poder! \n");
    } else{
        printf("A carta 2 tem o maior poder! \n");
    }
    

    printf("A cidade vencedora é: %s\n", cidade_A, cidade_B);
    


    return 0;



}
