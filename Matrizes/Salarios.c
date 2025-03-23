#include <stdio.h>

int main(void) {
      
 int qtddesalarios=0,salariosabaixo=0,i,j;
float mediasalarial=0,salarios[2][3],soma=0;

  for(i=0; i < 2; i++){
    for(j=0; j < 3; j++){

      printf("Insira o salario:");
      scanf("%f",&salarios[i][j]);

      soma += salarios[i][j];

      if(salarios[i][j] >= 1250 && salarios[i][j] <= 1800){
        qtddesalarios++;
      }
    }
  }

  mediasalarial = soma / 6;

  for(i=0; i < 2; i++){
    for(j=0; j < 3; j++){
      if (salarios[i][j] < mediasalarial){
        salariosabaixo++;
      }
    }
  }

  printf("Salarios entre 1250 e 1800 %d \n", qtddesalarios);
  printf("Media Salarial: %.2f \n", mediasalarial);
  printf("Salarios abaixo da media: %d \n", salariosabaixo);
      

  

  
}
