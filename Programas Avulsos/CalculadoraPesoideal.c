// ###################PROGAMA 2###################

#include <stdio.h>
int main(void) {

  float sexo, altura, pesoideal;

  printf("Digite 1 para Masculino \nDigite 2 para Feminino\n");
  printf("Qual seu sexo?\n");
  scanf("%f", &sexo);
  printf("Qual a sua altura?\n");
  scanf("%f", &altura);
  if (sexo == 1) {
    pesoideal = (72.7 * altura) - 58;
  }
  if (sexo == 2) {
    pesoideal = (62.1 * altura) - 44.7;
  }
  printf("O seu peso ideal é:%.2f", pesoideal);
}