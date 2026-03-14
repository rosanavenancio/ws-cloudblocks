#include<stdio.h>
int main()
{

int i , par = 0;
int vetA[10];

for(i = 1; i < 10; i++){

printf("Digite o %d o. valor : ",i);
scanf("%d", &vetA[i]);

if(vetA[i] %2 == 0){

 par = par +1;

}
}
if(vetA[i] %2 == 0){

 printf("\nO numero de pares e { %d} ", vetA[i] );


}


printf("\nO numero de pares e  { %d} ", par);


return 0;

}
