#include <stdio.h>
int main() {
  int matriza[5][2],matrizb[2][5];

  for(int i=0;i<5;i++){
    for(int j=0;j<2;j++){
    printf("(a)Digite o valor da posicao %d %d ",i,j);
    scanf("%d",&matriza[i][j]);
   }
  }

  for(int i=0;i<5;i++){
    for(int j=0;j<2;j++){
        matrizb[j][i] = matriza[i][j];
   }
  }
  printf("Matriz Original");
  printf("\n");

for(int i=0;i<5;i++){
    for(int j=0;j<2;j++){
       printf("%d",matriza[i][j]);
       
   }
   printf("\n");
  }

  printf("Matriz transposta");
  printf("\n");

  for(int i=0;i<2;i++){
    for(int j=0;j<5;j++){
       printf("%d",matrizb[i][j]);
       
   }
   printf("\n");
  }

 }
