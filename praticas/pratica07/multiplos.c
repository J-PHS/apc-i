#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL,"");

    int numero;
    printf("Digite número: ");
    scanf("%i",&numero);

    for(int i=1; i<101; i++){
        if (i % numero == 0){
            printf("%i, ", i);
        }
    }

    return 0;
}