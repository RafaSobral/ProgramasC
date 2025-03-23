#include <stdio.h>

int main(void) {
float temperaturas[12];
float maior, menor, media, soma=0;
int i;
for(i=0;i<12;i++){
printf("Digite a temperatura?");
scanf("%f",&temperaturas[i]);
}

menor = maior = temperaturas[0];

for(i=0;i<12;i++){

  if(temperaturas[i]>maior){
maior = temperaturas[i];
}

  if(temperaturas[i]<menor){
menor = temperaturas[i];
}

  soma+=temperaturas[i];
}

  
  media = soma/12;
printf("Maior temperatura: %.2f | Menor temperatura: %.2f | Media anual: %.2f", maior,menor,media);
  
}
