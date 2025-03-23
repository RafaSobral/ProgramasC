#include <stdio.h>
int main()
{
    int matriz [2][4], matrizb[2][4];
int escalar= 2;

 for(int i=0;i<2;i++){
  for(int j=0;j<4;j++){
   printf("insira a posicao %d %d",i,j);
   scanf("%d",&matriz[i][j]);
 }
}

 for(int i=0;i<2;i++){
  for(int j=0;j<4;j++){
   matrizb[i][j] = matriz[i][j] * 2;
   printf("%d",matrizb[i][j]);
 }
}


}
