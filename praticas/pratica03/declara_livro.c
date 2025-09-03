#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL,"");
    int ISBN = 0;
    int PAGINAS = 50;
    float PRECO_LIVRO = 19.50f;
    int ANO_PUB = 1997;

    printf("ISBN: %012i\n", ISBN);
    printf("Num. Paginas: %3i\n", PAGINAS);
    printf("Preço: R$ %6.2f\n", PRECO_LIVRO);
    printf("Publicado em: %04i", ANO_PUB);


    return 0;
}