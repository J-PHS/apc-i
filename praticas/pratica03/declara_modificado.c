#include <stdio.h>
#include <locale.h>

int main () {
setlocale(LC_ALL,"");
    long int populacao_mundial = 780000000L;
    const short int HORA_EM_SEGUNDOS = 3600;
    long double precisao_extrema = 3.14159265358979323846L;

    printf("Precisão Extrema: %.20Lf\n", precisao_extrema);
    printf("1 hora corresponde a %i segundos.\n", HORA_EM_SEGUNDOS);
    printf("Populacao Mundial: %li\n", populacao_mundial);

    return 0;
}