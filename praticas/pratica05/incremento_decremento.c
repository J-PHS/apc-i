#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL,"");
    int numero;
    printf("Digite numero:");
    scanf("%i", &numero);
        int incremento = numero;
        int decremento = numero;
    printf("O pré-incremento do número %i e %i\n", numero, ++incremento);
    printf("O pré-decremento do número %i e %i\n", numero, --decremento);
    
    incremento = numero;
    decremento = numero;
          
    printf("O pós-incremento do número %i e %i\n", numero, incremento++);
    printf("O pós-incremento do número %i e %i\n", numero, decremento--);    

    return 0;
}