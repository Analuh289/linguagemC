/*
 ============================================================================
 Name        : ExercicioString.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	setbuf(stdout, NULL);
	//Declaração de strings
	char string1[30];
	char string2[30];

	//Exercício 01 - Solicitar 2 strings
	printf("\nDigite a primeira string: ");
	scanf(" %[^\n]", string1);
//	fflush(stdin);
//	gets(string1);

	printf("\nDigite a segunda string: ");
	scanf(" %[^\n]", string2);
//	fflush(stdin);
//	fgets(string2, 29, stdin);

	printf("\nString 01 - %s e String 02 - %s", string1, string2);

	//Exercício 02 - Tamanho das strings
	printf("\nTamanho da %s - %i", string1, strlen(string1));
	int tamanho = strlen(string2);
	printf("\nTamanho da %s - %i", string2, tamanho);

	//Exercício 03 - Cópia de strings
	strcpy(string1, string2);
	printf("\nString 01 - %s e String 02 - %s", string1, string2);

	strcpy(string2, "Amanda");
	printf("\nString 01 - %s e String 02 - %s", string1, string2);
	return 0;
}
