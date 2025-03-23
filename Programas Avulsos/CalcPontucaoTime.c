//#####################PROGAMA 4#######################
 #include <stdio.h>
 int main (void){

 float vitorias,empates,derrotas,pontosganhos,pontosperdidos;

  printf("Qual a quantidade de vitórias ?");
  scanf("%f",&vitorias);
  printf("Qual a quantidade de empates ?");
  scanf("%f",&empates);
  printf("Qual a quantidade de derrotas?");
  scanf("%f",&derrotas);

pontosganhos = (vitorias*3) + empates;
pontosperdidos = derrotas*3;

printf("Pontos ganhos: %.2f\n",pontosganhos);
printf("Pontos perdidos: %.2f",pontosperdidos);
}