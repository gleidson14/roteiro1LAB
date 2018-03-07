#include <stdio.h>
#include <stdlib.h>


int main()
{
    int X,Y,Soma,Contador,Numero;

    printf("Digite um numero inteiro para calcular a sequencia Fibonacci:\n");
    scanf("%d",&Numero);
    X = 0;
    Y = 1;
    Contador = 0;

    while(Contador <= Numero){

        Soma = X+Y;
    if(Contador == 0){
    printf("%d,%d,",Y,Soma);
        X = Soma+Y;
        Y = Soma+X;
        Contador++;

    }else{
    printf("%d,%d,%d,",X,Y,Soma);
        X = Soma+Y;
        Y = Soma+X;
        Contador++;
    }
    }

    return 0;
}
