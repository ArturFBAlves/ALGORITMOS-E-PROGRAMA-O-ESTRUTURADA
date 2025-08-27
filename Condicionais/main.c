#include <stdio.h>


int peso, altura;
char nome[255];
char classificacao[255];
double pesoKg, alturaM, imc;

int main() {


    printf("Digite o seu nome: ");
    fflush(stdin);
    fgets(nome, sizeof(nome), stdin);

    printf("Digite a sua altura (cm): ");
    fflush(stdin);
    scanf("%d", &altura);

    printf("Digite o seu peso (gramas): ");
    fflush(stdin);
    scanf("%d", &peso);

    pesoKg = peso / 1000.0;     
    alturaM = altura / 100.0;     
    imc = pesoKg / (alturaM * alturaM);

    if(imc < 18.5) {
        strcpy(classificacao,"Abaixo do peso" );
    } else if (18.5 < imc < 24.9) {
        strcpy(classificacao, "Peso normal");
    } else if (25 < imc < 29.9) {
        strcpy(classificacao, "Sobrepeso");
    } else if (30 < imc < 34.9) {
        strcpy(classificacao, "Obesidade grau 1");
    } else if (35 < imc < 39.9) {
        strcpy(classificacao, "Obesidade grau 2");
    } else if (40 < imc ) {
        strcpy(classificacao, "Obesidade grau 3");
    }

    printf("\nNome: %s", nome);
    printf("Altura: %.2f m\n", alturaM);
    printf("Peso: %.2f kg\n", pesoKg);
    printf("IMC: %.2f\n", imc);
    printf("Classificação IMC: %s", classificacao);
    return 0;
}
