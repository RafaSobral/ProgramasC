#include <stdio.h>
#include <string.h>

void VetorMaiorMenor(float *vetor, float *maior, float *menor, float *media);


int main (void){
    
    float vetor[4];
    float maior = 0;
    float menor = 0;
    float media = 0; 

    for(int i = 0; i < 4; i++){
        printf("Insira a posicao %d: ",i);
        scanf("%f", &vetor[i]);
    }

    VetorMaiorMenor(vetor, &maior, &menor, &media);
 
     printf("Maior :%.2f ",maior);
     printf("Menor: %.2f ",menor);
     printf("Média: %.2f: ",media);
    
    return 0;
}

void VetorMaiorMenor(float *vetor, float *maior, float *menor, float *media){
    
    int soma = 0;

    for(int i = 0; i < 4; i++){
        if(*(vetor + i) > *menor){
           *maior = *(vetor + i);

        }
        if(*(vetor + i) < *menor || i == 0){
           *menor = *(vetor + i);
        }

        soma += *(vetor + i);

    }

    *media = soma / 4;
}
