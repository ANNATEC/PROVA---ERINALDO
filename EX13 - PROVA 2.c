//13. Escreva um programa que apresente um menu com as seguintes opções:
//1. Converter de Celsius para Fahrenheit.
//2. Converter de Fahrenheit para Celsius.
//3. Sair.
//O programa deve continuar exibindo o menu até que o usuário escolha a opção de sair. 
//(Fórmula	(1 °C × 9/5) + 32 = 33,8 °F) // (Fórmula	(1 °F − 32) × 5/9 = -17,22 °C)


#include <stdio.h>

void cParaF() {
    float c, f;
    printf("Celsius: ");
    scanf("%f", &c);
    f = (c * 9 / 5) + 32;
    printf("Fahrenheit: %.2f\n", f);
}

void fParaC() {
    float f, c;
    printf("Fahrenheit: ");
    scanf("%f", &f);
    c = (f - 32) * 5 / 9;
    printf("Celsius: %.2f\n", c);
}

int main() {
    int opt;

    do {
        printf("\nMenu:\n");
        printf("1. celsius  para fahrenheit:\n");
        printf("2. fahrenheit: para celsius \n");
        printf("3. Sair\n");
        
        scanf("%d", &opt);

        if (opt == 1) {
            cParaF();
        } else if (opt == 2) {
            fParaC();
        }
    } while (opt != 3);

    printf("sair\n");
    return 0;
}
