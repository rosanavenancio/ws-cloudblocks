#include<stdio.h>
int main()
{
float soma, subtracao, multiplicacao, divisao;
int n1,n2, opcao;

printf("\nDigite um numero : ");
scanf("%d", &n1);
printf("\nDigite outro numero : ");
scanf("%d", &n2);

printf("\nQUAL OPERACAO DESEJA FAZER ! ");
printf("\n---------------------------------");
printf("\nSOMA 1  ");
printf("\nSUBTRACAO 2  ");
printf("\nMULTIPLICCAO 3  ");
printf("\nDIVISAO 4  ");
printf("\n----------------------------------");
printf("\nEscolha uma opcao  : ");
scanf("%d", &opcao);


switch(opcao ){

case 1:
soma = n1 +n2;
printf("\nA soma e %2.f  ", soma);
break;

case 2:
subtracao = n1 -n2;
printf("\nA subtracao e %2.f ", subtracao);
break;

case 3:
multiplicacao = n1 *n2;
printf("\nA multiplicacao e %2.f  ", multiplicacao);
break;

case 4:
    if(  n2 == 0){
    printf("\nO 0 nao e divisivel  ");
}
divisao = n1 /n2;

printf("\nA Divisao e %2.f  ", divisao);
break;



default:
printf("\nOpcao invalida . ");

break;

}


return 0;

}
