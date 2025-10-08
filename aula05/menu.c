#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL,"");
    int opcao;
    printf("--------------------\n");
    printf("    MENU PRINCIPAL  \n");
    printf("--------------------\n");
    printf("1 - Consultar saldo\n");
    printf("2 - Fazer recarga\n");
    printf("3 - Ouvir recados\n");
    printf("4 - Ultima chamada\n");
    printf("5 - Encerrar chat\n");
    printf("--------------------\n");

    printf("Escolha uma opção: ");
    scanf("%i", &opcao);

    switch (opcao){
        case 1: printf("Seu saldo é de incríveis R$ 0,01\n");break;
        case 2: printf("Escolha seu valor de recarga\n");break;
        case 3: printf("Você tem 5 recados da sua mãe\n"); break;
        case 4: printf("A ultima chamada foi 99999-999\n");break;
        case 5: printf("Obrigado pelo seu contato. VLW FLW.\n");break;
        default: printf("Opção inválida, tente novamente.(Nimal)");
    }    

    return 0;
}