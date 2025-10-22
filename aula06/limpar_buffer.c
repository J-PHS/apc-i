#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL,"");
    int numero = 0;

    printf ("entre com um numero: ");
    int leu_certo = scanf("%i", &numero);

    while (leu_certo == 0) {
        while (getchar() != '\n'); //limpar buffer
        printf("Não é um número! Tente novamente.\n");
        printf("Entre com um número: ");
        leu_certo = scanf("%i", &numero);
    }
    return 0;
}