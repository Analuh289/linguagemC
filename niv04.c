#include<stdio.h>
#include<stdlib.h>

int main(){
 float a, b;
 float divisao;

 printf("digite um numero: ", a);
 scanf("%f", &a);

 printf("digite um numero: ", b);
 scanf("%f", &b);

 divisao = a / b;

 printf("\nA divisao eh: %.1f", divisao);

return 0;
}
