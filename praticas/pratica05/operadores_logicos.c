#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL,"");
    int p;
    int q;
    printf("Valor p: ");
    scanf("%i", &p);
    printf("Valor q: ");
    scanf("%i", &q);
    printf("%i && %i = %i\n", p,q,p && q);
    printf("%i !! %i = %i\n", p, q, p || q);
    printf("!%i = %i\n", p, !p);
    printf("!%i = %i\n", q, !q);

    return 0;
}