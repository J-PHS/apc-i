#include <stdio.h>
#include <locale.h>


int main () {
    setlocale(LC_ALL,"");
    for(int i=0; i<10; i++){
        printf("%i", i);
    }
    printf("\n");
    for(int i=9; i>=0; i--){
        printf("%i", i);
    }
    for(;;){
        printf("Ao infinito e além!\n");
    }
    return 0;
}