#include <stdio.h> 
int main (void) {

float bruto,desconto,liquido;

printf("Qual o salario bruto?");
scanf("%f", &bruto);

desconto = bruto * 0.1; 

liquido = bruto - desconto; 

printf("O salario liquido é: %.2f", liquido);
printf("O desconto é de: %.2f", desconto);

return 0;
  
}
