#include<stdio.h>
#include<stdlib.h>

int main(){
 setbuf(stdout, NULL);
 // aritmedica de ponteiros
 float *pVetor;

 pvetor = vetor;

 for(int i = 1; i <= 3; i++){
    printf("\nVetor[%i] = %.2f - Endereço %p", i - 1 , *pVetor, pVetor);
    pVetor++;
 }
 pVetor -= 3;
 printf("\nFim %p", pVetor);

 printf("\nUltilizando a aritimedica de ponteiros - Inicio %p", pVetor);
 for(int i = 1; i <= 3; i++){
    printf("\nVetor[%i] = %.2f - Endereço %p", i - 1 , *pVetor[i], pVetor[i]);
    pVetor++;
 }

 //for (int i = 0; i < 3; x++){
   // printf("\nVetor[%i] = %.2f - Endereço %p", i , vetor[i], &vetor(i)
 //}
 return 0;
}
