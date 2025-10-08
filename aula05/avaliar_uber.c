#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL,"");
    int nota;
    printf("Entre com uma nota de 1 a 5: ");
    scanf("%i", &nota);

/*
    if (nota == 1){
        printf("Sua avaliação foi *\n");
    } else if (nota == 2) {
        printf("Sua avaliação foi **\n");
    } else if (nota == 3) {
        printf("Sua avaliação foi ***\n");
    } else if (nota == 4) {
        printf("Sua avaliação foi ****\n");
    } else if (nota == 5) {
        printf("Sua avaliação foi *****\n");
    } else {
        printf("Nota inválida. Tente novamente.\n");
    }
*/
    switch (nota){
        case 1: printf("Sua avaliação foi *\n");break;
        case 2: printf("Sua avaliação foi **\n");break;
        case 3: printf("Sua avaliação foi ***\n");break;
        case 4: printf("Sua avaliação foi ****\n");break;
        case 5: printf("Sua avaliação foi *****\n");break;
        default: printf("Nota inválida. Tente novamente.\n");
    }
    return 0;
}