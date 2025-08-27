#include <stdio.h>

int main() {
    int peso, altura;
    char nome[255];

    printf("Digite o seu nome: ");
    fflush(stdin);
    fgets(nome, sizeof(nome), stdin);

    printf("Digite a sua altura (cm): ");
    fflush(stdin);
    scanf("%d", &altura);

    printf("Digite o seu peso (gramas): ");
    fflush(stdin);
    scanf("%d", &peso);

    double pesoKg = peso / 1000.0;     
    double alturaM = altura / 100.0;     
    double imc = pesoKg / (alturaM * alturaM);

    printf("\nNome: %s", nome);
    printf("Altura: %.2f m\n", alturaM);
    printf("Peso: %.2f kg\n", pesoKg);
    printf("IMC: %.2f\n", imc);

    return 0;
}
