// Exercício 3

#include <stdio.h>

int main()
{
    int i = 1, n;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    
    while(i <= 10){
        printf("%d ", n*i);
        i++;
    }
    

    return 0;
}
