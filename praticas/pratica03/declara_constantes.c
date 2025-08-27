#include <stdio.h>
#include <locale.h>
#define PI 3.141593

int main (){
    setlocale(LC_ALL,"");
    // PI = 3.14;
    printf("Valor de PI: %f\n", PI);
    const char SEXO_MASCULINO = 'M';
    printf("Sexo Masculino: %c\n", SEXO_MASCULINO);
    

    return 0;

}