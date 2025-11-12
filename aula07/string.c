#include <stdio.h>
#include <locale.h>
#include <string.h> // Manipulação de string

int main (){
    setlocale(LC_ALL,"");
    char nome[30]; //inicializar uma string

    nome[0] = 'J';
    nome[1] = 'o';
    nome[2] = 'a';
    nome[3] = 'o';
    nome[4] = '\0';

    for (int i = 0; i < 30; i++){
        nome[i] = 'A';
    }
    printf("Seu nome: %s\n", nome);    

    nome[0] = 'J';
    nome[1] = 'o';
    nome[2] = 'a';
    nome[3] = 'o';
    nome[4] = '\0';

    char nome2[30] = "Jose";
    printf("Seu nome: %s\n", nome2);    
    printf("Seu nome: %s\n", nome);    

    // nome = "Reginaldo";  << não funciona

    printf("Entre com o seu nome completo: ");
    fgets(nome, sizeof(nome), stdin);
    printf("Seu nome é %s", nome);

//=======================   Funções do string.h   ===========================

    //preenche um string com um caracter
    memset(nome, 'A', sizeof(nome));
    printf("Teste: %s\n",nome);
    nome[10] = '\0'; //limpar lixo do string
    memset(nome, 'B', 10);
    printf("Teste: %s\n",nome);

    //Copia uma string
    strcpy(nome, "Reginaldo");
    printf("Teste: %s\n",nome);

    //concatena duas strings
    strcat(nome, " Jose");
    printf("Seu nome: %s\n", nome);

    //tamanho da string
    printf("Seu nome tem %i caracteres\n", strlen(nome));

    // compara string
    printf("As strings '%s' e '%s' são iguais? %i\n", nome, "Jose", strcmp(nome, "Jose"));
    printf("As strings '%s' e '%s' são iguais? %i\n","Jose", nome, strcmp("Jose", nome));
    printf("As strings '%s' e '%s' são iguais? %i\n","Reginaldo Jose", nome, strcmp("Reginaldo Jose", nome));

    //Procurar um caracter

     printf("A string '%s' possui a letra 'u'? %i\n",nome, strchr(nome, 'u'));
     printf("A string '%s' possui a letra 'o'? %i\n",nome, strchr(nome, 'o'));
    
    //Procurar uma string em uma string

     printf("A string '%s' possui a letra 'ose'? %s\n", nome, strstr(nome, "ose"));
     printf("A string '%s' possui a letra 'Silva'? %s\n", nome, strstr(nome, "Silva"));


    return 0;

}