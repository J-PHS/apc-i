#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL,"");
    int ISBN = 0;
    int PAGINAS = 0;
    float PRECO_LIVRO = 0;
    int ANO_PUB = 0;

    printf("ISBN: %012i\n", ISBN);
    printf("Num. Paginas: %03i\n", PAGINAS);
    printf("Preço: R$ %06.2f\n");
    printf("Publicado em: %04i", ANO_PUB);


    return 0;
}