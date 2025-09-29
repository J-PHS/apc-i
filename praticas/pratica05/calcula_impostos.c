#include <stdio.h>
#include <locale.h>

int main (){
setlocale(LC_ALL,"");
const float ICMS = 0.17f;
const float CONFIS = 0.076f;
const float PIS_PASEP = 0.0165f;
float preco_inicial;
printf("Preço inicial: ");
scanf("%f",&preco_inicial);
float valor_icms = ICMS * preco_inicial;
float valor_confis = CONFIS * preco_inicial;
float valor_pis_pasep = PIS_PASEP * preco_inicial;
printf("Preço inicial.............: R$ %.2f\n", preco_inicial);
printf("Valor ICMS (17%)...........: R$ %.2f\n", valor_icms);
printf("Valor COFINS (7,6%)........: R$ %.2f\n", valor_confis);
printf("Valor PIS/PASEP (1,65%)....: R$ %.2f\n", valor_pis_pasep);
float preco_final = preco_inicial + valor_confis + valor_icms + valor_pis_pasep;
printf("Preço final...............: R$ %.2f", preco_final);
    return 0;
}