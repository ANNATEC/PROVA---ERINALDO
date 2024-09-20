/******************************************************************************

Welcome to GDB Online.Escreva um programa em C que solicite ao usuário o valor inicial de um
investimento, a taxa de juros anual (em porcentagem) e o número de anos que o
dinheiro será investido. O programa deve calcular o valor final do investimento ao
final de cada ano, aplicando os juros compostos, e mostrar uma tabela com o valor
acumulado ano a ano.
*******************************************************************************/

#include <stdio.h>

int main (){

   float vlInicial,txJuros,total, rendimento;
   int anos;
   int index = 0;

   printf("Escreva o valor inicial de um investimento: ");
   scanf("%f",&vlInicial);

   printf("Escreva a taxa de juros anual: ");
   scanf("%f",&txJuros);

   printf("Escreva a quantidade de anos: ");
   scanf("%d",&anos);

   total = vlInicial;


   printf("ano | rendimento | valor acumulado\n");

   while(index <= anos){
        index = index + 1;

        rendimento = total * (txJuros/100);

        total = total + rendimento;

    printf("  %d |   %.2f  |   %.2f\n",index, rendimento, total);


   }
}