#include <stdio.h>
#include <locale.h>

int main (){
setlocale(LC_ALL,"");
int numero;
int maior;
int menor;
printf("Digite numero: ");
scanf("%i", &numero);
maior = numero;
menor = numero;

while (numero != 0){
    if (numero > maior){
        maior = numero;
    }
    if (numero < menor){
        menor = numero;
    }
    printf("Digite numero: ");
    scanf("%i", &numero);
}
printf("Valor maior: %i\nValor menor: %i\n", maior, menor);
    return 0;
}