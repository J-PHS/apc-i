#include <stdio.h>
#include <locale.h>

// CONTINUAR ESTE
int main () {
setlocale(LC_ALL,"");

float nota_a1;
float nota_a2;

printf("Nota A1: ");
scanf("%f", &nota_a1);
printf("Nota A2: ");
scanf("%f", &nota_a2);

float media_iesb = nota_a1 * 0.4 + nota_a2 * 0.6;
printf("Nota de A1: %.2f\nNota de A2: %.2f\nMédia final: %.2f",nota_a1,nota_a2, media_iesb);



    return 0;
}