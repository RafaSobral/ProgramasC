
#include <stdio.h>

float soma(float num1, float num2){
    
    return num1 + num2;
    
}

float subtracao(float num1, float num2){
    
    return num1 - num2;
    
}

float multiplicacao(float num1, float num2){
    
    return num1 * num2;
    
}

float divisao(float num1, float num2){
    
    return num1 / num2;
    
}

int main()
{
    float num1, num2, resultado;
    int menu;
    
    printf("Digite o primeiro numero: \n");
    scanf("%f",&num1);
    
    printf("Digite o segundo numero: \n");
    scanf("%f",&num2);
    
    printf("Qual operacao deseja realizar ? \n");
    printf("Insira o numero correspondente para entrar na operacao desejada \n");
    
    printf(" (1) Soma \n (2) Subtracao \n (3) Multiplicacao \n (4) Divisao \n");
    scanf("%d",&menu);
    
   
        
    switch(menu){
        
        case 1:
        
        resultado = soma(num1,num2);
        printf("%.2f",resultado);
        
        break;
        
        case 2:
        
        resultado = subtracao(num1,num2);
        printf("%.2f",resultado);
         
        break;
        
        case 3:
        
        resultado = multiplicacao(num1,num2);
        printf("%.2f",resultado);
        
        break;
       
        case 4:
        
        resultado = divisao(num1,num2);
         printf("%.2f",resultado);
        
        break;
        
        default:
        
        printf("Por favor, insira uma opcao valida!");
        
        break;
        
    }
    
    
}
