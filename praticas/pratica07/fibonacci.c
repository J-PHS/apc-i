#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL,"");
    int n;
    int anterior = 0;
    int proximo = 1;
    printf ("Valor para N: ");
    scanf("%i", &n);
    for (int i=0; i<n; i++){
        printf("%i, ", proximo);
        int auxiliar = proximo;
        proximo = anterior + proximo;
        anterior = auxiliar;
    }


    return 0;
}