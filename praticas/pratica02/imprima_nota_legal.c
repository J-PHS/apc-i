#include <stdio.h>
int main() {
    printf("%s","==============================\n");
    printf("%13s %12s\n","N O T A","L E G A L" );
    printf("%s","==============================\n");
    printf("%-15s%3s%12s\n","Produto","Qtd","Valor Unit");
    printf("%-15s%03i%12.2f\n","Camiseta",2,39.99);
    printf("%-15s%03i%12.2f\n","Calca",1,89.90);
    printf("%-15s%03i%12.2f\n","Meia Social",3,19.99);
    printf("%s","==============================\n");
    printf("%-24s%-12.2f\n","Total:",229.85);
    return 0;
}