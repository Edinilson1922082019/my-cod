#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int conta_vogais(char *ptr){
    int quant = 0;

    while(*ptr != 0){
        
        if(strchr("aAeEiIoOuU", *ptr)){//caso a frase SEJA ESCRITA MAIUSCULA ou minuscula.
        quant++;
        ptr++;
        }
        else{
            ptr++;
        }
    }
    return(quant);
}

int main(int argc, char const *argv[]){system("color 7c");

    int q;
    char frase[100];
    
    printf("Escreva a frase para ser contado as vogais: \n");
    gets(frase);
    //gets � o comando usado em C para ler entradas String, ou seja: palavras, frases ou conjuntos de numeros com os quais n�o se realizar� NENHUMA OPERA��O MATEMATICA.

    q = conta_vogais(frase);

    printf("\nQuantidade de vogais na frase sao '%s': \n -> %d\n", frase ,q);//%s puxara a frase escrita.
    
    return EXIT_SUCCESS;
}
