#include <stdio.h>
int main(){
  int matriz[3][3],maior=0;

  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
     printf("insira a posicao %d %d: ",i,j);
     scanf("%d",&matriz[i][j]);
  }
 }

 for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
     if(i+j==2){
      if(matriz[i][j] > maior){
        maior = matriz[i][j];
    }
   }
  }
 }

 printf("%d",maior);

}
