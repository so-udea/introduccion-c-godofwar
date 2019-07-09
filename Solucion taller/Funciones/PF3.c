#include <stdio.h>
#include <math.h>
int factorial(int numero);
float sum(int x, int terminos);

int main() {
    int x;
    int terminos;
    
    printf("Ingrese el valor de x: ");
	scanf("%d", &x);
	
	printf("\n Ingrese el número de terminos: ");
	scanf("%d", &terminos);
	
	printf("\nResultado: %f \n", sum(x, terminos));
	
}

float sum(int x, int terminos){
    int signo = -1;
	float sum = 1;
	for(int i = 1; i < terminos; i++){
	    sum = sum + signo*((pow(x ,i*2))/factorial(i*2));
	    if (signo == 1){
            signo = -1;
        }else{
            signo = 1;
        }
	}
	return sum;
}

int factorial(int numero){
    int resultado = 1;
    for(int i = 1; i <= numero; i++){
        resultado = resultado*i;
    }
    return resultado;
}