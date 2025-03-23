

#include <stdio.h>

int calcularvida(int anos,int meses,int dias);

int main()
{
    int anos=0, meses=0, dias=0,total=0;
    
    printf("Quantos anos voce tem ?");
    scanf("%d",&anos);
    
    printf("Quantos meses voce tem ?");
    scanf("%d",&meses);
    
    printf("Quantos dias voce tem ?");
    scanf("%d",&dias);
    
    total = calcularvida(anos, meses, dias);
    
    printf("%d",total);
    
}

int calcularvida(int anos,int meses,int dias){
   
    anos = anos * 365;
    meses = meses * 30;
    
    return anos + meses + dias;
    
