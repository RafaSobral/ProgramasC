#include <stdio.h>

int main(void) {
  
  int centavos, moedas, vintecinco, dez, cinco, um;
  
  do {
    printf("Digite o valor do troco: ");
    scanf("%d", &centavos);
  } while (centavos < 0);


  vintecinco = centavos / 25;
  centavos = centavos - vintecinco * 25;


  dez = centavos / 10;
  centavos = centavos - dez * 10;


  cinco = centavos / 5;
  centavos = centavos - cinco * 5;


  um = centavos / 1;
  centavos = centavos - um * 1;

  
  moedas = vintecinco + dez + cinco + um;


  printf("%i\n", moedas);
}