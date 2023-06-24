// Exercício 16

#include <stdio.h>

int main()
{
    int anos;
    double paisA = 5.0, paisB = 7.0;
    while(paisA < paisB){
        paisA += paisA*0.03;
        paisB += paisB*0.02;
        anos++;
    }
    printf("%d anos.\n", anos);
    return 0;
}
