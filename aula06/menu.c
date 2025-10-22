#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main (){

    setlocale(LC_ALL,"");
    int opcao = 0;

    while (opcao !=3){
        system("clear"); // limpar o terminal
        printf("=========================\n");
        printf("        Joguitcho        \n");
        printf("=========================\n");
        printf("    1 - Novo Jogo        \n");
        printf("    2 - Ver Ranking      \n");
        printf("    3 - Sair             \n");
        printf("=========================\n");
        printf("Escolha uma opção => \n");
        scanf("%i", &opcao);
        while(getchar() != '\n'); //limpar buffer
        switch (opcao){
            case 1:{
                system("clear");
                char nome[30];
                printf("Entre com seu nome: ");
                fgets(nome, sizeof(nome), stdin);
                printf("Olá %s!\n", nome);
                printf("Pressione ENTER para começar o jogo\n");
                getchar();
            }
            case 2:{

            }
            case 3: printf("Até logo!\n"); break;
            default: printf("Opção inválida! Pressione ENTER. \n"); getchar();
        }
    }
    return 0;
}