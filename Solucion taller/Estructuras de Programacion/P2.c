#include <stdio.h>

int main (void)
{
    int n;
    printf ("Numero final (empezando de 1): ");
    scanf("%d", &n);
    printf("\nTabla de multiplicación desde 1 hasta %d :\n",n);
    
    for(int i = 1; i <= 10; i++){
        for(int j = 1; j <= n; j++){
            printf("%dx%d = %d, ",i,j,i*j);
        }
        printf("\n");
    }
}