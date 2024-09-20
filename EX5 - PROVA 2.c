/******************************************************************************

5) Escreva um programa que peça ao usuario para inserir 10 numeros inteiros.
o programa deve contar quantos numeros são pares e quantos são impares, e exibir 
esses valores no final. 

*******************************************************************************/
#include <stdio.h>

int main() {
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
    int par = 0, impar = 0;

     printf("Insira 10 números inteiros:\n");
    
    printf("1º número: ");
    scanf("%d", &n1);
    printf("2º número: ");
    scanf("%d", &n2);
    printf("3º número: ");
    scanf("%d", &n3);
    printf("4º número: ");
    scanf("%d", &n4);
    printf("5º número: ");
    scanf("%d", &n5);
    printf("6º número: ");
    scanf("%d", &n6);
    printf("7º número: ");
    scanf("%d", &n7);
    printf("8º número: ");
    scanf("%d", &n8);
    printf("9º número: ");
    scanf("%d", &n9);
    printf("10º número: ");
    scanf("%d", &n10);

   
    if (n1 % 2 == 0) par++; 
    else impar++;
    if (n2 % 2 == 0) par++;
    else impar++;
    if (n3 % 2 == 0) par++; 
    else impar++;
    if (n4 % 2 == 0) par++;
    else impar++;
    if (n5 % 2 == 0) par++; 
    else impar++;
    if (n6 % 2 == 0) par++;
    else impar++;
    if (n7 % 2 == 0) par++; 
    else impar++;
    if (n8 % 2 == 0) par++; 
    else impar++;
    if (n9 % 2 == 0) par++; 
    else impar++;
    if (n10 % 2 ==0) par++; 
    else impar++;

        printf("numeros pares: %d\n", par);
    printf("numeros impar: %d\n", impar);

    return 0;
}
