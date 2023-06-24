// Exercício 6

#include <stdio.h>

int main()
{
    int i, n;
    unsigned long fatorial = 1;
    printf("Digite um número natural: ");
    scanf("%d", &n);
    
    for (i = n; i > 0; i--){
        fatorial = fatorial * i;
    }
    
    printf("O fatorial de %d, é %lu", n, fatorial);

    return 0;
}
