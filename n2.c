#include <stdio.h>
 int main () {

int idade;
char nome [20]; 
float altura; 

printf ("digite sua idade: \n");
scanf ("%d", &idade);
printf ("sua idade é: %d\n", idade);

printf ("digite seu nome: \n");
scanf ("%s", nome);
printf ("seu nome é: %s\n", nome);

printf ("digite sua altura: ");
scanf ("%f", &altura);
printf ("sua altura é: %f", altura);

return 0;

 }