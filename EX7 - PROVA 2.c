// Crie um programa que peC'a ao usuC!rio para inserir as notas de 5 alunos. Para
// cada aluno, o programa deve calcular a mC)dia. Se a mC)dia for maior ou igual a 7.0,
// o aluno C) aprovado; caso contrC!rio, ele C) reprovado. Ao final, o programa deve exibir
// a mC)dia de cada aluno e se ele foi aprovado ou reprovado. (0.3 ponto)
// Entrada: 5 notas (uma por aluno).
// SaC-da: mC)dia de cada aluno e status de aprovaC'C#o.

#include <stdio.h>

int main()
{
	int nota;
	int indice = 1;

	while (indice <= 5)
	{
		printf("Insira a nota ");
		scanf("%d", &nota);
		int media = nota; // por ser uma nota sC3, a mC)dia do aluno C) igual a unica nota que foi recebida.
		printf("MC)dia do aluno eh %d\n", media);
		if (media >= 7)
		{
			printf("Aluno aprovado\n");
		}
		else
		{
			printf("Aluno reprovado\n");
		}

		indice = indice + 1;
	}
}