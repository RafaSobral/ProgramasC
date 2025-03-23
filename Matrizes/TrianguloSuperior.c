#include <stdio.h>
int main(){
 int matriz[3][3];

      

 for(int i=0; i<3; i++){
  for(int j=0; j<3; j++){
    printf("Digite a posicao %d %d",i,j);
     scanf("%d",&matriz[i][j]);
   }
 }

 for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
     if(i<=j){
        printf("%d",matriz[i][j]);
     }
     else{
        printf("*");
     }
   }
   printf("\n");
 }
}
