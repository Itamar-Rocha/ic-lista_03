// Exercício 18

#include <stdio.h>

int main()
{
    int pessoasMenos21 = 0, pessoasMais50 = 0, idade;
    while (1){
        printf("Informe a idade da pessoa(zero para sair): ");
        scanf("%d", &idade);
        
        if (idade == 0){
            break;
        } else if (idade < 21){
            pessoasMenos21++;
        } else if (idade > 50){
            pessoasMais50++;
        }
    }
    printf("Das idades lidas %d foram menores que 21 anos e %d foram maiores que 50 anos.\n", pessoasMenos21, pessoasMais50);
    return 0;
}
