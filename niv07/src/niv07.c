/*
 ============================================================================
 Name        : niv07.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
	float distKm;
	float tempoMin;

	float velocidadeRelativa = 0.5;

	while(scanf("%f", &distKm)== 1){
		tempoMin = distKm / velocidadeRelativa;

		printf("%.0f minutos\n", tempoMin);
	}
	return 0;
}
