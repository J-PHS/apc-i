#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int numero;
    int eh_um_numero = scanf("%i", &numero);

    if (eh_um_numero)
    {
        printf("Você digitou o número: %d\n", numero);
    }
    int numero_eh_divisivel_por_2 = numero % 2 == 0;
    if (numero_eh_divisivel_por_2)
    {
        printf("O numero %i é par!\n", numero);
    }
    else
    {
        printf("O numero %i é impar!\n", numero);
    }
    if (numero < 0)
    {
        printf("O numero %i é negativo!\n", numero);
    }
    else if (numero > 0)
    {
        printf("O numero %i é positivo\n", numero);
    }
    else
    {
        printf("O numero %i é zero!\n", numero);
    }
    return 0;
}