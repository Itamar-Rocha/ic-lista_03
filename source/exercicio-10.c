// Exercício 10

#include <stdio.h>

int main()
{
    int numeroMatriz, numeroElementos = 1;
    printf("Informe o número da matriz: ");
    scanf("%d", &numeroMatriz);
    
    
    for (int i = 0; i < numeroMatriz; i++){
        for (int j = 0; j < numeroMatriz; j++){
            printf("%d ", numeroElementos);
            numeroElementos++;
        }
        printf("\n");
    }

    return 0;
}

