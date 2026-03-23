#include<stdio.h>
#include<stdlib.h>

int main(){
 float lado;
 float area;
 float perimetro;

 printf("\nDigite o lado: ", lado);
 scanf("%f", &lado);

 area = lado * lado;
 perimetro = 4 * lado;

 printf("\nA area do quadrado eh: %.1f", area);
 printf("\nO perimetro do quadrado eh: %.1f", perimetro);
return 0;
}
