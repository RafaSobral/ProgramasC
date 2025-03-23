#include <stdio.h>
#include <string.h>

int main(void) {

  float alturas[4], media = 0, soma = 0,maior= 0;
  char nomes[4][30],maisalta[30];
  int i = 0,tam = 0;

  for (i = 0; i < 4; i++) { 
    printf("Insira o nome:");
    scanf("%s", nomes[i]);

    printf("Insira a altura:");
    scanf("%f", &alturas[i]);

    soma += alturas[i];

    if(alturas[i] > maior){
      maior = alturas[i];
      strcpy(maisalta,nomes[i]);
    }
  }
  media = soma / 4;

  printf("A media das alturas: %.2f\n",media);
  printf("O nome da pessoa mais alta: %s\n", maisalta);
  printf("Ola Sr %s , tudo bem?\n",maisalta);
}
