#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL,"");
    int ano;
    printf("Digite um ano: ");
    scanf("%i", &ano);
    int ano_bissexto = ano % 4;
    if (ano_bissexto == 0 && ano % 100 != 0 || ano % 400 == 0){
        printf("O ano %d é bissexto\n", ano);
    } else {
        printf("O ano %d não é bissexto!\n", ano);
    }
    return 0;
}