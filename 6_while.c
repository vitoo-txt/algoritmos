#include <stdio.h>
#include <math.h>

int main(){
    float joao=1.50, ze=1.10;
    int anos;

    while (ze<=joao){
          joao = joao + 0.02;
          ze = ze + 0.03;
          anos++;
    }

    printf("demorariam %i anos",anos);
    
    return 0;
}