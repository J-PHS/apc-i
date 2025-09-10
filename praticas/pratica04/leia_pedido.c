#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    char produto[21];
    int quantidade;
    float valor;

    printf("Produto: ");
    scanf("%[^\n]s", &produto);
    getchar();
    printf("Quantidade: ");
    scanf("%i", &quantidade);
    getchar();
    printf("Valor: ");
    scanf("%f", &valor);
    getchar();
    printf("=======================================\n");
    printf("\t      P E D I D O\n");
    printf("=======================================\n");
    printf("Produto\t\t\t Qtd\t Valor\n");
    printf("%-21s\t %03i\t %.2f", produto, quantidade, valor);
    return 0;
}