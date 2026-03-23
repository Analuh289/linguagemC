#include<stdio.h>
#include<stdlib.h>

int main(){
setbuf(stdout, NULL);

//Alocar um espaço de memoria int
int *x;
x = (int*)malloc(sizeof(int));
*x = 37;
printf("\nConteudo da area alocada %d", *x);
printf("\nConteudo da area alocada %p", x);
return 0;
}
