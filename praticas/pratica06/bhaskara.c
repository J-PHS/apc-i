#include <stdio.h>
#include <locale.h>
#include <math.h>

int main (){
    setlocale(LC_ALL,"");
    int a, b, c;
    printf("Valor de A: ");
    scanf("%i", &a);
    printf("Valor de B: ");
    scanf("%i", &b);
    printf("Valor de C: ");
    scanf("%i", &c);
    float delta = b*b - 4*a*c;
    if (delta < 0){
        printf("A equação não possui raizes reais");
    }else{
        float x1 = (-b + sqrt(delta))/ 2*a;
        float x2 = (-b - sqrt(delta))/ 2*a;
        printf("valor de delta: %.2f \n",delta);
        printf("Valor x1: %.2f\nValor x2: %.2f",x1,x2);
    }


    return 0;
}