//bibliotecas//

#include <stdio.h>
#include <string.h>

//assinatura do programa//

int main() {
    
//variaveis// 

 int idade;
 double salario, altura;
 char genero;
 char nome[50];
 
//atribuições//

 idade = 20;
 salario = 5800.5;
 altura = 1.63;
 genero = 'F';
 
 //impressões das variaveis na tela//
 
 strcpy(nome, "Maria Silva");
 printf("IDADE = %d\n", idade);
 printf("SALARIO = %.2lf\n", salario);
 printf("ALTURA = %.2lf\n", altura);
 printf("GENERO = %c\n", genero);
 printf("NOME = %s\n", nome);
 
 //final do programa//
 
 return 0;
 
}

