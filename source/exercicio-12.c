// Exercício 12

#include <stdio.h>

int main()
{
    char nome[31];
    float salario;
    for (int i = 0; i < 5; i++){
        if (i != 0){
            getchar();
        }
        printf("Informe seu nome: ");
        fgets(nome, 30, stdin);
        // scanf("%[^\n]", nome);
        printf("Infome o salário: ");
        scanf("%f", &salario);
        
        printf("IRRF: ");
        if (salario < 1300){
            printf("Isento\n\n");
        } else if (salario < 2300){
            printf("10%% do salário bruto\n\n");
        } else {
            printf("15%% do salário bruto\n\n");
        }
    }
    return 0;
}


