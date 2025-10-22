#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL,"");
    int numero = 0;

    printf("Entre com um número inteiro de 1 a 10: ");
    scanf("%i", &numero);

    while (numero < 1 || numero > 10){
        printf("Número deve estar entre 1 e 10. Nimal\n");
        printf("Tente novamente: ");
        scanf("%i", &numero);    
    }

    do{
        printf("Número deve estar entre 1 e 10. Nimal\n");
        printf("Tente novamente: ");
        scanf("%i", &numero);    
    } while (numero < 1 || numero > 10);


    printf("Você digitou um número válido!\n");

    return 0;
}