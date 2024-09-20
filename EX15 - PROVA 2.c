#include <stdio.h>

/**************************
15. Escreva um programa que apresente um menu com as seguintes opções: 
1. Gerar a tabuada de um número.
2. Sair.
O programa deve solicitar ao usuário o número desejado e exibir a tabuada (de 1 a 10). 
O menu deve continuar sendo exibido até que o usuário escolha a opção de sair. 
***************************/

int main() {
    int opcao;
    int numero;

    do {
        printf("1. fazer uma tabuada\n");
        printf("2. sair\n");
        printf("escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("informe um numero: ");
            scanf("%d", &numero);
            printf("tabuada de %d:\n", numero);
            for (int i = 1; i <= 10; i++) {
                printf("%d x %d = %d\n", numero, i, numero * i);
            }
        } else if (opcao != 2) {
            printf("opcao invalida\n");
        }
    } while (opcao != 2);

    printf("sair\n");
    return 0;
}
