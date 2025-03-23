#include <stdio.h>

int main(void) {


   float pesos[4],pesomaisnova=0;
   int i,idades[4],mais20menos70=0,maisvelha=0,menorpeso=0,maisnova=0;

   for(i=0; i < 4; i++){
     printf("Qual o seu peso ?");
     scanf("%f", &pesos[i]);
     printf("Qual a sua idade ?");
     scanf("%d", &idades[i]);

     if(idades[i] > 20 && pesos[i] < 70 ){
       mais20menos70++;
     }

     if (idades[i] > maisvelha){
       maisvelha = idades[i];
     }

     if(pesos[i] < menorpeso || i==0){
       menorpeso = pesos[i];
     }

     if(idades[i] < maisnova || i==0){
       maisnova = idades[i];
       pesomaisnova = pesos[i];
     }
 
   }

   printf("maior que 20 menos que 70: %d", mais20menos70);
   printf("pessoa mais velha: %d", maisvelha);
   printf("menor peso: %d", menorpeso );
   printf("peso mais nova: %f", pesomaisnova);
    

  
}
