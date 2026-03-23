#include<stdio.h>
#include<stdlib.h>

int main(){
 float a, b, c;
 float media;

 scanf("%f", &a);
 scanf("%f", &b);
 scanf("%f", &c);

 media = (a * 2 + b * 3 + c * 5 )/ 10;

 printf("\nA media eh: %.1f", media);
return 0;
}
