#include<stdio.h>
#include<stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	/*
	//Manipulação de vetor
	int vetor[] = {8, 45, 93};
	vetor[2] = 1254; //Atribuição
	for (int i = 0; i < 3; i++){
		printf("\nDigite o valor: ");
		scanf("%i", &vetor[i]);
		printf("\n%d - %p", vetor[i], &vetor[i]);
	}
	printf("\nOnde começa o meu vetor? %p", vetor);
	 */

	//Manipulação de matriz
	char matriz[][3] = {"RTO", "95%"};
	matriz[0][0] = '*';
	for (int l = 0; l < 2; l++) {
		printf("\n%iª linha:", l+1);
		for (int c = 0; c < 3; c++) {
			printf("\n[%i][%i]: ", l, c);
			scanf(" %c", &matriz[l][c]);
			printf("\n%c - %p", matriz[l][c], &matriz[l][c]);
		}
	}
	printf("\nOnde começa o meu matriz? %p", matriz);

	return 0;
}


