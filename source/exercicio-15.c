// Exercício 15

#include <stdio.h>

int main()
{
    int contador = 0;
    float numero;
    while(1){
        printf("Informe um número (zero para sair): ");
        scanf("%f", &numero);
        if (numero == 0){
            break;
        } else if (numero > 100 && numero < 200){
            contador++;
        }
    }
    printf("Foram digitados %d números estritamente entre 100 e 200.\n", contador);
    
    return 0;
}





