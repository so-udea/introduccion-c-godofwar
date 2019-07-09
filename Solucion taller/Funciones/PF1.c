#include <stdio.h>
int multiplo(int primero, int segundo);

int main() {
    int parejas;
    printf("Ingrese el total de pares deseado (debe ser un número par): ");
    scanf("%d", &parejas);
    
    if(parejas%2 == 0){
    int PrimerosN[parejas];
    int SegundosN[parejas];
    printf("\nIngrese el par de números de uno en uno.\n");
    int nPareja = 1; 
    
    for (int i = 0 ; i < (2*parejas); ++i) {
        if (i%2 == 0)
        {
            printf("\nEl primer número de la pareja es #%d: ", nPareja);
            scanf("%d", &PrimerosN[nPareja]);
        }
        else
        {
            printf("El segundo numero de la pareja es #%d: ", nPareja);
            scanf("%d", &SegundosN[nPareja]);
            nPareja++;
        }
        
    }
    printf("\n");
    for (int i = 1; i <= parejas; i++){
        printf("El resultado de la pareja %d es : %d\n", i, multiplo(PrimerosN[i], SegundosN[i]));
    }
	
    }else{

      printf("\nDebe ingresar una cantidad par de enteros.\n");
    }
}
    

int multiplo(int primero, int segundo){
    int resultado = 1;
    
    if (segundo % primero == 0 )
        resultado = 1;
    else
        resultado = 0;
    
    return resultado;

    }
    
