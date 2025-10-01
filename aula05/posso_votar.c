#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL,"");
    int idade;

    printf("Informe sua idade: ");
    scanf("%i", &idade);

    if(idade < 16){
        printf("Você não pode votar, menó!\n");
    } else {
        if (idade < 18 || idade > 70){
            printf("Você pode votar!\n");
        }else {
            printf("Você TEM que votá! NIMAL!\n");
        }
    }

    return 0;
}