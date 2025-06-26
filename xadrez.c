#include <stdio.h>

void movimento (int direita) {
        if (direita > 0) {
            printf ("Direita / ");
            
            movimento (direita - 1);
        } if (direita < 0) {
            printf ("Esquerda / ");
            movimento (direita + 1);
        }
    }

void movbispo (int passoatual, int limite) {
if ( passoatual >= limite) return;
for (int direita = 0; direita < 1; direita++) {
    for (int cima = 0; cima < 1; cima++) {
        printf ("Direita - ");
        printf ("Cima / ");
    }


}
movbispo (passoatual +1, limite);
}    

    
int main () {

    int limiteTorre = 5, limiterainha = -8;
    printf ("Torre:\n");
    movimento (limiteTorre);
    printf ("\n");

    printf ("Rainha:\n");
    movimento (limiterainha);
    printf ("\n");

    printf ("Bispo:\n");
    int limite = 5;
    movbispo (0, limite);


    printf ("\n");
    printf ("Cavalo:\n");
    for (int cima = 0, esquerda = 0; cima < 2 || esquerda < 1;){
        if (cima < 2){
             printf ("Cima - ");
            cima++;
    } else if (esquerda < 1){
             printf ("Esquerda\n");
             esquerda++;
    }

    }
    

    return 0;
}

   