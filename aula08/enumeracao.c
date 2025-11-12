#include <stdio.h>
#include <locale.h>
#include <stdbool.h> //enum bool {false,true};
int main (){
    setlocale(LC_ALL,"");
//    const int false = 0;
//    const int true = 1;
    bool ocupado = true;
    
    
    const int domingo = 1;
    const int segunda = 2;
    const int terca = 3;
    const int quarta = 4;
    const int quinta = 5;
    const int sexta = 6;
    const int sabado = 7;

    enum boolean_e {falso, verdadeiro}; //atribui os valores automaticamente, 0,1,2,..
    enum dias_e{
        dom =1 ,
        seg,
        ter,
        qua,
        qui,
        sex,
        sab
    };
    int dia_da_semana;
    printf("Informe o dia entre 1 e 7: ");
    scanf("%i", &dia_da_semana);

    switch(dia_da_semana){
        case dom: printf("Domingo\n");break;
        case seg: printf("Segunda\n");break;
        case ter: printf("Terça\n");break;
        case qua: printf("Quarta\n");break;
        case qui: printf("Quinta\n");break;
        case sex: printf("Sexta\n");break;
        case sab: printf("Sabado\n");break;
        default: printf("Dia inválido\n");
    }
    return 0;
}