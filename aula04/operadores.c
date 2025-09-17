#include <stdio.h>
#include <locale.h>
#include <math.h> //Biblioteca de matematica

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

    // Operadores lógicos
    float media = 4.0f;
    float falta = 0.25f;
    int operador_E = media >=5.0f && falta <= 0.25f;

    printf("Passei? (E) %i\n", operador_E);

    int operador_OU = media >=5.0f || falta <= 0.25f;

    printf("passei? (OU) %i\n", operador_OU);

    int operador_NAO = !(media >= 5.0f);

    printf("Passei (Nao)? %i\n", operador_NAO);

    /*
    0 < numero < 10  Na matematica
    0 < numero && numero < 10  Na programação
    Falso E qualquer coisa é falso
    Verdadeiro OU Qualquer coisa é verdadeiro
    
    
    Funções da Matemática
    Raiz quadrada, Logaritmo, Exponencial, Potencia
    Tangente, Seno, Coseno

    #include <math.h> Biblioteca de matematica
 
    */
   const double PI = 3.1415;
   double raiz_quadrada_de_2 = sqrt(2);
   double potencia_de_3 = pow(2, 3);
   double logaritmo_base10 = log10(2);
   double exponencial = exp(2);
   double coseno_90 = cos(90 * (PI / 180)); // converter para radiano

   printf("A raiz quadrada de 2 é %.2f\n", raiz_quadrada_de_2);
   printf("A potencia de 2 elevado a 3 = %.0f\n", potencia_de_3);
   printf("O logaritmo de 2 na base 10 = %.2f\n", logaritmo_base10);
   printf("A exponencial de 2 = %.2f\n", exponencial);
   printf("O cosseno de 90 = %.2f\n", coseno_90);

   /*
   Precedencia
    0. ()
    1.  *  /  % 
    2.  + -
   */
  int expressao1 = 2 - 5 / 3 * 4 + 1;
  // 5 / 3 = 1, 2-1*4+1
  // 1 * 4 = 4, 2-4+1
  // 2 - 4 = -2, -2+1
  // -2+1 = -1
  printf("O resultado da expressão 1 é = %i\n",expressao1);
  int expressao2 = 2 - 5 / (3 * 4) + 1;
  printf("O resultado da expressão 2 é = %i\n",expressao2);
  // (3*4) = 12, 2 - 5 / 12 + 1
  // 5 / 12 = 0, 2 - 0 + 1
  // 2 - 0 = 2, 2+1
  // 2+ 1 = 3
    return 0;

}