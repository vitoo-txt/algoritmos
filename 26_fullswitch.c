#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>



#include <stdio.h>
#include <math.h>

int main(){
    float imposto_r, salario, salario_min, n_salario, desconto;
    int n_dependentes;
    printf("digite seu salario:");
    scanf("%f",&salario);
    printf("digite o salario minimo:");
    scanf("%i",&salario_min);

    n_salario=salario/salario_min;

    if (n_salario<2){
        printf("isento");
    } 
    if (n_salario>=2 && n_salario<3){
        imposto_r=5*salario/100;
        salario=salario-imposto_r;
        printf("taxa de 5 por cento");
    } 
    if (n_salario>=3 && n_salario<5){
        imposto_r=10*salario/100;
        salario=salario-imposto_r;
        printf("taxa de 10 por cento");
    } 
    if (n_salario>=5 && n_salario<7){
        imposto_r=15*salario/100;
        salario=salario-imposto_r;
        printf("taxa de 15 por cento");
    } 
    if (n_salario>=7){
        imposto_r=20*salario/100;
        salario=salario-imposto_r;
        printf("taxa de 20 por cento");
    } 

    printf ("seu salario eh aproximadamente:%f, sem o desconto por n de dependentes\n",salario);

     printf("digite o numero de dependentes:");
    scanf("%i",&n_dependentes);

    switch ( n_dependentes )
    {
    case 1:
        desconto = 5*(salario_min/100);
        salario=salario + desconto;
        printf("seu salario final sera proximo de %f\n",salario);
        break;

    case 2:

        desconto = 10*(salario_min/100);
        salario=salario + desconto;
        printf("seu salario final sera proximo de %f\n",salario);
        break;
    
    case 3:
        desconto = 15*(salario_min/100);
        salario=salario + desconto;
        printf("seu salario final sera proximo de %f\n",salario);
        break;
    
    default:
        if ( n_dependentes>3 ){
            desconto = 15*(salario_min/100);
            salario=salario + desconto;
            printf("seu salario final sera proximo de %f\n",salario);
        } else
        {
            printf("valor invalido");
        }
        break;

    

    return 0;

}
