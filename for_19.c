#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
    float n1, n2, media, media_geral=0;
    int i, aprov=0, rec=0, reprov=0;

    for (i = 0; i < 6; i++){
        printf("Informe a nota 1:\n");
        scanf("%f",&n1);
        printf("Informe a nota 2:\n");
        scanf("%f",&n2);

        media= (n1+n2)/2;

        media_geral= media + media_geral;

        if (media<5){
            printf("REPROVADO!\n");
            reprov++;
        } else 

        if (media>=5 && media<7 ){
            printf("RECUPERACAO!\n");
            rec++;
        } else 

        if (media >= 7 && media <=10){
            printf("PASSOU!\n");
            aprov++;
        } else
        {
            printf("DIGITOU ALGUMA NOTA ERRONEAMENTE.\n");
        }
        
    }

    printf("A media geral eh %.1f, com %i aprovados, %i em recuperacao e %i reprovados.\n",(media_geral/6),aprov,rec,reprov);
    

    return 0;
}