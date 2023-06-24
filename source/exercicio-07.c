// Exercício 7

#include <stdio.h>

int main()
{
    int i, n, divisores = 0;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);
    
    for (i = n; i > 0; i--){
        if (n%i == 0){
            divisores++;
        }
    }
    
    if (divisores > 2){
        printf("Não é primo\n");
    } else {
        printf("É primo");  
    }

    return 0;
}