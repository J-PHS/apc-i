#include <stdio.h>
#include <locale.h>

int main (){
setlocale(LC_ALL,"");
int numero;
printf("Digite numero: ");
scanf("%i",&numero);
float teste = 567.89 / numero;

//printf("%1.1f",teste);
int milhares = numero / 1000;
int centenas = ((numero - (milhares * 1000))) / 100;
int dezenas = ((numero - ((milhares * 1000) + (centenas * 100)))) / 10;
int unidades = (numero -((milhares * 1000) +(centenas * 100) + (dezenas * 10)));
printf("O numero %i é decomposto em %i milhar(es), %i centena(s), %i dezena(s) e %i unidade(s)",numero, milhares,centenas,dezenas,unidades);

    return 0;

}