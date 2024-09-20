/****************************************************************************
// 14. Escreva um programa que apresente um menu com as seguintes opções:
// 1. Adição.
// 2. Subtração.
// 3. Multiplicação.
// 4. Divisão.
// 5. Sair.
// O programa deve solicitar dois números e realizar a operação escolhida. Deve
// continuar exibindo o menu até que o usuário escolha a opção de sair.
****************************************************************************/

#include <stdio.h>

int main() {
    int opcao;
    float v1, v2;

    do {
        printf("Selecione:\n 1 para Somar\n 2 para subtrair\n 3 para multiplicar\n 4 para dividir\n 5 para Sair\n");
        scanf("%d", &opcao);

        if (opcao == 5) {
            printf("Saindo...\n");
            break;
        }

        printf("Informe um Valor: ");
        scanf("%f", &v1);

        printf("Informe outro Valor: ");
        scanf("%f", &v2);

        if (opcao == 1) {
            printf("%f + %f = %f\n", v1, v2, (v1 + v2));
        } else if (opcao == 2) {
            printf("%f - %f = %f\n", v1, v2, (v1 - v2));
        } else if (opcao == 3) {
            printf("%f * %f = %f\n", v1, v2, (v1 * v2));
        } else if (opcao == 4) {
            printf("%f / %f = %f\n", v1, v2, (v1 / v2));
        }
    } while (opcao != 5);

    return 0;
}
