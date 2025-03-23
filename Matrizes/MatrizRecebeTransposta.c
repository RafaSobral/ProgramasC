#include <stdio.h>
int main (){

int matrizA[4][2],matrizB[2][4],matrizC[4][4];

printf("Preencha a Matriz A:");
printf("\n");

for(int i=0;i<4;i++){
   for(int j=0;j<2;j++){
    printf("Preencha a posicao %d %d:",i,j);
    scanf("%d",&matrizA[i][j]);
 } 
}

printf("Preencha a Matriz B:");
printf("\n");

for(int i=0;i<2;i++){
   for(int j=0;j<4;j++){
    printf("Preencha a posicao %d %d:",i,j);
    scanf("%d",&matrizB[i][j]);
 } 
}

//Calculo da matrizC
for(int i=0;i<4;i++){
   for(int j=0;j<4;j++){
    matrizC[i][j] = 0;
    for(int k=0;k<2;k++){
    matrizC[i][j] += (matrizA[i][k] * matrizB[k][j]);
  }
 } 
}



printf("Matriz A:");
printf("\n");

for(int i=0;i<4;i++){
   for(int j=0;j<2;j++){
    printf("%d", matrizA[i][j]);
 } 
 printf("\n");
}

printf("Matriz B:");
printf("\n");

for(int i=0;i<2;i++){
   for(int j=0;j<4;j++){
    printf("%d", matrizB[i][j]);
 } 
 printf("\n");
}

printf("Matriz C:");
printf("\n");

for(int i=0;i<4;i++){
   for(int j=0;j<4;j++){
    printf("%d", matrizC[i][j]);
 } 
 printf("\n");
}

}
