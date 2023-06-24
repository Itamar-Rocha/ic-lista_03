// Exercício 13

#include <stdio.h>
#include <stdbool.h>

// Constantes para deixar o código mais legível
#define EXCELENTE 3
#define BOM 2
#define REGULAR 1

int main()
{
    
    int i, idade, opiniao, quantidadeRegular = 0 , quantidadeExcelente = 0;
    float mediaIdades = 0, percentualBom = 0;
    
    for (i = 0; i < 8; i++){
        
        printf("Informe a idade: ");
        scanf("%d", &idade);
        
        while(true){
            printf("\nInfome a opinião sobre o filme (3 = excelente, 2 = bom, 1 = regular): ");
            scanf("%d", &opiniao);
            
            switch(opiniao){
                case EXCELENTE:
                    quantidadeExcelente++;
                    mediaIdades += idade;
                    break;
                case BOM:
                    percentualBom++;
                    break;
                case REGULAR:
                    quantidadeRegular++;
                    break;
                default:
                    printf("Informe apenas 3, 2 ou 1.");
                    continue;
            }
            break;
        }
    }
    
    // TODO: possível divisão por zero na linha abaixo
    mediaIdades = mediaIdades/quantidadeExcelente;
    percentualBom = (100*percentualBom)/i;
    
    printf("\n\nMédia das idades das pessoas que responderam excelente: %.2f\n", mediaIdades);
    printf("Quantidade de pessoas que responderam regular: %d\n", quantidadeRegular);
    printf("Percentagem de pessoas que responderam bom entre todos os espectadores analisádos: %.2f%%\n", percentualBom);

    
    return 0;
}



