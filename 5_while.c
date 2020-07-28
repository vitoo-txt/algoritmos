#include <stdio.h>
#include <math.h>

int main(){

    float n1, cont=1, e=0, operacao=1;

    printf("digite um numero\n");
    scanf("%f",&n1);

    while (n1>=cont){
        operacao = operacao * cont;
        e = e+(1/operacao);       
        printf("E eh igual a %f\n",e);
    
    cont++;

    }

    e++;

    printf("O valor final de E eh: %f",e);
    

    return 0;
}