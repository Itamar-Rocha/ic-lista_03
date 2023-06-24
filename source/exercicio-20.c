// Exercício 20

#include <stdio.h>

int main()
{
    int contador = 0, quantidadeMais200 = 0, quantidadeRendaMaior = 0;
    float rendaPessoal, rendaFamiliar, gastoAlimentacao, gastoOutros;
    while (1){
        printf("Informe a renda pessoal(zero para sair): ");
        scanf("%f", &rendaPessoal);
        
        if(rendaPessoal == 0){
            break;
        }
        printf("Informe a renda familiar: ");
        scanf("%f", &rendaFamiliar);
        
        printf("Informe o total gasto com alimentação: ");
        scanf("%f", &gastoAlimentacao);
        
        printf("Informe o total gasto com outras despesas: ");
        scanf("%f", &gastoOutros);
        
        printf("Esse aluno gasta %.2f%% de sua renda pessoal e familiar com alimentação e outras despesas.\n", (100*(gastoAlimentacao+gastoOutros)/(rendaPessoal+rendaFamiliar)));
        
        if (gastoOutros > 200){
            quantidadeMais200++;
        }
        if (rendaPessoal > rendaFamiliar){
            quantidadeRendaMaior++;
        }
        contador++;
    }
    printf("%.2f%% dos alunos que gasta acima de R$200,00 com outras despesas.\n", (float) (100*quantidadeMais200)/contador);
    printf("%d alunos tem a renda pessoal maior que a familiar.\n", quantidadeRendaMaior);
    
    
    return 0;
}

