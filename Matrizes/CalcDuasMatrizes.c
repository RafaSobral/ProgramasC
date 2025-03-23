#include <stdio.h>

int main(void) {

int matrizA[3][2];
int matrizB[2][3]; 
int matrizC[3][3] = {0};


  for(int i=0;i<3;i++){
      for(int j=0;j<2;j++){
          printf("Digite um valor:");
          scanf("%d",&matrizA[i][j]);
    } 
    printf("\n:");
  }

  for(int i=0;i<2;i++){
      for(int j=0;j<3;j++){
          printf("Digite um valor:");
          scanf("%d",&matrizB[i][j]);
    } 
    printf("\n:");
  }

  for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
        for(int k=0;k<2;k++){
           matrizC[i][j] += matrizA[i][k] * matrizB[k][j];
      }
    } 
  }
  
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      printf("%d",matrizC[i][j]);
    }
    printf("\n:");
  }
  
   }
