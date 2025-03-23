#include <stdio.h>
int main(){
   int matriz[4][4],soma=0;
   float media;

   for(int i=0;i<4;i++){
     for(int j=0;j<4;j++){
          printf("insira a posicao %d %d: ",i,j);
      scanf("%d",&matriz[i][j]);
   }
  }

  for(int i=0;i<4;i++){
     for(int j=0;j<4;j++){
      if(i+j > 3){
       soma += matriz[i][j];
     }
    }
   }
  

  media = soma / 6;

  printf("%f",media);

 }
