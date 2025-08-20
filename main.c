#include <stdio.h>

char disciplina[100];
char turma[100];
char nome[100];
char matricula[100];
float peso;
float altura;

int main() {
    printf("Qual a sua disciplina: ");
    scanf(" %[^\n]", disciplina);  

    printf("Qual a sua turma: ");
    scanf(" %s", turma);

    printf("Qual o seu nome: ");
    scanf(" %[^\n]", nome);

    printf("Qual a sua matrícula: ");
    scanf(" %s", matricula);

    printf("Qual o seu peso: ");
    scanf(" %f", &peso);

    printf("Qual a sua altura: ");
    scanf(" %f", &altura);

    printf("\n--- Dados do Aluno ---\n");
    printf("Disciplina: %s\n", disciplina);
    printf("Turma: %s\n", turma);
    printf("Nome: %s\n", nome);
    printf("Matrícula: %s\n", matricula);
    printf("Altura: %.2f\n", altura);
    printf("Peso: %.2f", peso);

    return 0;
}
