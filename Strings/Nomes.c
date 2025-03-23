 #include <stdio.h>
 #include <string.h>

int main(void) {

   char nomes[4][20];
   int i;

  for (i=0;i <4; i++){

     printf("Insira o nome: ");
     scanf("%s",nomes[i]);

  }

   printf("Os nomes digitados são: \n");
   for (i=0;i <4; i++){
     printf("%s\n", nomes[i]);
   }

 }
