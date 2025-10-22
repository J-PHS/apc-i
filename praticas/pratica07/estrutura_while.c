#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL,"");
    int nota;
    printf("Digite nota: ");
    scanf("%i", &nota);

    while (nota < 1 || nota > 10) {
        printf("Nota inválida. Tente Novamente!\n");
        scanf("%i", &nota);

    }
    do{ // Imprime primeiro, verifica nota depois
        printf("Nota inválida. Tente Novamente!\n");
    } while (nota < 1 || nota > 10);

    return 0;
}