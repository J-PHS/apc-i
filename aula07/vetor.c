#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL,"");
    // int numero1;
    // int numero2;
    // int numero3;
    // int numero4;
    // int numero5;
    // int numero6;
    // int numero7;
    // int numero8;
    // int numero9;
    // int numero10;

    int numeros[10]; // uma dimensao = vetor
    // numeros[0] = 1;
    // numeros[1] = 2;
    // numeros[2] = 3;
    // numeros[3] = 4;
    // numeros[4] = 5;
    // numeros[5] = 6;
    // numeros[6] = 7;
    // numeros[7] = 8;
    // numeros[8] = 9;
    // numeros[9] = 10;
    
    // for(int i=0; i < 10; i++){
    //     numeros[i] = i+1;
    // }
    for(int i = 0; i < 10; i++){
        printf("Entre com o %i° numero: ", i + 1);
        scanf("%i", &numeros[i]);

    }
    printf("Os numeros digitados foram: ");
    for (int i = 0; i < 10; i++){
        if (i < 9){
        printf ("%i, ", numeros[i]);
        } else {
            printf ("%i.", numeros[i]);
        }
    }
    printf("\n");

    // printf("Entre com o 1o numero: ");
    // scanf("%i", &numero1);
    // printf("Entre com o 2o numero: ");
    // scanf("%i", &numero2);
    // printf("Entre com o 3o numero: ");
    // scanf("%i", &numero3);
    // printf("Entre com o 4o numero: ");
    // scanf("%i", &numero4);
    // printf("Entre com o 5o numero: ");
    // scanf("%i", &numero5);
    // printf("Entre com o 6o numero: ");
    // scanf("%i", &numero6);
    // printf("Entre com o 7o numero: ");
    // scanf("%i", &numero7);
    // printf("Entre com o 8o numero: ");
    // scanf("%i", &numero8);
    // printf("Entre com o 9o numero: ");
    // scanf("%i", &numero9);
    // printf("Entre com o 10o numero: ");
    // scanf("%i", &numero10);



    return 0;
}