// Exercício 4

#include <stdio.h>

int main()
{
    int i, n;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    
    for (i = 0; i < n+1; i++){
        if (i%2 == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}

