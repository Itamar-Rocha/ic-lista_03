// Exercício 9

#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool input = true;
    float notas[2], media = 0;
    do {
    printf("Digite as duas notas: ");
    scanf("%f %f", &notas[0], &notas[1]);
    for (int i = 0; i < 2; i++) {
        if (notas[i] >= 0 && notas[i] <= 10){
            media += notas[i];
        } else {
            break;
        }
    }
    input = false;
    } while (input);
    
    media = media/2;
    printf("Sua média é: %.2f", media);

    return 0;
}
