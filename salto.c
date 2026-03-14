#include<stdio.h>
int main()
{
 int  valor, i = 1, salto,maior = 0,menor=0;


printf("Qual valor vai contar :");
scanf("%d",&valor);
printf("\nQual a quantidade de salto: ");
scanf("%d",&salto);

while(i < valor){
printf(" \n%d ",i);
i = i + salto;
if(valor> maior){
    maior = valor;
}
if(valor < menor){
    menor = valor;
}
}
if(i != valor){
    printf("\n%d", valor);
}
printf("\nFim  !" );
printf("\nO maior valor digitado foi %d",maior);
printf("\nO menor valor digitado foi %d",menor);
return 0;
}
