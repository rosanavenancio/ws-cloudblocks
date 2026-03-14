#include<stdio.h>

int main(){

int  ano_atu,ano_nasc,idade=0;

printf("Qual ano nos estamos: ");
scanf("%d",&ano_atu);

printf("Qual ano voce nasceu: ");
scanf("%d",&ano_nasc);

idade = ano_atu - ano_nasc;

printf("Voce tem  %d  anos ",idade);



return 0;

}
