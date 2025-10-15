#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL,"");
    char operacao;
    printf("Digite um operador '+' '-' '*' ou '/': ");
    scanf("%c",&operacao);
    float numero1;
    float numero2;
    float result;
    printf("Digite primeiro número: ");
    scanf("%f",&numero1);
    printf("Digite segundo número: ");
    scanf("%f",&numero2);
    switch(operacao){
        case '+': {
            result = numero1 + numero2;
            printf("Resultado da soma = %.2f",result);
        }break;
        case '-':{
            result = numero1 - numero2;
            printf("Resultado da subtração = %.2f",result);
        }break;
        case '/':{
            result = numero1 / numero2;
            printf("Resultado da divisão = %.2f",result);
        }break;
        case '*':{
            result = numero1 * numero2;
            printf("Resultado da multiplicação = %.2f",result);
        }break;
        default: printf("ERROR. Escolhe um sinal válido");
    }

    return 0;
}