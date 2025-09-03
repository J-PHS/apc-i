#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL,"");
    int MATRICULA = 0;
    int idade = 99;
    float altura = 9.90;
    float peso = 999.0;
    char sexo = 'F';

    printf("Matricula: %08i\n", MATRICULA);
    printf("Idade: %i anos\n", idade);
    printf("Altura: %3.2f m\n",altura);
    printf("Peso: %4.1f kg\n", peso);
    printf("Sexo: %c\n", sexo);


    return 0;

}