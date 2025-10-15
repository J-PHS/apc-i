#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL,"");
    int ladoA;
    int ladoB;

    printf("Entre com o valor do ladoA do retangulo: ");
    scanf("%i", &ladoA);

    printf("Entre com o valor do ladoB do retangulo: ");
    scanf("%i", &ladoB);
    for (int j = 1; j <= ladoA; j++)
    {
    for (int i = 1; i <= ladoB; i++){
        printf("*");
    }
    printf("\n");
    }

    printf("\n\n");
    //Abaixo, retangulo oco

    for (int i = 1; i <= ladoA; i++)
    {
    for (int j = 1; j <= ladoB; j++){
        if (i == 1 || i == ladoA)
        {
        printf("*");
        }
        else if (j == 1 || j == ladoB){
            printf("*");
        }
        else{
            printf(" ");
        }
    }
    printf("\n");
    }



    return 0;
}