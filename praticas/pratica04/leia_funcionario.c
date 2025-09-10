#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL,"");
    int codigo;
    char nome[31];
    float salario;

    printf("Digite o código de funcionário: ");
    scanf("%i", &codigo);
    getchar();
    printf("Digite o Nome do cidadão: ");
    scanf("%[^\n]s", &nome);
    getchar();
    printf("Digite o Salário: ");
    scanf("%f", &salario);
    getchar();
    printf("Código\tNome\t\t\t\t\tSalário\n");
    printf("%-4i\t%-31s\t\t%.2f",codigo,nome,salario);
    return 0;
}