#include <stdio.h>
int main() {

int idade, matrícula;
float altura;
char nome[50];

printf ("digite sua idade: \n");
scanf ("%d", &idade);
  
printf ("Digite sua altura: \n");
scanf ("%f", &altura);

printf ("Digite seu nome: \n");
scanf ("%s", &nome);

printf ("Digite sua matrícula: \n");
scanf ("%d", &matrícula);

printf ("Nome do aluno: %s - Matrícula: %d - ", nome, matrícula);
printf ("Idade: %d - Altura: %.2f", idade, altura);

return 0;

}