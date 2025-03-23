#include <stdio.h>

int votar(int idade);

int main()
{
    int idade=0;
    
    printf("Qual a sua idade ?");
    scanf("%d",&idade);
    
    votar(idade);


}

int votar(idade){
    if (idade >= 18 && idade <=70){
        printf("Faz o L");
    }
    else{
         printf("Insentao");
    }
    
}
