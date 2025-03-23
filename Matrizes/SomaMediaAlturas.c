#include <stdio.h>

int main(void) {
 float media,soma=0,alturas[5];
 int i,acima175=0;

 for (i=0;i < 5;i++){
   printf("Qual a altura %d", i);
   scanf("%f", &alturas[i]);
   soma += alturas[i];
 }

 for (i=0;i < 5;i++){
   if(alturas[i] > 1.75){
    acima175++;
  }
 }
  
 media = soma / 5;

 printf("A soma das altura e %f", soma);
 printf("A media das alturas e %f", media);
 printf("A qtd de pessoas acima de 1.75 e %d", acima175); 


}
