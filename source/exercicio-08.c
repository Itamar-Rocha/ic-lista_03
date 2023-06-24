// Exercício 8

#include <stdio.h>

int main()
{
    int n, n1 = 1, n2, i;
    while(i <= 10){
        printf("%d ", n);
        n2 = n1;
        n1 = n;
        n = n1+n2;
        i++;
    }
    
    return 0;
}
