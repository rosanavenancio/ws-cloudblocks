#include<stdio.h>

int main()
{
float num1, num2;
printf("Digite um numero : ");
scanf("%f", &num1);
printf("Digite outro numero : ");
scanf("%f", &num2);
if(num1 > num2){

printf("\nO maior numero e : %f ",num1);

}
if(num2 > num1){

printf("\nO maior numero e : %f ",num2);

}
if(num1 == num2){

printf("\nOs numeros sao iguais : %f  %f  ",num1,num2);

}



return 0;
}
