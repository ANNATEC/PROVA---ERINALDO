#include <stdio.h>

/**************************
11. Escreva um programa que peça ao usuário para inserir as notas de 8 alunos e
classifique cada nota em conceitos: A (nota entre 9 e 10), B (nota entre 7 e 8.9), C
(nota entre 5 e 6.9), D (nota entre 3 e 4.9) ou F (nota abaixo de 3). (0.4 ponto)
***************************/


void verifica(float nota) {
    if (nota >= 9.0 && nota <= 10.0) {
        printf("A\n");
    } else if (nota >= 7.0 && nota < 9.0) {
        printf("B\n");
    } else if (nota >= 5.0 && nota < 7.0) {
        printf("C\n");
    } else if (nota >= 3.0 && nota < 5.0) {
        printf("D\n");
    } else if (nota < 3.0) {
        printf("F\n");
    } else {
        printf("Nota inválida\n");
    }
}

void entradaNotas() {
    float nota;
    
    for (int i = 0; i < 8; i++) {
        printf(" qual a nota do aluno %d: ", i + 1);
        scanf("%f", &nota);
        
        if (nota < 0.0 || nota > 10.0) {
            printf(" nota de 0 e 10.\n");
        } else {
            printf(" nota conseito : ");
            verifica(nota);
        }
    }
}

int main() {
    entradaNotas();  
    return 0;
}
