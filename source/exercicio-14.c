// Exercício 14
// TODO: tratar o input do usuário para não quebrar o programa

#include <stdio.h>

int main()
{
    
    const int QUANTIDADE_DE_CIDADES = 5, QUANTIDADE_DE_ATLETAS = 3;
    
    int i, j, atletaMaiorPeso, atletaMenorIdade;
    float pesoMedioTotal = 0, idadeMediaTotal = 0;
    
    for (i = 0; i < QUANTIDADE_DE_CIDADES; i++){
        int idade, menorIdade = 200;
        float peso, maiorPeso = 0, idadeMedia = 0, pesoMedio = 0;
        for (j = 0; j < QUANTIDADE_DE_ATLETAS; j++){
            printf("Informe a idade do atleta %d da Cidade %d: ", j+1, i+1);
            scanf("%d", &idade);
            if (idade < menorIdade){
                menorIdade = idade;
                atletaMenorIdade = j+1;
            }
            idadeMedia += idade;
            
            printf("Informe o peso do atleta %d da Cidade %d: ", j+1, i+1);
            scanf("%f", &peso);
            if (peso > maiorPeso){
                maiorPeso = peso;
                atletaMaiorPeso = j+1;
            }
            pesoMedio += peso;
        }
        printf("\nInformações do time da cidade %d:\n", i+1);
        printf("Peso médio dos atletas: %.2f\n", pesoMedio/j);
        printf("Idade média dos atletas: %.2f\n", idadeMedia/j);
        printf("O atleta %d é o mais jovem e o atleta %d é o mais pesado.\n\n", atletaMenorIdade, atletaMaiorPeso);
        
        pesoMedioTotal += pesoMedio;
        idadeMediaTotal += idadeMedia;
        
    }
    
    printf("\nInformações do campeonato:\n");
    printf("Peso médio de todos os participantes: %.2f\n", pesoMedioTotal/(QUANTIDADE_DE_CIDADES*QUANTIDADE_DE_ATLETAS));
    printf("Idade média de todos os participantes: %.2f\n", idadeMediaTotal/(QUANTIDADE_DE_CIDADES*QUANTIDADE_DE_ATLETAS));
    
    return 0;
}




