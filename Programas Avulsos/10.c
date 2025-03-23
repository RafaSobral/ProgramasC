
#include <stdio.h>

void tabuada(float numero){
    
float resultado;
int i;
    
for(int i = 1;(7 * i) <= numero; i++){
    
    resultado = 7 * i;
    printf("7 x %d = %.2f \n",i , resultado);
    
 }
}

int main()
{
    
    float numero;
    
    printf("Digite um numero:");
    scanf("%f",&numero);
    
    tabuada(numero);
    
}
