/*
 ============================================================================
 Name        : Nivelamento01.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int main(void) {
	setbuf(stdout, NULL);
	char op;
	int termos;
	float soma;
	int n;

	do {
		printf("\nA - Serie A"
				"\nB - Serie B"
				"\nC - Serie C"
				"\nD - Finalizar"
				"\nDigite sua opção: ");
		//fflush(stdin);
		scanf(" %c", &op);
		op = toupper(op);

		if (op != 'A' && op != 'B' && op != 'C' && op != 'D') {
			printf("\nOpção inválida.");
			continue;
		} else if (op == 'D') {
			printf("\nPrograma finalizado.");
			break;
		} else {
			//if (op == 'A' || op == 'B' || op == 'C')
			//if (op >= 'A' && op <= 'C')
			//Solicitar quantidade de termos.

			do{
				printf("\nDigite a quantidade termos da série %c que quer somar: ", op);
				scanf("%d", &termos);

				if (termos <= 0) {
					printf("\nValor inválido.");
				}
			} while (termos <= 0);

//			printf("\nDigite a quantidade termos da série %c que quer somar: ", op);
//			scanf("%d", &termos);
//			while (termos <= 0) {
//				printf("\nValor inválido.");
//				printf("\nDigite a quantidade termos da série %c que quer somar: ", op);
//				scanf("%d", &termos);
//			}

			soma = 0;
			n = 1;
			switch (op) {
				case 'A':
					while (n <= termos){
						soma += (n + (n-1)) / pow(n, 2);
						n++;
					}
					break;
				case 'B':
					do {
						soma += pow(n, 3) / pow(10, n-1);
						n++;
					} while (n <= termos);
					break;
				case 'C':
					for (n = 1; n <= termos; n++) {
						soma += (float) n / (3 * (n*2));
						//soma += (float) 1/6;
					}
					break;
			}
			printf("\nA soma de %d termos da série %c é %.2f.", termos, op, soma);
		}

	} while(op != 'D');

	return 0;
}
