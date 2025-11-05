#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int numeros[10];
    int achou = -1;
    printf("Digite numeros: \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%i", &numeros[i]);
    }
    int numero;
    printf("Digite o número a ser procurado: ");
    scanf("%i", &numero);

    

    for (int i = 0; i < 10; i++)
    {
        if (numeros[i] == numero)
        {
            achou = i;
        }
    }

    if (achou < 0)
    {
        printf("O número não foi encontrado.");
    }
    else
    {
        printf("O número foi encontrado na posição %i", ++achou);
    }
    return 0;
}
