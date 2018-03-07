#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Palindromo(char string1[], int a, char string2[],int b){
   int c;
    for(c=0; c<a; c++){
    if(string1[c] != string2[c]){
        printf("Nao eh um palindromo!\n");
        return 0;
    }
    }
    printf("Eh palindromo!\n");
    return 0;
}

int main()
{
    int tam,i,a;
    char Nome[20];

    printf("Digite uma nome!\n");
    gets(Nome);

    tam = strlen(Nome);
    char Contrario[tam+1];
    a = tam;

    for(i=0; i<tam; i++){
        a--;
        Contrario[i] = Nome[a];
    }
    printf("%s \n%s\n ",Nome,Contrario);

    Palindromo(Nome,tam,Contrario,tam);

    return 0;
}
