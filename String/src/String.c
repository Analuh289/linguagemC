/*
 ============================================================================
 Name        : String.c
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
	//Manipular Caractere
	char letra = 'A';
	printf("\nLetra %c - Decimal %d", letra, letra);

	//Manipular String
	char frase[30] = "Estrutura";
	printf("\n%s", frase);

	//Manipulação de cada índice.
	frase[0] = 'O';
	frase[1] = 'l';
	frase[2] = 'a';
	frase[3] = '\0';
	printf("\n%s", frase);

	printf("\nDigite uma string: ");
	//fflush(stdin); //Usado com gets e fgets
	//gets(frase);
	//fgets(frase, 29, stdin);
	//scanf(" %s", frase);
	scanf(" %[^\n]", frase);
	printf("\n%s - Frase digitada.", frase);
	printf("\nTamanho da frase digitada %i", strlen(frase));

	//strcpy
	char palavra[]= "Fumec - Teste";
	strcpy(frase, palavra);
	printf("\n%s - Frase copiada.", frase);

	strcpy(frase, "Teste");
	printf("\n%s - Frase copiada.", frase);

	//strncpy
	strncpy(frase, palavra, 10);
	printf("\n%s - Frase copiada.", frase);

	return 0;
}
