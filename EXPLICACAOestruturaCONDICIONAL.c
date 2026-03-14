/*estrutura condicional em c......................

SIMPLES

todos as condicoes so serao executados se a condicao for verdadeira

if(condicao) {

comando 1
comando 2

}

COMPOSTA

todos as condicoes so serao executados se a condicao for verdadeira

if(condicao) {

comando 1
comando 2

}
else  {
todos as condicoes so serao executados se a condicao for falsa
comando 3
comando 4

}

ENCADEAMENTO

se  tiver mais de duas condicoes faz o encadeamento
todos as condicoes so serao executados se a condicao for verdadeira

if(condição 1) {

comando 1
comando 2

}
else  if (condição 2){
todos as condicoes so serao executados se a condicao for verdadeira
pode repetir quantas vezes quiser

comando 3
comando 4

}

else  {
e o ultimo vazio
todos as condicoes so serao executados se a condicao for falsa

comando 5
comando 6

}
*/
/*
#include <stdio.h>
int main (){

int hora;

printf("Digite uma hora do dia: ");
scanf("%d",&hora);


if( hora < 12 ) {
    printf("Bom dia ! \n");
}
else{
    printf("Boa tarde !\n");
}

return 0;
}
*/
#include <stdio.h>
int main (){
    /*
"Bom dia!" é exibido para qualquer hora entre 0 e 11 (
"Boa tarde!" é exibido para qualquer hora entre 12 e 17 .
"Boa noite!" é exibido para qualquer hora entre 18 e 23 .
*/
int hora;

printf("Digite uma hora do dia de 0 a 23: ");
scanf("%d",&hora);


if( hora >=0 hora < 12 ) {
    printf("Bom dia ! \n");
}
else if (  hora >= 12 && hora <18 ){
    printf("Boa tarde !\n");
}

else if ( hora >=18 &&  hora <=23 ){
    printf("Boa noite !\n");
}
else{
    printf("Informacao invalida!\n");
}

return 0;

}
