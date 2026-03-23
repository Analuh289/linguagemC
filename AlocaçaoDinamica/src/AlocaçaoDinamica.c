/*
 ============================================================================
 Name        : AlocaçaoDinamica.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

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

// alocarar 3 espaços da memoria char
// char *c = (char*) malloc (3);
char *pontC = (char* ) malloc (sizeof(char) * 3);
for(int i = 1; i<= 3; i++){
	// com aritimedica de ponteiros
	printf("\nDigite o %i conteudo: ", i);
	scanf(" %c ", pontC);
	pontC++;
	// se fosse indexaçao
	//scanf("%c", &pontC[i-1]);
	//printf("\n%i conteudo: %c", i+1, *pontC);


	// com aritimedica de ponteiros
	//printf("\n%i conteudo: %c ", i+1, pontC[i]);
	//printf("\n%i conteudo: %c", i+1, *pontC);
}
pontC -= 3;

for(int i = 0; i < 3; i++){
	printf("\n%i conteudo: %c", i+1, pontC[i]);
}
return 0;
}
