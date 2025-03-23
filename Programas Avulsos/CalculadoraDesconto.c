#include <stdio.h>
int main (void){

 float valorinicial,desconto,valorfinal;

  printf("Qual o valor incial do produto?");
  scanf("%f",&valorinicial); 

  if(valorinicial >= 100){
    desconto = valorinicial *0.1;
  }
  else{
    desconto = valorinical *0.05;
  }
  valorfinal = valorinical - desconto;
   printf("O valor do desconto é %.2f", desconto);
   printf("O valor do produto é%.2f", valorfinal);
  
}