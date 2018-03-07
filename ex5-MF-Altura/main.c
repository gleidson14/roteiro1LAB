#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,y,j,contadorM,contadorF;
    char s,c;
    double maior,menor,mediaM,mediaF,somaM,somaF;
    maior=menor=mediaM,mediaF=somaM,somaF=contadorF=contadorM = 0;

    double altura[10];
    char sexo[10];

   for(i=0; i<10; i++){

    printf("Digite M para Masculino e F para Feminino: \n");
    scanf("%c",&s);

    printf("Digite sua altura: \n");
    scanf("%lf",&altura[i]);



    switch(s){
        case 'M':
        case 'm':
            sexo[i] = 'M';
            contadorM++;
            somaM = somaM + altura[i];
            break;
        case 'F':
        case 'f':
            sexo[i] = 'F';
            contadorF++;
            somaF = somaF + altura[i];
            break;
    }
   scanf("%c",&c);
   }

    for(i=0; i<10; i++){

        if(maior < altura[i]){
        maior = altura[i];
        y= sexo[i];

        }
    }

            printf("o(a) mais alto(a) mede: %c - %.2lf \n",y,maior);

        menor = altura[0] + 1;
    for(j=0; j<10; j++){


        if(menor > altura[j]){
        menor = altura[j];
        y= sexo[j];

        }
    }

            printf("o(a) mais baixo(a) mede: %c - %.2lf ",y,menor);

        mediaM = (somaM / contadorM);
        mediaF = (somaF / contadorF);

            printf("\nA media masculina eh: %.2lf, total de participantes masculino: %d.", mediaM, contadorM);
            printf("\nA media feminina eh: %.2lf, total de participantes feminina: %d.", mediaF, contadorF);
    return 0;
}
