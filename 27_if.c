#include <stdio.h>
#include <math.h>

int main(){

    float salario, acrescimo;

    printf("digite seu salario\n");
    scanf("%f",&salario);

    if (salario>=0 && salario<300){
        acrescimo = 10*(salario/100);
        salario = salario + acrescimo;
        printf("seu salario final eh de %f, tendo um acrescimo de %f\n",salario,acrescimo);
    }

    if (salario>=300 && salario<600){
        acrescimo = 11*(salario/100);
        salario = salario + acrescimo;
        printf("seu salario final eh de %f, tendo um acrescimo de %f\n",salario,acrescimo);
    }

    if (salario>=600 && salario<900){
        acrescimo = 12*(salario/100);
        salario = salario + acrescimo;
        printf("seu salario final eh de %f, tendo um acrescimo de %f\n",salario,acrescimo);
    }

    if (salario>=900 && salario<1500){
        acrescimo = 6*(salario/100);
        salario = salario + acrescimo;
        printf("seu salario final eh de %f, tendo um acrescimo de %f\n",salario,acrescimo);
    }

    if (salario>=1500 && salario<2000){
        acrescimo = 3*(salario/100);
        salario = salario + acrescimo;
        printf("seu salario final eh de %f, tendo um acrescimo de %f\n",salario,acrescimo);
    }

    if (salario>=0){
        printf("seu salario final eh de %f, sem nenhum acrescimo\n",salario);
    }

    return 0;
}