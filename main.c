#include <stdio.h>
#include <stdlib.h>

// Redefinindo os tipos básicos float e int

typedef float nota;
typedef int inteiro;

struct tAluno
{
// Utilizando os tipos redefinidos dentro da struct
inteiro matricula;
nota prova1;
nota prova2;
};

// Redefinindo a struct para encurtar o comando na declaração

typedef struct tAluno tAluno;

int main(void)
{
// Declarando a variável do tipo tAluno: note que a redefinição
// agora não é mais necessário escrever struct tAluno
	tAluno aluno;

	nota media = 0;

	printf("\n\nInforme o numero da matrícula: ");
	scanf("%d", &aluno.matricula);

	printf("Informe a nota da primeira prova: ");
	scanf("%f", &aluno.prova1);

	printf("Informe a nota da segunda prova: ");
	scanf("%f", &aluno.prova2);

	media = (aluno.prova1 + aluno.prova2) / 2;

	printf("\nMatrícula.....: %d\n", aluno.matricula);
	printf("Media do aluno: %.2f\n\n", media);

	return(0);
}
