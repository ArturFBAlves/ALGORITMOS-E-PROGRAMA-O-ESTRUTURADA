#include <stdio.h>

char disciplina[100];
char turma[100];
char nome[100];
char matricula[100];

int main() {
    printf("Qual a sua disciplina: ");
    scanf(" %[^\n]", disciplina);  

    printf("Qual a sua turma: ");
    scanf(" %s", turma);

    printf("Qual o seu nome: ");
    scanf(" %[^\n]", nome);

    printf("Qual a sua matrícula: ");
    scanf(" %s", matricula);

    printf("\n--- Dados do Aluno ---\n");
    printf("Disciplina: %s\n", disciplina);
    printf("Turma: %s\n", turma);
    printf("Nome: %s\n", nome);
    printf("Matrícula: %s\n", matricula);

    return 0;
}
