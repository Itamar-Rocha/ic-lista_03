// Exercício 17

#include <stdio.h>

int main()
{
    int n = 1;
    while (n >= 1){
        int i;
        unsigned long fatorial = 1;
        printf("Digite um número natural: ");
        scanf("%d", &n);
        
        for (i = n; i > 0; i--){
            fatorial = fatorial * i;
        }
        
        printf("O fatorial de %d, é %lu\n", n, fatorial);
    }
    return 0;
}
