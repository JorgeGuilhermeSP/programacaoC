#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {
    int numerojogador, numerocpu, resultado;
    char tipocomparacao;

    srand (time(0));
    numerocpu = rand () % 100 + 1;

    printf ("Bem vindo ao jogo Maior, Menor ou Igual!\n");
    printf ("Você deve escolher um número e o tipo de comparação.\n");
    printf ("M. Maior\n");
    printf ("N. Menor\n");
    printf ("I. Igual\n");

    printf ("Escolha a comparação:\n");
    scanf (" %c", &tipocomparacao);
 
    printf ("Escolha um número (entre 1 e 100):\n");
    scanf ("%d", &numerojogador);


    switch (tipocomparacao)
    {
    case 'M':
    case 'm':
    printf ("Você escolheu a opção maior!\n");
        resultado = numerojogador > numerocpu ? 1 : 0;     
    break;

    case 'N':
    case 'n':
    printf ("Você escolheu a opção menor!\n");
    resultado = numerojogador < numerocpu ? 1 : 0;
    break;

    case 'I':
    case 'i':
    printf ("Você escolheu a opção igual!\n");
    resultado = numerojogador == numerocpu ? 1 : 0;
    break;
    
    default:
    printf ("Opção inválida");
        break;
    }
    

    printf ("O número do computador é: %d e o do jogador é: %d\n", numerocpu, numerojogador);

    if (resultado == 1)
    {
    printf ("Você venceu!");
    } else {
        printf ("Você perdeu!");
    }








return 0;

}