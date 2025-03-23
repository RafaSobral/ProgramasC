#include <stdio.h>
int main (void){

float velocidade, metros;

 printf("Qual a velocidade em km/h ?") ;
 scanf("%f", &velocidade);

metros = velocidade / 3.6; 

 printf("A velocidade em metros por segundo é: %.2f", metros);

  return 0;
}
