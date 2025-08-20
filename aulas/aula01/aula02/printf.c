#include <stdio.h>
#include <locale.h> //biblioteca de idiomas
int main (){
    setlocale(LC_ALL,""); // usa o idioma portugues
    printf("-----------------\n\n");
    printf("Hello mah dudes. Mãezinha\n\n");
    printf("----------------\n\n");
    printf("\n-----------------\n\n");
    printf("   N O T A  L E G A L\n");
    printf("Caderno    1   R$ 10.00\n");
    printf("Lápis      2   R$  5.00\n");
    printf("Borracha   1   R$  7.50\n");
    printf("\n-----------------\n\n");
    printf("Total.........:   22.50\n");
    
    // especificador de formato
    // %c - imprime um caracter
    // %s - imprime um texto (string)
    // %i - imprime um inteiro
    // %f - imprime um flutuante (fracionario)

       printf("\n\nCaderno    1   10.00\n");
       printf("%-15s %3i R$ %6.2f\n", "Caderno", 1, 10.0);
       printf("%-15s %3i R$ %6.2f\n", "Borracha", 2, 7.50);


    return 0;
}