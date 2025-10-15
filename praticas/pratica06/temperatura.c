#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL,"");
    float temperatura;
    printf("Digite temperatura: ");
    scanf("%f", &temperatura);
    if (temperatura > 40.0f){
        printf("Ta quentinho heim moço?");
    }else if (temperatura > 30.0f){
        printf("Mormaço");
    }else if (temperatura > 20.0f){
        printf("Nice");
    }else {
        printf("Frio");
    }
    return 0;
}