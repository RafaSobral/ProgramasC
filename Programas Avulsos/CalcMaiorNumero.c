
//####################PROGAMA 3######################

#include <stdio.h>
int main (void){

float num1,num2,num3,maior;

  printf("Digite o primeiro numero:");
  scanf("%f",&num1);
  printf("Digite o segundo numero:");
  scanf("%f",&num2);
  printf("Digite o terceiro numero:");
  scanf("%f",&num3);

  if (num1 == num2 && num1 == num3 && num2 == num3 ){
    printf("Os valores digitados são iguais");
    }
  if (num1 > num2 && num3){
    maior = num1;
    printf("O maior numero é %.2f",maior);
  }
  if (num2 >  num3 && num1){
    maior = num2;
    printf("O maior numero é %.2f",maior);
  }
  if(num3 > num1 && num2){
    maior = num3;
    printf("O maior numero é %.2f",maior);
  }
 }