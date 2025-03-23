//#######################PROGAMA 5#################################

 #include <stdio.h>
 int main(void){

 int jogador1,jogador2;

printf("Jogador Um: (1)Pedra (2)papel ou (3)Tesoura\n");
scanf("%d",&jogador1);
printf("Jogador Dois: (1)Pedra (2)papel ou (3)Tesoura\n");
scanf("%d",&jogador2);
if(jogador1 == jogador2){
  printf("empate!");
}
if(jogador1 == 1 && jogador2 == 3 
  || jogador1 == 2 && jogador2 == 1 
  || jogador1 == 3 && jogador2 == 2){
  printf("jogador um é o vencedor");
}
else{
  printf("jogador dois é o vencedor");
}
}