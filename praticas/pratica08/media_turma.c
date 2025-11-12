#include <stdio.h>
#include <locale.h>

int main (){
setlocale(LC_ALL,"");
    float notas[10];
    float soma;
    float media;
    int qtde_acima_media = 0;
    printf("Digite as notas: ");
    for(int i=0;i < 10; i++){
        scanf("%f",&notas[i]);
        soma = soma + notas[i];
        media = soma / 10;
        }
        printf("\nMédia: %.2f\n\n",media);
    for(int i=0;i<10;i++){
        if (notas[i] > media)
        {
            qtde_acima_media = qtde_acima_media + 1 ;
        }
        
    }
    for(int i=0;i<10;i++){
        printf("Nota %i: %.2f\n", i+1, notas[i]);
    }
    printf("Quantidade acima da média: %i",qtde_acima_media);
    return 0;
}