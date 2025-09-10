#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL,"");
    int matricula;
    float a1;
    float a2;
    float media;
    printf("Digite Matrícula: ");
    scanf("%10i", &matricula);
    printf("Digite A1: ");
    scanf("%f", &a1);
    printf("Digite A2: ");
    scanf("%f", &a2);
    printf("Digite Média: ");
    scanf("%f", &media);

    printf("Matrícula\tA1\tA2\tMedia\n");
    printf("%i\t%.2f\t%.2f\t%.2f\t", matricula, a1, a2, media);


    return 0;
}