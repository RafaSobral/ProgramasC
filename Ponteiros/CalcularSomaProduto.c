#include <stdio.h>

void calcularSomaProduto(float *array, float *soma, float *produto);

int main (void){

float array[5], soma = 0, produto = 1;

for(int i = 0; i < 5; i++){

 printf("Insira a posicao %d: ",i);
 scanf("%f",&array[i]);

}

calcularSomaProduto(array, &soma, &produto);

printf("%.2f\n", soma);
printf("%.2f", produto);
}

void calcularSomaProduto(float *array, float *soma, float *produto){

  for(int i = 0; i < 5 ; i++){
    *soma += *(array + i);
   
     *produto *= *(array + i);
    
  }
}


