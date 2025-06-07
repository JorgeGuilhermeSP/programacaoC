#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    char estado[50];
    char codigo [5];
    char cidade [50];
    int populacao;
    float area;
    float pib;
    int pontoturistico;
    
     printf ("digite o nome do Estado 1: \n");
     scanf ("%s", estado);
     
     printf ("digite o código da carta 1: \n");
     scanf ("%s", codigo);
    
     printf ("digite o nome da cidade 1: \n");
     scanf ("%s", cidade);
    
     printf ("digite o número da população 1: \n");
     scanf ("%d", &populacao);
    

     printf ("digite a área em km² da carta 1: \n");
     scanf ("%f", &area);
     

     printf ("digite o PIB da carta 1: \n");
     scanf ("%f", &pib);
     getchar ();
     
     printf ("digite o número de pontos turísticos da carta 1: \n");
     scanf (" %d", &pontoturistico);
     

     printf ("Carta 1: \n");
     printf ("Estado: %s \n", estado); 
     printf ("Código: %s \n", codigo);
     printf ("Cidade: %s \n", cidade);
     printf ("População: %d \n", populacao);
     printf ("Área: %.2f km²\n", area);
     printf ("PIB: %.2f milhão\n", pib);
     printf ("Ponto turístico: %d\n", pontoturistico);




    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
