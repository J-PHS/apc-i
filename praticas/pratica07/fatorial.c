#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL,"");
    int numero;
    int fatorial = 1;

    printf("Digite numero: ");
    scanf("%i", &numero);

    for (int i=numero; i>0; i--){
        fatorial = fatorial * i;
        
    }
        printf("Valor de Numero: %i\nFatorial: %i \n", numero, fatorial);
    return 0;
}