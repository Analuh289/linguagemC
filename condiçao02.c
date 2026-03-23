#include<stdio.h>
#include<stdlib.h>

int main(){
 int num1, num2;
 printf("digite dois numeros: ");
 scanf("%d %d", &num1, &num2);

 if(num2 > num1){
    printf("%d eh maior.\n", num2);
 }else if(num1 > num2){
   printf("%d eh maior.\n", num1);
 }else {
   printf("sao iguais.\n", num1, num2);
 }
 return 0;
}
