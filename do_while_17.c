#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){

    int  horas, hora_extra, cont=0;
    float salario_li, salario_b, add, desconto, mani;

    do{
        
        horas= 0;
        hora_extra= 0;
        salario_li= 0;
        salario_b= 0;
        add= 0;
        desconto=0;
        mani= 0;

        printf("Informe as horas trabalhadas no mes:\n");
        scanf("%i",&horas);
        printf("Informe o salario bruto:\n");
        scanf("%f",&salario_b);


        if (salario_b<800 ){ //desconto
            salario_li = salario_b;
        } else 
        if (salario_b>=800 && salario_b<=1600){ //desconto
            desconto = 8*(salario_b/100);
            salario_li = (salario_b - desconto) - (5*(salario_b/100));
        } else 
        if (salario_b>1600){
            desconto = 15*(salario_b/100);
            salario_li = (salario_b - desconto) - (7*(salario_b/100));
        }

        if(horas>160){ //add
            mani= salario_b/160;
            hora_extra= 1.5*mani;
            add=hora_extra*(horas-160);
            salario_li = add+ salario_li;
        }

        printf("Seu salario liquido eh de R$%.2f.\n",salario_li);

        cont++;

    } while (salario_b > 0);

    printf("Foram mostrados %i salarios\n",(cont-1));
    
    return 0;
}