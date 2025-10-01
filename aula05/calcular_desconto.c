#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL,"");
    /*
        Comprar até 100,00 R$ ganha 1%
        Comprar acima de 100,00 R$ até 500,00 R$ ganha 5%
        comprar acima de 500,00 R$ ganha 10%
    */
   float valor_da_compra;

   printf("Entre com o valor da compra: ");
   scanf("%f",&valor_da_compra);

    float desconto = 0.0f;
    if (valor_da_compra <= 100.0f){
        desconto = valor_da_compra * 0.01f;    
    } else if (valor_da_compra <= 500.0f){
        desconto = valor_da_compra * 0.05f;
    } else {
        desconto = valor_da_compra * 0.1f;
    }

    printf("A compra foi de R$ %7.2f e o desconto foi de R$ %5.2f\n", valor_da_compra, desconto);




    return 0;
}