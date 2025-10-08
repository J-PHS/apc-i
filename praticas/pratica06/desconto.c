#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL,"");
    float valor_bruto;
    float valor_desconto;

    printf("Digite valor: ");
    scanf("%f", &valor_bruto);
    
    return 0;
}