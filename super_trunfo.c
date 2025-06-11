#include <stdio.h>


int main() {
    
    char estado[50]; char estado2 [50];
    char codigo [5]; char codigo2 [5];
    char cidade [50]; char cidade2 [50];
    int populacao; int populacao2;
    double area; double area2;
    double pib; double pib2;
    int pontoturistico; int pontoturistico2;
    double pibpercap, densipop, pibpercap2, densipop2, superpoder1, superpoder2;
    int rpop, rarea, rpib, rpt, rpibp, rdensipop, rsp;
     printf ("digite o nome do Estado 1: \n");
     scanf ("%s", estado);
     
     printf ("digite o código da carta 1: \n");
     scanf ("%s", codigo);
    
     printf ("digite o nome da cidade 1: \n");
     scanf ("%s", cidade);
    
     printf ("digite o número da população 1: \n");
     scanf ("%d", &populacao);
    

     printf ("digite a área em km² da carta 1: \n");
     scanf ("%lf", &area);
     

     printf ("digite o PIB da carta 1: \n");
     scanf ("%lf", &pib);
     
     
     printf ("digite o número de pontos turísticos da carta 1: \n");
     scanf (" %d", &pontoturistico);
     
     printf ("digite o nome do Estado 2: \n");
     scanf ("%s", estado2);

     printf ("digite o código da carta 2: \n");
     scanf ("%s", codigo2);

     printf ("digite o nome da cidade 2: \n");
     scanf ("%s", cidade2);

     printf ("digite o número da população 2: \n");
     scanf ("%d", &populacao2);

     printf ("digite a área em km² da carta 2: \n");
     scanf ("%lf", &area2);

     printf ("digite o PIB da carta 2: \n");
     scanf ("%lf", &pib2);
     

     printf ("digite o número de pontos turísticos da carta 2: \n");
     scanf (" %d", &pontoturistico2);
    
     pibpercap = (pib * 1000000000) /  populacao;
     densipop =  populacao / area;
     pibpercap2 = (pib2 * 1000000000) /  populacao2;
     densipop2 = populacao2 / area2;
     superpoder1 = populacao + area + pib + pontoturistico + pibpercap + (1 / densipop);
     superpoder2 = populacao2 + area2 + pib2 + pontoturistico2 + pibpercap2 +(1 / densipop2);
     
     rpop = populacao > populacao2;
     rarea = area > area2;
     rpib = pib > pib2;
     rpt = pontoturistico > pontoturistico2;
     rpib = pib > pib2;
     rdensipop = densipop < densipop2;
     rpibp = pibpercap > pibpercap2;
     rsp = superpoder1 > superpoder2;

     printf ("Carta 1: \n");
     printf ("Estado: %s\n", estado); 
     printf ("Código: %s \n", codigo);
     printf ("Cidade: %s \n", cidade);
     printf ("População: %d - vence carta 2:%d\n", populacao, rpop);
     printf ("Área: %.2f km² - vence carta 2: %d\n", area, rarea);
     printf ("PIB: %.2f bilhão - vence carta 2: %d\n", pib, rpib);
     printf ("Ponto turístico: %d - vence carta 2: %d\n", pontoturistico, rpt);
     printf ("Densidade populacional: %.2f - vence carta 2: %d\n", densipop, rdensipop);
     printf ("PIB per Capita: %.2f - vence carta 2: %d\n", pibpercap, rpibp);
     printf ("superpoder: %.2f - vence carta 2: %d\n", superpoder1, rsp);
     printf (" \n");

     printf ("Carta 2: \n");
     printf ("Estado: %s \n", estado2); 
     printf ("Código: %s \n", codigo2);
     printf ("Cidade: %s \n", cidade2);
     printf ("População: %d \n", populacao2);
     printf ("Área: %.2f km²\n", area2);
     printf ("PIB: %.2f bilhão\n", pib2);
     printf ("Ponto turístico: %d\n", pontoturistico2);
     printf ("Densidade populacional: %.2f\n", densipop2);
     printf ("PIB per Capita: %.2f\n", pibpercap2);
     printf ("superpoder: %.2f\n", superpoder2);
     

    

    return 0;
}