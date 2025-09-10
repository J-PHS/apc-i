#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL,"");
    char tecla;
    char nome[31];

    printf("Digite uma tecla:");
    scanf("%c", &tecla);
    getchar();
    printf("Você digitou: %c\n", tecla);
    printf("Digite seu nome: ");
    scanf("%[^\n]s", nome);
    printf("Você digitou : %s\n", nome);

    
    return 0;

}