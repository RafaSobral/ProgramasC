#include <stdio.h>

int main(void) {

 int i=0,j=0,matriza[3][2],matrizb[3][2];
 int escalar =2;  

  for(i=0;i<3;i++){
     for(j=0;j<2;j++){
       printf("Insira um valor:");
       scanf("%d",&matriza[i][j]);
  
     }
     printf("\n");
   }

   for(i=0;i<3;i++){
     for(j=0;j<2;j++){
      matrizb[i][j] = matriza[i][j] * 2;
        printf("%d",matrizb[i][j]);
