#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL,"");
    int nota;
    printf("Digite a nota: ");
    scanf("%i", &nota);
//    printf("nota digitada foi: %i", nota);
    switch (nota){
        case 1: printf("Você ganhou '*'.\n");break;
        case 2: printf("Você ganhou '**'.\n");break;
        case 3: printf("Você ganhou '***'.\n");break;
        case 4: printf("Você ganhou '****'\n");break;
        case 5: printf("Você ganhou '*****'\n");break;
        default: printf("Valor inválido");
    }

    return 0;
}