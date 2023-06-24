// Exercício 11

#include <stdio.h>

int main()
{
    char nome[31];
    float nota1, nota2, media, mediaGeral = 0;
    int i;
    for (i = 0; i < 5; i++){
        if (i != 0){
            getchar();
        }
        printf("Informe o nome do aluno: ");
        fgets(nome, 30, stdin);
        // scanf("%[^\n]", nome);
        printf("Infome as duas notas: ");
        scanf("%f %f", &nota1, &nota2);
        media = (nota1 + nota2)/2;
        
        printf("\n\nNome: %s \nMédia: %.2f\n\n", nome, media);
        mediaGeral += media;
        
    }
    
    printf("\n\nMédia geral da turma: %.2f", mediaGeral/i);
    
    return 0;
}

