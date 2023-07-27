// Exercício 9

#include <stdio.h>

int main()
{
	float notas[2], media = 0;
		while(1){
			printf("Digite as duas notas: ");
			scanf("%f %f", &notas[0], &notas[1]);
			int i;
			for (i = 0; i < 2; i++) {
				if (notas[i] >= 0 && notas[i] <= 10){
					media += notas[i];
				} else {
					printf("As notas informadas devem entre 0 e 10!\n");
					break;
				}
			}
			if (i == 2){
				break;
			}
		}
	media = media/2;
	printf("Sua média é: %.2f", media);
	return 0;
}
