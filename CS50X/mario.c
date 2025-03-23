#include <stdio.h>

int main(void) {

  int altura2,linha2,coluna2,linha,coluna,altura; 
  altura2= 7;
  altura=1;


  do {
    printf("Qual a altura? ");
    scanf("%d",&altura2);
  } while ( altura2 < 1 || altura2 > 8);

   for(coluna2 = altura2; coluna2  >= 1 ; coluna2--)
    { 
      for(linha2=1; linha2 <= coluna2; linha2++)
        {
          printf(".");
        }

       for(coluna =1; coluna <= altura; coluna++)
        { 

          for(linha=altura2; linha >= coluna2; linha--)
            {
              printf("#");
            }
        }
      
       printf("\n");
    }
}