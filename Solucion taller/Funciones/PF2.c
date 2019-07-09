#include <stdio.h>
#include <math.h>
double pGeometrica(double x, double n);

int main() {
    double x;
    double n;
    printf("Ingrese el valor de x: \n");
    scanf("%lf", &x);
    printf("Ingrese el valor de n: \n");
    scanf("%lf", &n);
    printf("La suma de la progresión geométrica es: %lf \n", pGeometrica(x, n));
   
}
    
double pGeometrica(double x, double n){
    double r = 0;
    for(int i = 0; i <= n; i++ ){
       r += pow (x, i);
    }
    return r;
}