#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int numero1 = 10;
    int numero2 = 20;
    
    //operadores aritmeticos
    int soma = numero1 + numero2;
    int subtracao = numero1 - numero2;
    int multiplicacao = numero1 * numero2;
    float divisao = numero1 / (numero2 *1.0);
    //Devolve Resto
    int resto_da_divisao = numero1 % numero2;


    printf("A soma de %i com %i é %i\n", numero1, numero2, soma);
    printf("A subtração de %i com %i é %i\n",numero1,numero2,subtracao);   
    printf("A multiplicação de %i com %i é %i\n",numero1,numero2,multiplicacao);
    printf("A divisão de %i com %i é %.1f\n",numero1,numero2,divisao);
    printf("A divisão de %i com %i é %i\n",numero1,numero2,resto_da_divisao);

    //Operadores Incremento e decremento
    int incremento = numero1;
    int decremento = numero1;
    incremento++;
    decremento--;
    int pre_incremento = numero1;
    int pos_incremento = numero1;
    

    //numero1++; // numero1 = numero1 + 1;
    //numero1--; // numero1 = numero1 - 1;
    printf("\nO incremento de %i é %i\n", numero1 , incremento);
    printf("O decremento de %i é %i\n", numero1, decremento);
    printf("O pre incremento de %i é %i\n", numero1 , ++pre_incremento);
    printf("O pos incremento de %i é %i\n", numero1, pos_incremento++); // adiciona +1 DEPOIS de imprimir a variavel
    printf("O pos incremento agora é %i\n", pos_incremento);// já somou o +1 então agora resulta em 11

    // Operadores relacionais
    int menor_que = numero1 < numero2;
    int menor_ou_igual = numero1 <= numero2;
    int maior_que = numero1 > numero2;
    int maior_ou_igual = numero1 >= numero2;
    int igual = numero1 == numero2;
    int diferente = numero1 != numero2;

    // 0 - Falso, 1 - Verdadeiro
    
    printf("O número %i é menor que %i? %i\n",numero1,numero2,menor_que);
    printf("O numero %i é menor ou igual que %i? %i\n",numero1,numero2,menor_ou_igual);
    printf("O numero %i é maior que %i? %i\n", numero1,numero2,maior_que);
    printf("O numero %i é maior ou igual que %i? %i\n",numero1,numero2,maior_ou_igual);    
    printf("O numero %i é igual a %i? %i\n",numero1,numero2,igual);
    printf("O numero %i é diferente de %i? %i\n",numero1,numero2,diferente);

    return 0;

}