/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/******************************************************************************

12. Escreva um programa que solicite ao usuário 6 números inteiros. Para cada
número, verifique se ele é par ou ímpar. Se o número for par, verifique se é maior
que 10 ou não. Se for ímpar, verifique se é menor que 50 ou não.

*******************************************************************************/
#include <stdio.h>

int main() {
    int n1, n2, n3, n4, n5, n6;
    int par = 0, impar = 0;

    printf("Insira 6 números inteiros:\n");

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

    // Verificação dos números
    if (n1 % 2 == 0) {
        if (n1 > 10) par++;
    } else {
        if (n1 < 50) impar++;
    }

    if (n2 % 2 == 0) {
        if (n2 > 10) par++;
    } else {
        if (n2 < 50) impar++;
    }

    if (n3 % 2 == 0) {
        if (n3 > 10) par++;
    } else {
        if (n3 < 50) impar++;
    }

    if (n4 % 2 == 0) {
        if (n4 > 10) par++;
    } else {
        if (n4 < 50) impar++;
    }

    if (n5 % 2 == 0) {
        if (n5 > 10) par++;
    } else {
        if (n5 < 50) impar++;
    }

    if (n6 % 2 == 0) {
        if (n6 > 10) par++;
    } else {
        if (n6 < 50) impar++;
    }

    // Saída dos resultados
    printf("NUmeros PARES maiores que 10: %d\n", par);
    printf("Numeros IMPARES menores que 50: %d\n", impar);

    return 0;
}

