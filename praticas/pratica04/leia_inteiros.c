#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL,"");

    int numero;
    int valor_x;
    int valor_y;


    printf("Digite um número inteiro: ");
    scanf("%i", &numero);
    printf("Você digitou: %i\n", numero);
    printf("Digite as coordenadas X e Y: ");
    scanf("%i %i", &valor_x, &valor_y);
    printf("Você digitou: %i e %i\n", valor_x, valor_y);
    

    return 0;
}