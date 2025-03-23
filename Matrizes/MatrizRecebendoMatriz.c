#include <stdio.h>
int main() {
  int matriza[3][3],matrizb[3][3],matrizc[3][3];

  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
    printf("(a)Digite o valor da posicao %d %d ",i,j);
    scanf("%d",&matriza[i][j]);
   }
  }

  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
    printf("(b)Digite o valor da posicao %d %d ",i,j);
    scanf("%d",&matrizb[i][j]);
   }
  }

  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        matrizc[i][j] = (matriza[i][j] * 3) - matrizb[i][j];
        printf(" %d ",matrizc[i][j]);
   }
  }
  

 }
