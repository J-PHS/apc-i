#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL,"");
    int numero1;
    int numero2;
    float numero3;



    printf("Digite um número inteiro: ");
    scanf("%i", &numero1);
    printf("Digite outro número inteiro: ");
    scanf("%i", &numero2);
    printf("Digite um número flutuante: ");
    scanf("%f", &numero3);
    
    int soma = numero1 + numero2;

    printf("A soma de %i com %i é igual a %i\n", numero1, numero2, soma);
    int subtracao = numero1 - numero2;
    printf("A subtração de %i com %i é igual a %i\n",numero1,numero2,subtracao);
    int multiplicacao = numero1 * numero2;
    printf("A multiplicação de %i com %i é igual a %i\n", numero1,numero2,multiplicacao);
    int divisao = numero1 / numero2;
    printf("A divisão de %i com %i é igual a %i\n",numero1,numero2,divisao);
    int resto_da_divisao = numero1 % numero2;
    printf("O resto da divisão de %i com %i é igual a %i\n", numero1,numero2,resto_da_divisao);
    float divisao_fracionada = numero1 / numero3;
    printf("A divisão fracionada de %i com %f é igual a %f\n", numero1, numero3, divisao_fracionada);
//    printf("1 = %i, 2 = %i, 3 = %f soma = %i", numero1,numero2,numero3,soma);
    return 0;
}