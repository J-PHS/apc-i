#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL,"");
    /*
    1)  Tipos de dados
    char = caracter
    int = inteiro
    float = flutuante até 6 casas decimais
    double = flutuante até 12 casas decimais
    void = sem tipo

    2) Variaveis e constantes
    */
    int idade = 16;
    char tecla = 's';
    float nota = 8.5f;
    double pi;
    const double pi2 = 3.14159148745144; //valor fixo

    printf("Os valores das variaveis:\n");
    printf("idade = %i\n", idade);
    printf("tecla = %c\n", tecla);
    printf("nota = %.2f\n", nota);
    printf("pi = %.12f\n", pi2);

    printf("\ninforme os novos valores:\n");
    scanf("%i", &idade);
    getchar(); // ler uma tecla limpa -> \n
    scanf("%c", &tecla);
    getchar();
    scanf("%f", &nota);

    printf("Os novos valores são:\n");
    printf("idade = %i\n", idade);
    printf("tecla = %c\n", tecla);
    printf("nota = %.2f\n", nota);
    //scanf("%f", &pi2); não funciona por ser uma constante
    return 0;
}