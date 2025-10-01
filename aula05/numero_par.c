#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL,"");
    int numero;

    printf("Entre com um numero inteiro: ");
    scanf("%i", &numero);

    int resto_da_divisao_por_2 = numero % 2;
    //int resto_da_divisao_por_2_eh_zero = resto_da_divisao_por_2 == 0;
    //if (resto_da_divisao_por_2_eh_zero){

    if (resto_da_divisao_por_2 == 0){
        printf("O numero %i é par!\n", numero);
        
    }else {
            printf("O numero %i é impar!\n", numero);    
        }
    // if (resto_da_divisao_por_2 != 0){
    //     printf("O numero %i é impar!\n", numero);
    // }   

    return 0;
}