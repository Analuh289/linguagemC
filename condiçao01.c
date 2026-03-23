#include<stdio.h>
#include<stdlib.h>

int main(){
  int num;
  scanf("%d", &num);
  if(num % 2 == 0){
    printf("%d eh PAR.\n", num);
  }else{
  printf("%d eh IMPAR.\n", num);
  }
  return 0;
}
