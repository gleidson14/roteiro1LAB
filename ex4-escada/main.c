#include <stdio.h>
#include <stdlib.h>

void Escada(char string1[], int j){
    int i;
    char SegNome[j+1];
    for(i=0; i < j; ++i){
        SegNome[i] = string1[i];
        SegNome[i+1] = '\0';
        printf("%s\n",SegNome);
    }
}

int main()
{
    char nome[20];
    int a;

    printf("Digite seu nome.\n");
    gets(nome);

    for(a=0; nome[a] != '\0'; ++a){
        }

    Escada(nome, a);

    return 0;
}
