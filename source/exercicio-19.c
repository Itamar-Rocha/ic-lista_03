// Exercício 19

#include <stdio.h>

int main()
{
    char c;
    int controle, quantidadeDeProdutos;
    float preco, precoFinal;
    while (1){
        printf("Informe o número do pedido(zero para sair): ");
        scanf("%d", &controle);
        
        // Loop para limpar a stream com input inútil
        while((c = getchar()) != '\n' && c != EOF){continue;}
        
        if(controle == 0){
            break;
        }
        printf("Informe a data do pedido (dia, mês, ano): ");
        // Fazendo o usuário de trouxa
        scanf("%*s");
        
        printf("Informe o preço do produto: ");
        scanf("%f", &preco);
        
        printf("Informe a quantidade adquirida: ");
        scanf("%d", &quantidadeDeProdutos);
        
        precoFinal += preco*quantidadeDeProdutos;
    }
    
    printf("Total da compra: %.2f\n", precoFinal);
    
    return 0;
}

