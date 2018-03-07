
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salario, inss;

    printf("Digite o valor do salario: \n");
    scanf("%lf",&salario);

    if(salario <= 420){
        inss = ((salario*8)/100);
        salario = salario - inss;
    printf("Seu salario liquido eh de: %.2lf. INSS: %.2lf.",salario,inss);
    }else if(salario > 1350){
        inss = ((salario*10)/100);
        salario = salario - inss;
    printf("Seu salario liquido eh de: %.2lf. INSS: %.2lf.",salario,inss);
    }else{
        inss = ((salario*9)/100);
        salario = salario - inss;
    printf("Seu salario liquido eh de: %.2lf. INSS: %.2lf.",salario,inss);
    }



    return 0;
}
